# 🔗 Project 15 — Double Linked List Class (Template)

This repository contains **Project 15: Double Linked List Class**, part of  
**Algorithms & Problem Solving – Level 5** on **ProgrammingAdvices**,  
under the guidance of **Dr. Mohammed Abu-Hadhoud**.

This project is a practical continuation of **Data Structures – Level 1**, where a Double Linked List was first implemented using standalone functions, and is now refactored into a **clean, reusable, object-oriented template class**.

---

## 📌 Project Objective

- Reinforce **Data Structures** concepts through real implementation  
- Apply **Object-Oriented Programming (OOP)** correctly  
- Convert functional DS code into a reusable **library-style class**  
- Practice clean, readable, and maintainable code  
- Prepare the data structure for reuse in future projects  

This project is part of the **consolidation stage** at the end of Part One of the roadmap.

---

## 🧠 Concepts Covered

- Double Linked List fundamentals  
- Encapsulation and class design  
- Template programming (`template <class T>`)  
- Pointer-based memory management  
- List traversal using `Head` and `Current`  
- Clean and incremental implementation  

---

## 🏗️ Project Structure

<pre>
📦 Project Structure

├── Data Structures
│   └── clsDblLinkedList.h
│
└── Source Files
    └── main.cpp   // Testing & usage examples
</pre>



---

## 🔧 Design Notes

- `Node` is implemented as an **inner class** inside `clsDblLinkedList`
- `Head` is a public pointer that always points to the first node
- No need to pass `Head` to functions (managed internally by the class)
- Traversal is done using a local `Current` pointer
- Implemented as a **template class** to support multiple data types
- Designed as a **library**, not a one-time solution

---

## ✨ Supported Operations

- Insert at beginning  
- Insert after a specific node  
- Insert at end  
- Find node by value  
- Delete a specific node  
- Delete first node  
- Delete last node  
- Print list contents  

---

## 🧪 Sample Usage

```cpp
clsDblLinkedList<short> MyDblLinkedList;

MyDblLinkedList.InsertAtBeginning(1);
MyDblLinkedList.InsertAtBeginning(2);
MyDblLinkedList.InsertAtEnd(10);

MyDblLinkedList.PrintList();
```

## 📚 Learning Methodology

This project strictly follows the course methodology:

- No rushing or guessing

- No adding features from personal assumptions

- Following a step-by-step instructor-driven approach

- Implementing first, then reviewing the official solution

- Understanding why before extending or optimizing

This approach ensures strong foundations and avoids confusion later.

---

## 🚀 Future Enhancements

This README is initial and will be updated as the project evolves with:

- Additional methods and utilities

- Extended functionality

- Integration with other projects

- Better abstraction and safety improvements

---

## 🧑‍🏫 Course Information

- Platform: ProgrammingAdvices

- Website: https://programmingadvices.com

- Instructor: Dr. Mohammed Abu-Hadhoud

- Course: Algorithms & Problem Solving – Level 5

---

## 🧠 Final Note

Strong developers don’t rush to advanced topics.
They build foundations that allow them to scale confidently.

This project represents a key step in that journey.
