class Node(object):
    def __init__(self, value):
        self.__init__(value, None)

    def __init__(self, value, next):
        self.data = value
        self.next = next


