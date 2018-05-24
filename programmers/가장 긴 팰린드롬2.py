# 두번째 코드 (최적화 후)
def isPalindrome(ss):
    for k in range(len(ss)//2):
        if ss[k] != ss[-k-1]:
            return False
    return True

def solution(s):
    max = 1
    for i in range(len(s),0,-1):
        for j in range(len(s)-i+1):
            if isPalindrome(s[j:j+i]):
                return i