# Challenge Description: http://www.codeeval.com/open_challenges/22/

import sys

def Fibo(list,n):
    if n < 0:
        raise ValueError("Invalid input. The number must be non-negative.")
    while len(list) < n+1:
    	list.append(list[-1] + list[-2])
    return list[n]

if(__name__=="__main__"):
    file = sys.argv[1]

    f = open(file)
    data = f.read()
    f.close()

    nums = [int(i) for i in data.split("\n")[:-1]]

    list=[0,1]

    print "\n".join([str(Fibo(list,i)) for i in nums])
