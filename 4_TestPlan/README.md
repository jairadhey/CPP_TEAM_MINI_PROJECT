# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                             |**Exp I/P**| **Test** |
|-------------|---------------------------------------------|------|-------------|
| H_01 | Check Rows if someone won the game |x x x| Requirement based |
| H_02 | Check Columns if someone won the game |x x x|Requirement based |
| H_03 |Check Diagonals if someone won the game|x x x|Requirement based |


## Table no: Low level test plan

| **Test ID** | **Description**                            | **Exp IN** | **Exp OUT** | **Actual Out	** | **Test** |
|-------------|--------------------------------------------|------------|------------|------------|------------|
| L_01 |	insert Value	|1 1 'O'|	O on (1,1)	|O on (1,1)	| Scenario based test
| L_02	|insert Value	|2 1 'X'|	X on (2,1)|	O on (2,1)	|Scenario based test
| L_03	|Grid is Full|	void|	_ _ _	|3 empty spaces	|Scenario based test
|L_04	|Grid is Full|	void	|X X X	|0 empty spaces	|Scenario based test
