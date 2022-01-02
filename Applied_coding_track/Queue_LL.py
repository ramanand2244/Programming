# code for the Queue linked list in Python


class Node:
    def __init__(self, info, next = None):
        self.info = info
        self.next = next

# Queue class
class Queue:
    def __init__(self):
        self.head = self.tail = None
    
    # Inserting the data at the end of the Queue
    def EnQueue(self,ele):
        temp = Node(ele)
        if self.tail == None:
            self.head = self.tail = temp
            return
        self.tail.next = temp
        self.tail = temp

    # checking if the queue is empty or not
    def isEmpty(self):
        return self.head == None

    # taking out the data from the starting of the Queue and incrementing the head value
    def DeQueue(self):
        if self.isEmpty():
            print("The Queue is Empty\n")
            return
        else:
            temp = self.head
            self.head = temp.next
            if self.head == None:
                self.tail = None

    # Display all the element of the Queue

    def Display(self):
        if self.isEmpty():
            print("nothing to print the Queue is empty\n")
            return
        temp = self.head
        print("The value into the Queue are -: ")
        while( temp != None):
            print(temp.info, end = " -> ")
            temp = temp.next
        print("\n")


q = Queue()
q.EnQueue(25)
q.EnQueue(17)
q.EnQueue(45)
q.EnQueue(67)
q.EnQueue(59)
q.EnQueue(100)
q.Display()
print(q.head.info)
q.DeQueue()
print(q.head.info)
q.Display()


