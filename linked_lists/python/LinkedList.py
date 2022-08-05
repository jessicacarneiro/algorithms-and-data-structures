from Node import Node

class LinkedList:
    def __init__(self, head=None, tail=None) -> None:
        self.head = head
        self.tail = tail
    
    def insert(self, data):
        new_node = Node(data=data)

        if self.head == None:
            self.head = new_node
        else:
            self.tail.next = new_node
        
        self.tail = new_node

    def delete(self, data):
        if self.head == None:
            return None
        
        if self.head.data == data:
            node_to_delete = self.head
            self.head = self.head.next
            return node_to_delete

        previous_node = self.head
        while previous_node.next != None and previous_node.next.data != data:
            previous_node = previous_node.next

        node_to_delete = previous_node.next
        previous_node.next = node_to_delete.next

        if self.tail == node_to_delete:
            self.tail = previous_node

        return node_to_delete

    
    def update(self, old_data, new_data):
        node_to_update = self.head
        while node_to_update != None and node_to_update.data != old_data:
            node_to_update = node_to_update.next

        node_to_update.data = new_data

        return node_to_update

    
    def print(self):
        current_node = self.head
        
        while current_node != None:
            print(f'{current_node.data}->', end='')
            current_node = current_node.next

        print('none')
        