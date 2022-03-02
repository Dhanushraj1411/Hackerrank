n = int(input("Enter the number:"))
r = n % 2
if r == 1:
    print("Weird")
elif (r == 0 and n>2 and n<=5):
    print("Not weird")
elif (r == 0 and n>6 and n<=20):
    print("Weird")
elif (r == 0 and n > 20):
    print("Not weird")

