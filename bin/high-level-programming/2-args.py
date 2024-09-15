#!/usr/bin/python3

if __name__ == "__main__":
    """prints the number of and the list of its arguments."""
    from sys import argv
    arg_number = len(argv) - 1
    print("{} arguments.".format(arg_number) if arg_number < 1 else "{} argument:".format(arg_number))

    # handle the loop aspect
    if arg_number > 0:
        for i in range(1, len(argv)):
            print("{}: {}".format(i, argv[i]))

