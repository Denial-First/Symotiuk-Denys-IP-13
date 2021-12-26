"""Якщо ви подумали, що я тупий і слова не переносяться по складам,
 то прочитайте коментар в коді с++, будь ласка """


def syllabication(sentence, quantity):
    for i in range(1, quantity, 2):

        if len(sentence[i]) <= 3:
            print("Слово не переноситься")
        else:
            temp = ""
            for j in sentence[i]:
                temp += j + "-"
            temp = temp[:1] + temp[2:len(temp) - 3] + temp[len(temp) - 2: len(temp) - 1]
            if temp.find("й-о") != -1:
                temp = temp.replace("й-о", "йо")
            if temp.find("ь-о") != -1:
                temp = temp.replace("ь-о", "ьо")
            if temp.find("-`") != -1:
                temp = temp.replace("-`", "'")
            if temp.find("-ь") != -1:
                temp = temp.replace("-ь", "ь")
            if temp.find("-й") != -1:
                temp = temp.replace("-й", "й")
        sentence[i] = temp


st = input("Введіть що-небудь: ")
words = st.split()
q = st.count(" ") + 1
print(f"Кількість написаних слів: {q}")
syllabication(words, q)
print(words)
