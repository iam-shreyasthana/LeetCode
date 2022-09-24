"""
20. Valid Parentheses

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order."""





class Solution(object):
    def diff(self, char):
        if char == ')':
            return '('
        if char == ']':
            return '['
        if char == '}':
            return '{'
        
    def isValid(self, s):
        stack = []
        for i in s:
            if i == '(' or i == '[' or i == '{':
                stack.append(i)
            elif i == ')' or i == ']' or i == '}':
                if len(stack) == 0:
                    return False
                temp = stack.pop()
                if temp !=  self.diff(i):
                    return False
                
        if len(stack) != 0:
            return False
        return True


if '__name__' == '__main__':
    s = '(){}[]'
    print(Solution.isValid(s))
    
