def rank(num) :
    if num < 2 :
        return 6
    elif num == 2 :
        return 5
    elif num == 3 :
        return 4
    elif num == 4 :
        return 3
    elif num == 5 :
        return 2
    else : 
        return 1

def sol (lottos, win) :
    answer = []
    count = 0
    min_ = 0
    max_ = 0

    for i in lottos :
        if i == 0 :
            count += 1
        if i in win :
            min_ += 1
    max_ = min_ + count

    answer.append(rank(max_))
    answer.append(rank(min_))

    return answer