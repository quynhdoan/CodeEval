# Challenge Description: http://www.codeeval.com/open_challenges/24/
# Print out the sum of integers read from a file.
import sys

if(__name__=="__main__"):
    file = sys.argv[1]

    f = open(file)
    data = f.read()
    f.close()

    print sum([int(i) for i in data.split("\n")[:-1]])
