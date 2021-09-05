# Introduction

## Why This Project?
Since the 1970s people started to take interest in using their computers as an entertainment environment, thus, the multi billion game industry was starting to take shape. Having presented earlier the sum of money this industry produces, I decided to have a go and create a game of myown. As a kid, I was always fascinated by the idea of becoming a game developer, but, as yearswent by, I have realized this is not exactly what programming and computer science, as a practice,are about and I dropped the idea. However, the third year project offered me the possibility to tryand achieve one of my childhood’s dreams and I couldn’t resist the temptation.

# Implementation Details
As with any software package thatprovides asimple interface for the user,TICTACTO was atedious program to write. The majority of the complexity of implementing the rules has been hiddenborn the user. As noted by Townsend andFeucht, the most difcult problem in theimplementation of an expert system in theconversion of the knowledge into a form that can be used by the computereffectively and still be understood by theuser. 4Anyone considering asimilarexercise is advised to spend some timedevising as many labor-savingmechanisms as possible. One such mechanism applicable to tic-tac-toe is provided here as an example.Consider the following puzzle in which the goal is to distribute the digits 1 through 9 in a 3 by 3 grid so that every line of threedigits sums to 15 (horizontally, verticallyand diagonally). One solution is This pattern can be used to simple & theimplementation of the rules listed in Table in the following manner. Let eachplayer build alist of the digits 1 through 9 whose positions in this puzzle correspond to moves made in tic-tac-toe. With this correspondence established, the task of looking for away of making three-in-a-row becomes asearch for an unused digit,which when combined with apair of cligits already held, sums to 15. Theimplementations of several of the the rules in TICTACTOE were made easier using this analogy. This is an example ofthe transformation of pattern matching problems into arithmetic problems, which more readily lend themselves to computer solution.
# SWOT Analysis
![image (2)](https://user-images.githubusercontent.com/86196905/132130471-7f01992b-1dfa-4e47-b9cb-64229e4d20a7.jpg)

# High level requirements :
ID | DESCRIPTION      | STATUS
---|------------------|-------
HR01|Windows/Linux OS	|IMPLEMENTED
HR02|Visual Studio(C++ Language)|IMPLEMENTED
HR03|Hard Disk(2GB)|IMPLEMENTED
HR04|Availabity of game anytime|IMPLEMENTED

# Low level requirements :
ID|DESCRIPTION|STATUS
--|------------|------
LR01|User can play with computer|IMPLEMENTED
LR02|2 Users can play at a time|IMPLEMENTED
# Uml Diagrams
![Single Player](https://user-images.githubusercontent.com/86196905/132130448-c21be19d-8b90-4115-8893-0d68126d885d.png)
![Two Players](https://user-images.githubusercontent.com/86196905/132130462-1319430b-a789-4b43-90d2-a470d83f0796.png)
