import math
n = int(input())
i = 2
p = 0
while True:
    
    k = 0
    t=0
    if( i == 2 or i ==3 ):
        t = 1 
        p = p +1  
        
    else:
        k = int(math.sqrt(i))
        
        while True :
            if(i%k == 0):
                
                t = 0
            else:
                t = 1 
                k = k-1 
            if(k <= 1 or t == 0):
                break
        if( t==1):
            p = p+1 
    if( p == n and t == 1 ):
        print("the %d  prime no. is %d".format(n,i))
        break 
    else:
        i = i+1
        
            
