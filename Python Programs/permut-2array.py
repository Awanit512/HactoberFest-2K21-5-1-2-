def twoArrays (k, A, B):

	for i,j in zip (A,B): if i +j >=k:

		f=1

	else:

		f=0

		break

	if f:

		return "YES"

	else:

		return "NO"

if_name__ == '_main_':

	fptr = open(os.environ['OUTPUT_PATH'], 'w')

	q = int(input().strip())

	for quitr in range (q): first_multiple_input = input().rstrip().split()

	n = int(first_multiple_input[0])

	k = int(first_multiple_input[1])

	A = list (map (int, input().rstrip().split()))

	result = twoArrays (k, A, B)

	B = list(map(int, input().rstrip().split()))

	fptr.write(result + '\n')

	fptr.close()