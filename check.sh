#!/bin/sh

UPSTREAM=${1:-'@{u}'}
LOCAL=$(git rev-parse @)
REMOTE=$(git rev-parse "$UPSTREAM")
BASE=$(git merge-base @ "$UPSTREAM")
BIRed='\033[1;91m'
NC='\033[0m'
BIGreen='\033[1;92m' 
if [ $LOCAL = $REMOTE ]; then
    echo "${BIGReen}Bash-learner is up-to-date"
elif [ $LOCAL = $BASE ]; then
    echo "${BIRed}Need to update using the command: make update. Please type Control + C to stop and run the command.${NC}"
else
    echo ""
fi
