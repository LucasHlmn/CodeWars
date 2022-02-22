def narcissistic( value ):
    # Code away
    list_value = [int(a) for a in str(value)]
    sum =0
    for i in list_value:
        new_value=i**len(list_value)
        sum += new_value
    if sum == value:
        return True
    else:
        return False