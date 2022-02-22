def disemvowel(string_):
    vowel=["a","e","i","o","u","A","E","I","O","U"]
    string_list=[]
    for i in string_:
        if i not in vowel:
            string_list.append(i)
        else:
            continue
    string_ = "".join(string_list)
    return string_