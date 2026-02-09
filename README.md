# 🔗 Project 15 — Doubly Linked List Class (C++ | OOP | Templates)

This repository contains **Project 15: Doubly Linked List Class**, part of  
**Algorithms & Problem Solving – Level 5** on **ProgrammingAdvices**,  
under the guidance of **Dr. Mohammed Abu-Hadhoud**.

This project represents a practical evolution of **Data Structures – Level 1**, where the Doubly Linked List was originally implemented using standalone functions.  
Here, the same data structure is redesigned as a **clean, reusable, object-oriented template class**, suitable for real-world reuse and extension.

---

## 📌 Project Objective

- Strengthen core **Data Structures** concepts through real implementation  
- Apply **Object-Oriented Programming (OOP)** correctly and practically  
- Refactor functional DS code into a reusable **library-style class**  
- Practice clean, readable, and maintainable C++ code  
- Build a solid foundation for future advanced data structures  

This project is part of the **consolidation phase** at the end of Part One of the roadmap.

---

## 🧠 Concepts Covered

- Doubly Linked List fundamentals  
- Encapsulation and class responsibility  
- Template programming (`template <class T>`)  
- Pointer-based memory management  
- Traversal using `Head` and `Current` pointers  
- Incremental and reusable design  

---

## 🏗️ Project Structure

📦 Project Structure  
├── Data Structures  
│   └── clsDblLinkedList.h  
│  
└── Source Files  
    └── main.cpp   // Testing and usage examples  

---

## 🔧 Design Notes

- `Node` is implemented as an **inner class** inside `clsDblLinkedList`
- `Head` is a public pointer that always references the first node
- No need to pass `Head` to functions — list state is managed internally
- Traversal is performed using a local `Current` pointer
- Implemented as a **template class** to support multiple data types
- Designed as a **reusable library**, not a one-time solution

---

## ✨ Supported Operations

- Insert at beginning  
- Insert after a specific node  
- Insert at end  
- Find node by value  
- Delete a specific node  
- Delete first node  
- Delete last node  
- Traverse and print list contents  
- Index-based access and update  
- Reverse the list  

---

## 🧪 Sample Usage

```cpp
clsDblLinkedList<short> MyDblLinkedList;

MyDblLinkedList.InsertAtBeginning(1);
MyDblLinkedList.InsertAtBeginning(2);
MyDblLinkedList.InsertAtEnd(10);

MyDblLinkedList.PrintList();
```

---

## 📚 Learning Methodology

This project strictly follows the ProgrammingAdvices methodology:

- No rushing or guessing

- No adding features based on assumptions

- Step-by-step instructor-driven implementation

- Writing code first, then reviewing the official solution

- Understanding why before extending or optimizing

This approach ensures strong fundamentals and long-term clarity.

---

## 🚀 Future Enhancements

- Additional utility methods

- Extended safety and validation

- Better abstraction and encapsulation

- Integration with other data structures

---

## 🧑‍🏫 Course Information

- Platform: ProgrammingAdvices

- Website: https://programmingadvices.com

- Instructor: Dr. Mohammed Abu-Hadhoud

- Course: 13 - Algorithms & Problem Solving – Level 5

---

## 🧠 Final Note

Strong developers don’t rush to advanced topics.
They build solid foundations that allow them to scale with confidence.

This project represents an important step in that journey. 🚀
