def xo(s):
    s_lower=s.lower() 
    if s_lower.count("x")==s_lower.count("o"):
        return True
    else:
        return False