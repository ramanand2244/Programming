# Circular Queue linked list

class Node:

    def __init__(self,info,next= None):
        self.info = info
        self.next = next

# defining class for Circular linked list

class CircularQueue:
    def __init__(self):
        self.head = self.tail = None

    def EnQueue(self,ele):
        temp = Node(ele)
        if self.head == None:
            self.head = temp;
        else:
            self.tail.next = temp
        self.tail = temp
        self.tail.next = self.head

    def DeQueue(self):
        if self.head == None:
            print("Queue is empty\n")
            return -1
        temp = self.head
        if self.head == self.tail:
            self.head = self.tail = None
        else:
            
            self.head = temp.next
            self.tail.next = self.head
        return temp.info

    def Display(self):
        current = self.head
        while current.next != self.head:
            print(current.info, end = " ")
            current = current.next
        print(current.info)


cq = CircularQueue()
cq.EnQueue(26)
cq.EnQueue(56)
cq.Display()
print("**********************************************************************************\n")
print("The dequeue element is {} \n".format(cq.DeQueue()))
cq.Display()
        


