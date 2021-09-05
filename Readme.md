## Why This Project?
Since the 1970s people started to take interest in using their computers as an entertainment environment, thus, the multi billion game industry was starting to take shape. Having presented earlier the sum of money this industry produces, I decided to have a go and create a game of myown. As a kid, I was always fascinated by the idea of becoming a game developer, but, as yearswent by, I have realized this is not exactly what programming and computer science, as a practice,are about and I dropped the idea. However, the third year project offered me the possibility to tryand achieve one of my childhood’s dreams and I couldn’t resist the temptation.

# Implementation Details
As with any software package thatprovides asimple interface for the user,TICTACTO was atedious program to write. The majority of the complexity of implementing the rules has been hiddenborn the user. As noted by Townsend andFeucht, the most difcult problem in theimplementation of an expert system in theconversion of the knowledge into a form that can be used by the computereffectively and still be understood by theuser. 4Anyone considering asimilarexercise is advised to spend some timedevising as many labor-savingmechanisms as possible. One such mechanism applicable to tic-tac-toe is provided here as an example.Consider the following puzzle in which the goal is to distribute the digits 1 through 9 in a 3 by 3 grid so that every line of threedigits sums to 15 (horizontally, verticallyand diagonally). One solution is This pattern can be used to simple & theimplementation of the rules listed in Table in the following manner. Let eachplayer build alist of the digits 1 through 9 whose positions in this puzzle correspond to moves made in tic-tac-toe. With this correspondence established, the task of looking for away of making three-in-a-row becomes asearch for an unused digit,which when combined with apair of cligits already held, sums to 15. Theimplementations of several of the the rules in TICTACTOE were made easier using this analogy. This is an example ofthe transformation of pattern matching problems into arithmetic problems, which more readily lend themselves to computer solution.
# Contributors
Ps no|Name
--------|-------------------
99005841|Bysani Rakesh
99005831|Radhe Shyam Pandey
## Folder Structure 

Sr_no |Explanation.
---------------|----------------------------------------------
1_Requirements | All the Requirements of the project are here.
2_Design | THe Design part of the project all the structure diagrams are here in this folder.
3_Implementation | This folder includes coding part.
4_TestPlan | This section included test cases and test plan.
5_Report | This folder contains overall report of the project. 
6_Recordings | This folder contains images and videos of project .
## Workflow

code quality score |code quality grade | Codacy Badge | Code Quality - Static Code - Cppcheck | Contribution Check - Git Inspector
-------------------|-------------------|--------------|---------------------------------------|-----------------------------------
![code quality score](https://www.code-inspector.com/project/27368/score/svg)|
![code quality grade](https://www.code-inspector.com/project/27368/status/svg)|
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/e7b690c885ad4b71bedc6f313ce46785)](https://www.codacy.com/gh/jairadhey/CPP_TEAM_MINI_PROJECT/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=jairadhey/CPP_TEAM_MINI_PROJECT&amp;utm_campaign=Badge_Grade)|
[![Code Quality - Static Code - Cppcheck](https://github.com/jairadhey/CPP_TEAM_MINI_PROJECT/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/jairadhey/CPP_TEAM_MINI_PROJECT/actions/workflows/cppcheck.yml)|
[![Contribution Check - Git Inspector](https://github.com/jairadhey/CPP_TEAM_MINI_PROJECT/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/jairadhey/CPP_TEAM_MINI_PROJECT/actions/workflows/gitinspector.yml)
