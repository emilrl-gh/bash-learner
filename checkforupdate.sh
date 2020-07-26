#!/bin/sh

UPSTREAM=${1:-'@{u}'}
LOCAL=$(git rev-parse @)
REMOTE=$(git rev-parse "$UPSTREAM")
BASE=$(git merge-base @ "$UPSTREAM")
red=`tput setaf c1`
green=`tput setaf 2`
reset=`tput sgr0`
bold=`tput bold`
[ $(git rev-parse HEAD) = $(git ls-remote $(git rev-parse --abbrev-ref @{u} | \
sed 's/\// /g') | cut -f1) ] && echo "${bold}${green}Bash-learner is up-to-date ${reset}" || echo "${bold}${red}Need to update using the command: make update. Please type Control + C to stop and run the command.${reset}"