class Solution(object):
    def canBeTypedWords(self, text, brokenLetters):
        """
        :type text: str
        :type brokenLetters: str
        :rtype: int
        """
        broken = set(brokenLetters)
        words = text.split()
        count = 0

        for word in words:
            for ch in word:
                if ch in broken:
                    break
            else:        
                count = count + 1
        return count    
