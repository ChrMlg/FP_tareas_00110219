num=0
op=0
fin=0
ans='s'


    
    
while(ans=='s'):
    
    print("1.suma")
    print("2.resta")
    print("3.multiplicacion")
    print("4.división")
    op=int(input())
    
    if(op==1):
        num=int(input("digite numero: "))
        fin=fin+num
    elif(op==2):
        num=int(input("digite numero: "))
        fin=fin+num
    elif(op==3):
        num=int(input("digite numero: "))
        fin=fin+num
    elif(op==4):
        num=int(input("digite numero: "))
        fin=fin+num

    ans=str(input("continuar?"))

    
print(fin)