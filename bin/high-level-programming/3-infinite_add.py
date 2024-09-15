#!/usr/bin/python3

if __name__ == "__main__":
    """prints the result of the addition of all arguments"""
    from sys import argv
    arg_number = len(argv) - 1

    # handle the loop aspect
    if arg_number > 0:
        for i in range(1, len(argv)):
            print("{}: {}".format(i, argv[i]))

