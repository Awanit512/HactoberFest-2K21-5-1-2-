def maximumToys(prices, k):
    # Write your code here
    prices.sort()
    items=[]
    for i in prices:
        if sum(items)<=k:
            items.append(i)
        else: 
            break
    print(items)
    return len(items)-1

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    k = int(first_multiple_input[1])

    prices = list(map(int, input().rstrip().split()))

    result = maximumToys(prices, k)

    fptr.write(str(result) + '\n')

    fptr.close()