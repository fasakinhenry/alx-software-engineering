#!/bin/bash

# Create directories for low-level programming
mkdir -p 02_low-level_programming/{00_hatching-out/{00_c-hello-world,01_c-variables-if-else-while,02_c-functions-nested-loops,03_c-debugging,04_c-more-functions-more-nested-loops,05_c-pointers-arrays-and-strings,06_c-more-pointers-arrays-and-strings,07_c-even-more-pointers-arrays-and-strings,08_c-recursion,09_c-static-libraries,0a_c-argc-argv,0b_c-malloc-free,0c_c-more-malloc-free,0d_c-preprocessor,0e_c-structures-typedef,0f_c-function-pointers,10_c-variadic-functions,11_c-printf,14_c-bit-manipulation,18_c-dynamic-libraries,1c_c-makefiles},01_data-structures-and-algorithms/{12_c-singly-linked-lists,13_c-more-singly-linked-lists,17_c-doubly-linked-lists,19_c-stacks-queues-lifo-fifo,1a_c-hash-tables,1b_c-sorting-algorithms-big-o,1d_c-binary-trees,1e_c-search-algorithms},02_linux-and-unix-system-programming/{15_c-file-io,16_c-simple-shell}}

# Function to create README.md with folder name as title
create_readme() {
  for dir in "$@"; do
    echo "# $(basename "$dir" | tr '_' ' ' | tr '-' ' ')" > "$dir/README.md"
  done
}

# Create README.md files in each subdirectory of low-level programming
create_readme 02_low-level_programming/00_hatching-out/*
create_readme 02_low-level_programming/01_data-structures-and-algorithms/*
create_readme 02_low-level_programming/02_linux-and-unix-system-programming/*

echo "Directories and README.md files created successfully."
