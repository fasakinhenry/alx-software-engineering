#!/bin/bash

# Create directories for technical writing and networking
mkdir -p 05_technical-writing-and-networking/00_social-media/{00_professional-relationships,01_professional-social-presence}

# Function to create README.md with folder name as title
create_readme() {
  for dir in "$@"; do
    echo "# $(basename "$dir" | tr '_' ' ' | tr '-' ' ')" > "$dir/README.md"
  done
}

# Create README.md files in each subdirectory of technical writing and networking
create_readme 05_technical-writing-and-networking/00_social-media/*

echo "Directories and README.md files created successfully."
