from typing import List


def solution(babbling: List[str]) -> int:
    answer: int = 0

    # create a tuple for words: aya, ye, woo, ma
    words: tuple = ("aya", "ye", "woo", "ma")

    # for each bablling, check if it is a word in the tuple
    # if it is, remove characters from the word
    # check if the remaining babbling is a word in the tuple
    # if the remaining consists of all zeros, increase answer by 1
    for _, babble in enumerate(babbling):
        word_count: list[int] = [0] * len(words)

        for i, word in enumerate(words):
            if babble.count(word) > 0:
                word_count[i] += 1
                babble = babble.replace(word, "0")

            if word_count[i] > 1:
                break

            if babble.isdigit():
                answer += 1
                break
    return answer
