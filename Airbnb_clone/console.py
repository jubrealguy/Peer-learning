#!/usr/bin/python3

import cmd
import shlex
from models.base_model import BaseModel
from models.user import User
from models.state import State
from models.city import City
from models.amenity import Amenity
from models.place import Place
from models.review import Review
from models import storage

class HBNBCommand(cmd.Cmd):
    
    prompt = "(hbnb)"
    classes = {"BaseModel": BaseModel, "User": User, "State": State, "City": City, "Amenity": Amenity, "Place": Place, "Review": Review}

    def do_quit(self, arg):
        """ Quit command to exit the program """
        return True

    def do_EOF(self, arg):
        """ EOF command to exit the program """
        return True

    def emptyline(self):
        """emptyline command that doesn't execute anything """
        pass

    def do_create(self, arg):
        """ create command that creates a new instance """
        if not arg:
            print("** class name missing **")
        elif arg in self.classes.keys():
            obj = self.classes[arg]()
            obj.save()
            print(obj.id)
        else:
            print("** class doesn't exist **")

    def do_show(self, arg):
        """ Show command that prints the object """
        if arg:
            args = shlex.split(arg)
            if args[0] not in self.classes.keys():
                print("** class doesn't exist **")
                return
            try:
                self.show_obj(storage.all(), args)

            except KeyError:
                print("** no instance found **")
            except IndexError:
                print("** instance id missing **")
        else:
             print("** class name missing **")

    def show_obj(self, dic, args):
        dic = storage.all()
        obj = dic[args[0] + "." + args[1]]
        print(obj)
    
    def do_destroy(self, arg):
        """ Destroy command that removes an object """
        if arg:
            args = shlex.split(arg)
            if args[0] not in self.classes.keys():
                print("** class doesn't exist **")
            try:
                self.destroy_obj(storage.all(), args)
            except KeyError:
                print("** no instance found **")
            except IndexError:
                print("** instance id missing **")
        else:
            print("** class name missing **")

    def destroy_obj(self, dic, args):
        del dic[args[0] + "." + args[1]]
        storage.save()

    def do_all(self, arg):
        """ All command that prints all instances """
        obj_dict = storage.all()
        obj_list = []

        if not arg:
            for obj in obj_dict.values():
                obj_list.append(str(obj))
        else:
            try:
                args = shlex.split(arg)
                name = args[0]
                class_name = self.classes[name]
                for obj in obj_dict.values():
                    if type(obj) == class_name:
                        obj_list.append(str(obj))
            except KeyError:
                print("** class doesn't exist **")
                return
        print(obj_list)

    def do_update(self, arg):
        """ Update command that updates an instance """
        if arg:
            args = shlex.split(arg)
            if args[0] not in self.classes.keys():
                print("** class doesn't exist **")
                return
            try:
                dic = storage.all()
                obj = dic[args[0] + '.' + args[1]]
                self.update_value(obj, args)
                storage.save()
            except KeyError:
                print("** no instance found **")
            except IndexError:
                print("** instance id missing **")
        else:
            print("** class name missing **")

    def update_value(self, obj, args):
        if len(args) < 3:
            print("** attribute name missing **")
            return
        elif len(args) < 4:
            print("** value missing **")
            return
        try:
            if hasattr(obj, args[2]):
                value = type(getattr(obj, args[2]))(args[3])
                setattr(obj, args[2], value)
            else:
                setattr(obj, args[2], args[3])
        except TypeError:
            print("** value missing **")

if __name__ == '__main__':
    HBNBCommand().cmdloop()
