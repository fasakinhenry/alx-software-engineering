#!/bin/bash

# Create directories for higher-level programming
mkdir -p 03_higher_level_programming/{00_python/{00_hello-world,01_if-else-loops-functions,02_import-modules,03_data-structures-lists-tuples,04_more-data-structures-set-dictionary,05_exceptions,06_classes-and-objects,07_test-driven-development,08_more-classes-and-objects,09_everything-is-object,0a_inheritance,0b_input-output,0c_almost-a-circle,0f_object-relational-mapping,10_network-0,11_network-1},12_javascript/{00_warm-up,01_objects-scopes-closures,02_web-scraping,03_web-jquery},0d_sql/{00_introduction,01_more-queries},00_airbnb-clone/{00_the-console,01_web-static,02_mysql,03_deploy-static,04_web-framework,05_restful-api,06_web-dynamic}}

# Function to create README.md with folder name as title
create_readme() {
  for dir in "$@"; do
    echo "# $(basename "$dir" | tr '_' ' ' | tr '-' ' ')" > "$dir/README.md"
  done
}

# Create README.md files in each subdirectory of higher-level programming
create_readme 03_higher_level_programming/00_python/*
create_readme 03_higher_level_programming/12_javascript/*
create_readme 03_higher_level_programming/0d_sql/*
create_readme 03_higher_level_programming/00_airbnb-clone/*

echo "Directories and README.md files created successfully."
