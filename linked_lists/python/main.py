from LinkedList import LinkedList

if __name__ == "__main__":
    list = LinkedList()
    list.insert(5)
    list.insert(3)
    list.insert(9)
    list.insert(0)
    list.insert(2)
    list.insert(1)

    # 5->3->9->0->2->1->none
    print('initial list: ', end='')
    list.print()

    # 5->3->9->2->1->none
    print('\ndeleting node with value 0.')
    list.delete(0)
    list.print()

    # 3->9->2->1->none
    print('\ndeleting node with value 5.')
    list.delete(5)
    list.print()

    # 3->9->2->none
    print('\ndeleting node with value 1.')
    list.delete(1)
    list.print()

    # 3->9->7->none
    print('\nupdating node with value 2 to 7.')
    list.update(2, 7)
    list.print()

