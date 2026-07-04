class Solution(object):
    def defangIPaddr(self, address):
        final_address = []
        for elem in address:
            if elem == ".":
                final_address.append("[.]")
            else:
                final_address.append(elem)
        return "".join(final_address)
        