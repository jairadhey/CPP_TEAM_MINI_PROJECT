# Introduction

## Why This Project?
Since the 1970s people started to take interest in using their computers as an entertainment environment, thus, the multi billion game industry was starting to take shape. Having presented earlier the sum of money this industry produces, I decided to have a go and create a game of myown. As a kid, I was always fascinated by the idea of becoming a game developer, but, as yearswent by, I have realized this is not exactly what programming and computer science, as a practice,are about and I dropped the idea. However, the third year project offered me the possibility to tryand achieve one of my childhood’s dreams and I couldn’t resist the temptation.

##  Gaming in the Field of Software Engineering
Tic-tac-toe  is  not  a  very  challenging  game  for  humanbeings.  If you’re  an  enthusiast, you’ve  probably  movedfrom  the  basic  game  to  some  variant  like  threedimensional  tic-tac-toe on  a larger  grid.  If you sit downright now to play ordinary three-by-three tic-tac-toe with a  friend,  what  will  probably  happen  is  that  every  game will  come  out  a  tie.  Both  you  and  your  friend  can probably  play  perfectly,  never  making  a  mistake  that would allow your opponent to win. But can you describe how  you  know  where  to  move  each  turn?  Most  of  thetime, you  probably  aren’t  even  aware  of  alternative possibilities; you just look at the board and instantly knowwhere you want to move. That kind of instant knowledge is  great  for  human  beings,  because  it  makes  you  a  fastplayer.  But  it  isn’t  much  help  in  writing  a computer program. For that, you have to know very explicitly what your strategy is.
# The scope of the study 
There  will  be  a  straightforward  square  amusement board separated into 16 tiles or lattice spaces. At the point when the player taps on one of the lattice spaces, it will be relegated  either  a  "X"  or  an "O".  The diversion  is over when one  player claims  4 matrix spaces  in succession or there are no moves left. The amusement will have a little measure of clean to make it finish. Toward the beginning of the diversion, the board  won't be dynamic until  the point that the primary player has picked whether they are to play "X" or "O". A board will demonstrate whose turn it is. At the point when the diversion is more than, a pennant will show the champ or declare a draw if nobody wins. A restart catch  will  be  shown  when  the  amusement  is  finished, restoring the diversion to the beginning state when clicked. 
# Implementation Details
As with any software package thatprovides asimple interface for the user,TICTACTO was atedious program to write. The majority of the complexity of implementing the rules has been hiddenborn the user. As noted by Townsend andFeucht, the most difcult problem in theimplementation of an expert system in theconversion of the knowledge into a form that can be used by the computereffectively and still be understood by theuser. 4Anyone considering asimilarexercise is advised to spend some timedevising as many labor-savingmechanisms as possible. One such mechanism applicable to tic-tac-toe is provided here as an example.Consider the following puzzle in which the goal is to distribute the digits 1 through 9 in a 3 by 3 grid so that every line of threedigits sums to 15 (horizontally, verticallyand diagonally). One solution is This pattern can be used to simple & theimplementation of the rules listed in Table in the following manner. Let eachplayer build alist of the digits 1 through 9 whose positions in this puzzle correspond to moves made in tic-tac-toe. With this correspondence established, the task of looking for away of making three-in-a-row becomes asearch for an unused digit,which when combined with apair of cligits already held, sums to 15. Theimplementations of several of the the rules in TICTACTO were made easier using this analogy. This is an example ofthe transformation of pattern matching problems into arithmetic problems, which more readily lend themselves to computer solution.

# 4W's and 1'H
## Who:
Kids and adults looking for a fun activity.
## What:
Players can use this program to play and enjoy among themselves and competet with each other.
## When:
Games are considered as a source entertainment and learning since time immemorial. This game too, can be accessed and played any time.
## Where:
Players have to be together with the device in order to enjoy the game.
## How:
Computer or Laptop.
# High level requirements :
ID | DESCRIPTION      | STATUS
---|------------------|-------
HR01|Windows/Linux OS	|IMPLEMENTED
HR02|Visual Studio(C++ Language)|IMPLEMENTED
HR03|Hard Disk(2GB)|IMPLEMENTED
HR04|Availabity of game anytime|IMPLEMENTED

# Low level requirements :
ID|DESCRIPTION|HLRID|STATUS
--|------------|----|------
LR01|User can play with computer|IMPLEMENTED
LR02|2 Users can play at a time|IMPLEMENTED
