#Made for Joongbu
a = {}
while True:
    name = input("(입력모드)이름을 입력하시오:")
    if name == '':
        break
    number = input("전화번호를 입력하시오.:")
    a[name] = number
    
while True:
    name = input("(검색모드)이름을 입력하시오.:")
    for attribute in a:
        if attribute == name:
            print(a[name])