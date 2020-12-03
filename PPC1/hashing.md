# Hashing

Hashing is a method of storing and retrieving data from a database efficiently.
For arrays and linked lists, we need to search in a linear fashion, which can be costly in practice. If we use arrays and keep the data sorted, then a phone number can be searched
in O(Logn) time using Binary Search, but insert and delete operations become costly as we have to maintain sorted order.

With a balanced binary search tree, we get a moderate search, insert and delete time. All of these operations can be guaranteed to be in O(Logn) time.

Another solution that one can think of is to use a direct access table where we make a big array and use phone numbers as indexes in the array. An entry in the array is NIL if the 
phone number is not present, else the array entry stores pointer to records corresponding to the phone number. Time complexity wise this solution is the best of all, we can do all
operations in O(1) time. For example, to insert a phone number, we create a record with details of the given phone number, use the phone number as an index and store the pointer
to the record created in the table.

> Hashing is an improvement over Direct Access Table. The idea is to use a hash function that converts a given phone number or any other key to a smaller number and uses the small
number as an index in a table called a hash table.

Collision Handling: Since a hash function gets us a small number for a big key, there is a possibility that two keys result in the same value. The situation where a newly inserted
key maps to an already occupied slot in the hash table is called collision and must be handled using some collision handling technique. Following are the ways to handle collisions:

*Chaining*:The idea is to make each cell of the hash table point to a linked list of records that have the same hash function value. Chaining is simple, but it requires additional 
memory outside the table.
*Open Addressing*: In open addressing, all elements are stored in the hash table itself. Each table entry contains either a record or NIL. When searching for an element, we one by
one examine the table slots until the desired element is found or it is clear that the element is not present in the table.


Hashing in C++ can be implemented using different containers present in STL as per the requirement. Usually, STL offers the below-mentioned containers for implementing hashing:<br>
**set <br>
unordered_set <br>
map <br>
unordered_map <br>**


