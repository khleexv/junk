# 처음 짠 코드
def isPalindrome(ss):
    for k in range(len(ss)//2):
        if ss[k] != ss[-k-1]:
            return False
    return True

def solution(s):
    max = 1
    for i in range(len(s)):
        for j in range(i+1,len(s)):
            if isPalindrome(s[i:j+1]):
                if (j-i+1) > max:
                    max = j - i + 1
    return max