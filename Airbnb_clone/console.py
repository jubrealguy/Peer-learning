#!/usr/bin/python3

import cmd
import shlex
from models.base_model import BaseModel 
class HBNBCommand(cmd.Cmd):
    
    prompt = "(hbnb)"
    classes = {"BaseModel": BaseModel}

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
if __name__ == '__main__':
    HBNBCommand().cmdloop()
