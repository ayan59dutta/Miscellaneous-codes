
# PROBLEM STATEMENT
'''
There is a tournament between two teams. The tournament consists of N rounds. Each team has N competitors. Each competitor has a power between a-z and if the power of two competitors matches in a round then that round will going to be drawn. You have to find the maximum number of draw rounds possible.

Input Format:

The first line of input contains T, denotes the total number of test cases.

Each test case contains an Integer N denotes the number of rounds.

Next two lines will contain a string of lowercase letters of length N denoting the power of N competitors of both teams.

Output Format:

Output the answer in a new line.

Constraints:

1 <= T <= 10
1 <= N <= 105 
String will contain only lowercase alphabet

SAMPLE INPUT 
2
4
aabc
zcaa
5
pqrrs
rsptr
SAMPLE OUTPUT 
3
4
Explanation
Testcase 1 - 

    Possible draw matches are possible between a, a, c.

Testcase 2 -

    Possible draw matches are possible between r, s, p, r.



'''

# SOLUTION

# Write your code here
from collections import Counter
t = int(input())
for k in range(t):
    n = int(input())
    s1 = input()
    s2 = input()
    c=0
    s1 = Counter(s1) 
    s2 = Counter(s2) 
    
    cm = s1 & s2
    cm1 = list(cm.elements()) 
    c = len(cm1)
    print(c)
