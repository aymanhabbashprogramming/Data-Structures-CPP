# DataStructuresCPP

A hands-on C++ project implementing core data structures from scratch using a class-based, templated approach. Each data structure lives in its own header file and is tested independently in `main`.

---

## Project Structure

| File | Description |
|------|-------------|
| `clsDblLinkedList.h` | Doubly Linked List — the foundation of the project |
| `clsDynamicArray.h` | Dynamic Array with resizing support |
| `clsMyQueue.h` | Queue built on top of `clsDblLinkedList` |
| `clsMyQueueArr.h` | Queue built on top of `clsDynamicArray` |
| `clsMyStack.h` | Stack built on top of `clsMyQueue` |
| `clsMyStackArr.h` | Stack built on top of `clsMyQueueArr` |
| `clsMyString.h` | String class with Undo/Redo support *(Stack use case)* |
| `clsQueueLine.h` | Ticketing/Queue Line system *(Queue use case)* |
| `DataStructuresCPP.cpp` | Main file — testing all classes |

---

## Classes Overview

### `clsDblLinkedList<T>`
A fully templated doubly linked list with the most common operations:
- `InsertAtBeginning`, `InsertAtEnd`, `InsertAfter`
- `Find`, `GetItem`, `GetNode`, `UpdateItem`
- `DeleteNode`, `DeleteFirstNode`, `DeleteLastNode`
- `Reverse`, `PrintList`, `Size`, `IsEmpty`, `Clear`

### `clsDynamicArray<T>`
A templated dynamic array that supports runtime resizing:
- `SetItem`, `GetItem`, `Resize`, `Clear`
- `InsertAt`, `InsertAtBeginning`, `InsertAtEnd`, `InsertBefore`, `InsertAfter`
- `DeleteItemAt`, `DeleteFirstItem`, `DeleteLastItem`, `DeleteItem`
- `Find`, `Reverse`, `Print`, `Size`, `IsEmpty`

### `clsMyQueue<T>`
Queue implementation using `clsDblLinkedList` as the underlying container:
- `Push`, `Pop`, `Front`, `Back`
- `GetItem`, `UpdateItem`, `InsertAfter`
- `InsertAtFront`, `InsertAtBack`
- `Reverse`, `Print`, `Size`, `IsEmpty`, `Clear`

### `clsMyQueueArr<T>`
Queue implementation using `clsDynamicArray` as the underlying container — same interface as `clsMyQueue`.

### `clsMyStack<T>`
Stack built on top of `clsMyQueue`:
- `Push`, `Top`, `Bottom`
- Inherits all Queue functionality

### `clsMyStackArr<T>`
Stack built on top of `clsMyQueueArr` — same interface as `clsMyStack`.

---

## Real-World Applications

### `clsMyString` — Undo/Redo System
A string wrapper that uses a `stack` internally to support full Undo/Redo functionality.
- `Set` / `Get` — modify and retrieve the string value
- `Undo` — revert to the previous value
- `Redo` — restore a previously undone value

### `clsQueueLine` — Queue Line Ticketing System
A simulation of a real-world queue line (e.g. utility bill payment office):
- `IssueTicket` — generates a numbered ticket with timestamp and estimated wait time
- `ServeNextClient` — serves the next client in line
- `PrintAllTickets`, `PrintTicketsRTL`, `PrintTicketsLTR` — display queue state
- `PrintInfo` — shows total tickets, served clients, and waiting clients
- `ServedClients` — returns how many clients have been served

---

## How to Use

To access test code for any class, browse the commit history and track the changes in `DataStructuresCPP.cpp` — each commit labeled **"Tested"** contains the test code for the corresponding class or method.

1. Clone the repository
2. Open the project in Visual Studio
3. Include the desired header file in your project
4. Create an instance and start using it