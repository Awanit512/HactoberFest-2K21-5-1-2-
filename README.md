



<h1 align="center">
    π©βπ»π Hacktoberfest ππ¨βπ»
</h1>



### CPP,JAVA Python Programs Interview Questions including datas structures and algorithm.
### Repo also includes System Design Interview Questions. 
<br>
<h2 align="center">
  Well-Structured Generic Problems with Solutions in Java, C++ and Python β¨
</h2>

</br>

## Flow of Files


# HacktoberFest

π― If you are a beginner, and looking for your first contribution, we are here to help. Just append a program and its short description in our
https://github.com/Awanit512/HactoberFest-2K21-5-1-2-
and that counts as your first PR. π―
</br>

## Contributing to Hacktoberfest 2021 π¨πΌβπ»

 <img src="hacktober.png" />
 Open source is changing the world - one pull request at a time.
π§πΌβπ Hacktoberfest encourages participation in the open source community, which grows bigger every year. Complete the 2021 challenge and earn a limited edition T-shirt.

</br>

``
ππΌββοΈHacktoberfest is open to everyone in our global community. Whether youβre new to development, a student, long-time contributor, event host, or company of any size, you can help drive growth of open source and make positive contributions to an ever-growing community. All backgrounds and skills levels are encouraged to complete the challenge.ππΌββοΈ
``

### π» Make all Pull requests to the "develop" branch only. Let's maintain a stable main(master) branch that is deployed. Changes would be merged later on to the main(master) branch.

## Instructions: ππΌ ππΌββοΈ

### 0οΈβ£ β©Register yourself for Hacktoberfest 2021

###### Link to register: https://hacktoberfest.digitalocean.com/

### 1. π° Setup Your computer
##### Download [Git](https://git-scm.com/download) and after installing go to git bash or cmd window and setup your identity using
`git config --global user.name "Github wala username"`
 `git config --global user.email example@gmail.com`

 ##### Download and install [VS code editor](https://code.visualstudio.com/download) for getting good feel while writing codes

### 2. π°Star and Fork this Repository

###### You can star β­ and fork π½οΈ this repository on GitHub by navigating at the top of this repository.

###### GitHub repository URLs will reference both the username associated with the owner of the repository, as well as the repository name.

###### When youβre on the main page of the repository, youβll see a button to "Star" and βForkβ the repository on your upper right-hand side of the page, underneath your user icon.

### 3. π°Clone the Repository

###### To make your own local copy of the repository you would like to contribute to, letβs first open up a terminal window(Command prompt).

###### Weβll use the `git clone` command along with the URL that points to your fork of the repository.

###### This URL will be similar to the URL above, except now it will end with `.git.` In the example above, the URL will look like this:

https://github.com/your-username/CodeToGrow

###### You can alternatively copy the URL by using the green βClone or downloadβ button from your repository page that you just forked from the original repository page. Once you click the button, youβll be able to copy the URL by clicking the binder button next to the URL.

###### Once we have the URL, weβre ready to clone the repository. To do this, weβll combine the git clone command with the repository URL from the command line in a terminal window:

`git clone https://github.com/your-username/CodeToGrow.git`

### 4. πCreate a New Branch

###### To create your own branch, from your terminal window, change your directory so that you are working in the directory of the repository. Be sure to use the actual name of the repository (i.e. CodeToGrow) to change into that directory.

##### ` cd CodeToGrow`

###### Now, weβll create our new branch with the git branch command. Make sure you name it descriptively so that others working on the project understand what you are working on.

##### `git branch new-branch`(Here branch name is `new-branch`)

###### Now that our new branch is created, we can switch to make sure that we are working on that branch by using the git checkout command:

##### `git checkout new-branch`

###### Once you enter the git `checkout` command, you will receive the following output:

###### `Output:`

##### `Switched to branch 'new-branch' `

###### At this point, you can now modify existing files or add new files to the project on your own branch.

#### Make Changes Locally
##### For Ex:
##### Open the folder in VS code manually or use `code .` in command prompt it will directly open the all the files in editor.
##### Add solution file(with .java/.cpp/.py extention) to the already available question in any directory ***OR*** add a folder with question name as folder, add `Question.md`or`Question.txt` file which contains question in text along with sample input and output also add solution in any of the language mentioned. The file flow after this should look like:

- Recursion Backtracking
  - N-Queen(this will be folder of question)
    - `Question.md`
    - `NQueen.java`
    - `NQueen.cpp`
    - `NQueen.py`
  - another question folder...

##### One need not upload answers in all three languages, solution in any one language is fine. 
###### Once you have modified existing files or added new files to the project, you can add them to your local repository. You can do with the git add command. Letβs add the -A flag to add all changes that we have made:

##### `git add -A` or `git add .`

###### Next, weβll want to record the changes that we made to the repository with the git commit command.

###### The commit message is an important aspect of your code contribution; it helps the other contributors to fully understand the change you have made, why you made it, and how significant it is. Additionally, commit messages provide a historical record of the changes for the project at large, helping future contributors along the way. Thus, you must ensure that you write a meaningful commit message.

###### If you have a very short message, you can record that with the -m flag and the message in quotes:

###### `Example:`

##### `git commit -m "Added Recursion questions"`

###### At this point you can use the git push command to push the changes to the current branch of your forked repository:

###### ` Example:`

##### `git push --set-upstream origin new-branch`(Assuming your branch name as "new-branch")

#### :zap::zap:NOTE: After this you can directly go to github and create pull request to Base YABHAKRITI repository i.e step 8. Else for getting more clear understanding of working on github follow steps 5,6,7 that will help in syncing the project to remote Repo, this is very important when you are working on group project.

### 5. πUpdate Local Repository

###### While working on a project alongside other contributors, it is important for you to keep your local repository up-to-date with the project as you donβt want to make a pull request for code that will cause conflicts. To keep your local copy of the code base updated, youβll need to sync changes.

###### Weβll first go over configuring a remote to the fork, then syncing the fork.

### 6. ππ»Configure a Remote Repository to the Forked Repository

###### Next, youβll have to specify a new remote upstream repository for us to sync with the fork. This will be the original repository that you forked from. Youβll have to do this with the git remote add command.

    git remote add upstream git@github.com:Awanit512/HactoberFest-2K21-5-1-2-.git

###### In this example, // upstream // is the shortname we have supplied for the remote repository since in terms of Git, βupstreamβ refers to the repository that you cloned from. If you want to add a remote pointer to the repository of a collaborator, you may want to provide that collaboratorβs username or a shortened nickname for the shortname.

### 7. ππ»Sync the Fork

###### Once you have configured a remote repository that references the upstream and original repository on GitHub, you are ready to sync your fork of the repository to keep it up-to-date.

###### To sync your fork, from the directory of your local repository in a terminal window, youβll have to use the // git fetch // command to fetch the branches along with their respective commits from the upstream repository. Since you used the shortname βupstreamβ to refer to the upstream repository, youβll have to pass that to the command:

##### `git fetch upstream`

###### Switch to the local master(main) branch of our repository:

##### `git checkout main`

###### Now merge any changes that were made in the original repositoryβs main branch, that you will access through your local upstream/main branch, with your local main branch:

##### `git merge upstream/main`

### 8. ππ»Create Pull Request

###### At this point, you are ready to make a pull request to the original repository. Make PRs' to the develop branch only!

###### Now navigate to your forked repository, and press the βNew pull requestβ button on your left-hand side of the page.

## π π Hurray!!! You just got closer to completing your hacktoberfest challenge. π

## Happy?? Star β­ this Repo. π€©

## π© Check your Hacktoberfest Contribution status at: ππΌββοΈ

<a href="https://hacktoberfest.digitalocean.com/profile" target="blank">https://hacktoberfest.digitalocean.com/profile</a>

### π€ͺ π€¨ π§ π€ π Thanks to our awesome contributors π€ͺ π€¨ π§ π€ π

