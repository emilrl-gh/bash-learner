#!/bin/sh

UPSTREAM=${1:-'@{u}'}
LOCAL=$(git rev-parse @)
REMOTE=$(git rev-parse "$UPSTREAM")
BASE=$(git merge-base @ "$UPSTREAM")
red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
bold=`tput bold`
if [ $LOCAL = $REMOTE ]; then
    echo "${green} ${bold}"
    echo "Bash-learner is up-to-date ${reset}"
elif [ $LOCAL = $BASE ]; then
    echo "${green}Need to update using the command: make update. Please type Control + C to stop and run the command.${reset}"
else
    echo ""
fi
