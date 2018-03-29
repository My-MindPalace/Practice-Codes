divisorList = []
quotientList = []
sum = []
def intComplexity(number):
    for i in range(1,(number+1)):
        if number%i == 0:
            if i in quotientList:
                break
            divisorList.append(i)
            quotientList.append(int(number/i))
    for i in range(0,len(divisorList)):
        s = divisorList[i]+quotientList[i]
        sum.append(s)
    return min(sum)
def main():
    number = int(input("Enter the number - "))
    min = intComplexity(number)
    print(min)
if __name__ == "__main__":
    main()