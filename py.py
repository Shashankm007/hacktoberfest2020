from collections import Counter 
t = int(input())
for i in range(t):
    n= int(input())
    str=input().split()
     
    all_freq = {} 
  
    for i in str: 
        if i in all_freq: 
            all_freq[i] += 1
        else: 
            all_freq[i] = 1

    list=[]
    for i in all_freq:
        list.append(all_freq[i])
    freq=True
    cont=True
    if len(list)!=len(Counter(list).keys()):
        freq=False
    
    for i in range(n-1):
        if(str[i]==str[i+1]):
            t=0

        else:
            for j in range(i+2,n,1):
                if str[i]==str[j]:
                    cont=False
    
    # print(freq,cont)

    if freq == False or cont == False:
        print("NO")
    else:
        print("YES")
