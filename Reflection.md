Reflection Questions

1. Why does concat only need to work between two lists of the same representation? What would you have to do differently, or what would go wrong, if you tried to make it work between a LinkedList and an ArrayList?**

Concat only works with the same type of list because ArrayList and LinkedList store their data differently. ArrayList uses an array, while LinkedList uses nodes connected by pointers. If I tried combining different types, I would have to change how the data gets moved, and it could cause errors.

2. Walk through reverse() on your linked list: name the three pointers you need alive at once, and explain why losing track of any one of them mid-loop corrupts the list.**

In my reverse function, I used three pointers called previous, current, and next. Previous keeps track of the node before, current is the node being changed, and next saves the following node. If I lose track of one of these pointers, I could lose part of the list or connect the nodes incorrectly.

3. addAnywhere and deleteAnywhere both need a bounds check. What's the valid range for position in each, and what does your implementation do if a caller passes a position outside it?**

For addAnywhere, the position has to be between 0 and the size of the list because you can also add to the end. For deleteAnywhere, the position has to be between 0 and size minus 1 because you can only delete something that already exists. If the position is invalid, my code prints "Invalid position." and stops the function.

4. In LinkedList::concat, why did you need to walk to the end of the list first, when addFront and deleteFront never needed to? What would change about concat's performance if LinkedList still tracked a tail pointer, and what would you have to keep updated elsewhere if you added one back?**

I had to go through the list to find the last node because concat adds the other list to the end. AddFront and deleteFront only work with the first node, so they don't need to go through the whole list. If I had a tail pointer, concat would be faster because I could go straight to the end, but I would also need to update the tail whenever I add or delete nodes that change the last node.

5. Pick either addAnywhere or deleteAnywhere in ArrayList and explain, in your own words, what has to shift and in which direction, and why shifting in the wrong direction would overwrite data you still need.**

In my ArrayList addAnywhere function, I have to move the elements one position to the right to make room for the new value. I start from the end and work backward so I don't overwrite any values. If I started from the front, I could replace data before it gets moved.

6. Point to the exact line in your main.cpp where a Reverse card actually changes the direction of play, and explain what would visibly break in the game if that call were missing.**

The line that changes the direction of play is table1->reverse(); in my main.cpp. This reverses the order of the players when someone plays a Reverse card. If this line was missing, the players would stay in the same order even though the game says a Reverse card was played.