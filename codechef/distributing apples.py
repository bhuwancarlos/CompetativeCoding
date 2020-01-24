t = input()
for i in range (t):
    n, k = map(int, raw_input().split()) 
    if n==k and n!=1 and k!=1:
        print("YES")
    elif n<k:
        print("YES")
    else :
        a = k**2
        if n%a==0:
            print("NO")
        else:
            print("YES")