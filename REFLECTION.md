1. In LinkedList::deleteFront(), why does it take two separate delete calls instead of one?
   Name exactly what each one frees, and name the two new calls back in the program responsible
   for putting them on the heap in the first place.
- Because according to the PDF. Its states that delete doomed -> data frees the T node while delete doomed frees the node itself. These two calls are in main.cpp and addFront so it requires two to undo it.

2. ArrayList never had a destructor before today. Explain, in your own words, why switching
   from T data[CAPACITY] to T* data [CAPACITY] is what made a destructor necessary, and what
   would happen if you forgot to write one. Would you get a compiler error? Why or why not?
- My guess it because switching from T data[CAPACITY] to T* data[CAPACITY] it take pointers as it became an array. It would still compile but our build and throw leaks everything.

3. search() and addFront() both take a T*, but they treat that pointer completely differently.
   Explain the difference in terms of ownership: which one is allowed to delete what you hand it,
   and which one is never allowed to?
- According to the PDF search() will only look whatever you hand it but not delete while AddFront() will take ownership with any pointer and will delete it later.

4. You swapped LinkedList<T> for ArrayList<T> inside makeList() and reran main.cpp without
   changing a single line there. What two mechanisms, by name, made that possible?
- Virtual and inheritance, because both our LinkedList<T> and ArrayList<T> get things from List<T>. So our List<T> pinter is able to refer to either.

5. Pick one keyword from the Key Terms glossary that you either had to add today or wouldn’t have
   thought to add on your own (explicit, override, virtual, const, or any other). Describe, in
   your own words and without copying the guide’s wording, the smallest example you can think
   of where leaving it out would cause a real problem.
- Override since I already had some experience with it in java even though it does not work exactly like it java it was similar enough to understand how its just tell the compiler that a function needs to replace a virtual function from a parent class. An example might be if I miss wrote void print() and how override would help me find the mistake.