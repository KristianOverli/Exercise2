# Mutex and Channel basics

### What is an atomic operation?
> *An atomic operation is a operation that can not be stoped by other process when it is started. This garanties that it is isolated from change.*

### What is a semaphore?
> *A semaphore is a variable to control access to a common resource by multiple processes in a concurrent system*

### What is a mutex?
> *Mutual exclusion is an object that chooses which program threads to share the same resources and give access to one at a time.*

### What is the difference between a mutex and a binary semaphore?
> *Mutex are semaphores ++ and are used to lock resources. Semaphores are used to send messages.*

### What is a critical section?
> *A Critical Section is the part of a program that accesses shared resources. Only when a process is in its Critical Section can it be in a position to disrupt other processes. We can avoid race conditions by making sure that no two processes enter their Critical Sections at the same time.*

### What is the difference between race conditions and data races?
 > *A race condition is a flaw that occurs when the timing or ordering of events affects a program's correctness. A data race happens when there are two memory accesses in a program where both: target the same location.*

### List some advantages of using message passing over lock-based synchronization primitives.
> *Message passing is useful for exchanging smaller amounts of data, because no conflicts need be avoided. It's much easier to implement than is shared memory for intercomputer communication. Also, as you've already noticed, message passing has the advantage that application developers don't need to worry about the details of protections like shared memory.*

### List some advantages of using lock-based synchronization primitives over message passing.
> *Shared memory allows maximum speed and convenience of communication, as it can be done at memory speeds when within a computer.*
