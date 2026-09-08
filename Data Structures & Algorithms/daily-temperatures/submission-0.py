class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        n = len(temperatures)
        res = [0]*n
        stack = []
        for i,n in enumerate(temperatures):
            while stack and stack[-1][0] < n:
                stackVal,stackInd = stack.pop()
                res[stackInd] = i-stackInd
            stack.append([n,i])
        return res