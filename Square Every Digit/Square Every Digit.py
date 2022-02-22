def square_digits(num):

    num1=str(num)    #change integer to string in order to iterate
    num_list=[]    #create an empty list to store the iteration result
    for x in num1:
        int_x=int(x)    #rechange the string into integer in order to perfom calculation
        sqnum=int_x**2
        num_list.append(str(sqnum))    #rechange result of calculation into string in order to call join
    result="".join(num_list)
    return int(result)