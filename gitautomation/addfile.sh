git add $1
echo "What is your commit message ?"
read msg
git commit -m "$msg"
echo "Pulling"
git pull
echo "Pushing to your repository"
git push origin master
