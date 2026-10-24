10/24/26 
Tried creating the Github repo for the project purely from the terminal. Initially I initialized via "git init" to create the hidden .git file. But then I did "git add ." to add all of the files within the repo that are meant to be pushed. Then tried committing but since nothing was in the directory, it threw a message mentioning nothing to be committed. Then I tried creating the github repo via the "gh repo create emb_project --public --source=. --remote=origin --push" but that didnt work because there was nothing to push. The correct method is as follows:
- "git add ." or "git add {insert file name}" to add the files you want to commit to the repo
- "git commit -m {insert message}" which acts as a snapshot of all of the files, permanently saved in my local Git history 
- "git push" or "git --push" to actually push the changes into the Github repo 

