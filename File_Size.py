# Challenge Description: http://www.codeeval.com/open_challenges/26/
# Print the size of a file in bytes.

import sys
import os

print os.path.getsize(sys.argv[1])
