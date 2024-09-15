#!/bin/bash

# Create directories for system engineering and devops
mkdir -p 04_system-engineering-and-devops/{bash/{00_shell-basics,01_shell-permissions,02_shell-io-redirections-and-filters,03_shell-init-files-variables-and-expansions,04_loops-conditions-and-parsing,05_processes-and-signals},scripting/{06_regular-expression,15_api,16_api-advanced},networking/{07_networking-basics-0,08_networking-basics-1},web-stack/{09_web-infrastructure-design,0c_web-server,0f_load-balancer,10_https-ssl,11_what-happens-when,14_mysql,18_webstack-monitoring,1a_application-server},security/{0b_ssh,13_firewall},on-call/{19_postmortem},ci-cd/{0a_configuration-management},web-stack-debugging/{0d_web-stack-debugging-0,0e_web-stack-debugging-1,12_web-stack-debugging-2,17_web-stack-debugging-3,1b_web-stack-debugging-4}}

# Function to create README.md with folder name as title
create_readme() {
  for dir in "$@"; do
    echo "# $(basename "$dir" | tr '_' ' ' | tr '-' ' ')" > "$dir/README.md"
  done
}

# Create README.md files in each subdirectory of system engineering and devops
create_readme 04_system-engineering-and-devops/*/*

echo "Directories and README.md files created successfully."
