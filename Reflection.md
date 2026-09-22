1. In LinkedList::deleteFront(), why does it take two separate delete calls instead of one?
   Name exactly what each one frees, and name the two new calls back in the program responsible
   for putting them on the heap in the first place.

It takes two delete calls because there are two things that need to be deleted. The first delete gets rid of the data that was created in main.cpp and the second delete gets rid of the node that was created using addFront(). Both need to be deleted or it will cause a memory leak in the code.

2. ArrayList never had a destructor before today. Explain, in your own words, why switching
   from T data[CAPACITY] to T* data [CAPACITY] is what made a destructor necessary, and what
   would happen if you forgot to write one. Would you get a compiler error? Why or why not?

Before the ArrayList stored the values, so they were taken care of on there own, but changing it to a pointer made it to where they they were stored on the heap which means they would stay unless we make the call to delete them. If there wasn't a call, then it would cause a compiling error because the code would still run and be usable, but the memory would not be getting freed up.

3. search() and addFront() both take a T*, but they treat that pointer completely differently.
   Explain the difference in terms of ownership: which one is allowed to delete what you hand it,
   and which one is never allowed to?

addFront() takes the ownership of the pointer assigned to it, so the list is responsible for deleting it. search() uses the pointer to look for a value given but never owns the pointer, so search() will never delete the pointer.

4. You swapped LinkedList<T> for ArrayList<T> inside makeList() and reran main.cpp without
   changing a single line there. What two mechanisms, by name, made that possible?

The List ADT and the virtual functions made it possible. Array and Linked List both follow the same interface (List) and the VF made sure the correct version of each was running, allowing main.cpp to run without needing to know what list is being used.

5. Pick one keyword from the Key Terms glossary that you either had to add today or wouldn’t have
   thought to add on your own (explicit, override, virtual, const, or any other). Describe, in
   your own words and without copying the guide’s wording, the smallest example you can think
   of where leaving it out would cause a real problem.

One keyword I didn't think to add would be "Override". It makes the function actually match the virtual function from the List class. If we didn't use this and the code wasn't working, then I probably wouldn't notice that the compiler wasn't checking that I was overrriding the function. 