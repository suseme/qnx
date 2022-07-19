wiki1319: Trinity
===

https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/Trinity

[TOC]

# What is Trinity?

Trinity is an internal code name and not something you will see in any marketing literature. Why was the name Trinity chosen? There are many things that Trinity could be. Neo’s girlfriend. A flower. A nuclear test. A religious term. It also means, a group consisting of three closely related members. In this case, the three members are:

1. Neutrino Core OS 6.3.2
2. Adaptive Partitioning TDK 1.0 (now part of the Advanced Runtime Module)
3. Multi-Core TDK 1.1. (now part of the Advanced Runtime Module)

Each are separate products but all three are intricately linked to OS-kernel development and all three received product updates as a result of the Trinity work.

# Why is the product called Neutrino Core OS 6.3.2 and not Neutrino RTOS 6.3.2?

The Core OS 6.3.2 is a component release. This means that it only includes updated Core OS binaries and not other binaries (file systems, networking, hardware interfaces, etc) associated with the RTOS. The Core OS component is not a standalone piece of software. Rather it allows customers to update a portion of their system without moving to an entirely new baseline. For example, a customer with a full Momentics 6.3.2 SP3 installation can update the Core OS binaries without being required to also update their IDE, graphics, networking, etc. Think of it as a large patch.

# Trinity Feature Set: 

- Advanced Memory Management
  - Typed Memory
  - Memory mapped files
- Additional Kernel Instrumentation
  - Thread names
  - Open trace event
  - Shared library & DLL load trace events
  - Dynamic Application Tracing
- IPC Optimization
  - Short message (<256 bytes) performance improvement by 20%
- [Adaptive Partitioning](wiki1130__adaptive_partitioning_scheduler.md) (new TDK)
- Multi-Core Enhancements (available in MC TDK)