class Solution(object):
    def defangIPaddr(self, address):
        final_address = ""
        for elem in address:
            if elem == ".":
                final_address += "[.]"
            else:
                final_address += elem
        return final_address