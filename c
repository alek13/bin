#!/usr/bin/env bash

. colors

c.header 'git status';
git status;
c.header 'git pull';
git pull;
c.header 'git status';
git status;
c.header 'git add .';
git add .;
c.header 'git status';
git status;
sleep 0.5;
c.header 'git diff --cached';
sleep 0.5;
git diff --cached;



c.header ' Committing: ';
c.askContinue "Continue contributing";
read -p "Enter commit message: " message;
echo;
git commit -m "$message";


c.header ' Git Status: ';
git status;

c.header ' Pushing: ';
c.askContinue "Push to remote";
git push;
