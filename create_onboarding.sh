#!/bin/bash

# Create directories for onboarding
mkdir -p 00_onboarding/00_getting-started/{00_welcome-on-board,01_getting-hooked-on-slack,02_deep-dive-into-the-intranet,03_introduction-to-mindsets,04_a-tweet-a-day,05_map-your-mind,06_you-and-your-learning-community,07_grit-assignment-part-2,08_your-network-is-your-net-worth,09_owning-your-learning,10_preserving-your-mental-health} \
00_onboarding/01_tools/{00_shell-navigation,01_emacs,02_vi,03_git}

# Function to create README.md with folder name as title
create_readme() {
  for dir in "$@"; do
    echo "# $(basename "$dir" | tr '_' ' ' | tr '-' ' ')" > "$dir/README.md"
  done
}

# Create README.md files in each subdirectory of getting-started
create_readme 00_onboarding/00_getting-started/*

# Create README.md files in each subdirectory of tools
create_readme 00_onboarding/01_tools/*

echo "Directories and README.md files created successfully."
