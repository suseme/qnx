[TOC]

# QNX Operating System --- aka QNX6 aka QNX Neutrino

The operating system? Or the kernel? This project is mostly about the kernel and the process manager. So, isn't that the whole operating system? Well, yes -- if you're already a QNX geek. If you're coming from other OSs, you'll be thinking that disk file systems, device drivers and internet explorer are also part of the OS. But QNX is a microkernel operating system so we don't think of those things as being in the OS. So there! But just to be charmingly inconsistent, we have links to selected tools and libraries that are close to OS developers hearts.

Even within QNX the term "operating system" is used without consistency, probably because we use those words less frequently than "kernel" or "proc". So we'll try to be careful to say what we mean when we use the term. For now: QNX Operating System = kernel and process manager.

## Understanding the OS

If you want to read what we've written on ***how\*** the operating system works, you'll want to follow these links:

### OS Technology

* [Anatomy of a System Call, and other things...](wiki/wiki1220__kernel_system_call.md), or the meaning of the magic phrase "inkernel".
* [Symmetric Multi Processing (SMP)](wiki/wiki1201__symmetric_multi_processing.md)
* [Adaptive Partitioning](wiki/wiki1116__adaptive_partitioning_technology.md)

# OS Tech

## Notes on existing code

- [Anatomy of a System Call, and other things...](wiki/wiki1220__kernel_system_call.md)
- [Symmetric Multi Processing (SMP)](wiki/wiki1201__symmetric_multi_processing.md)
- [The Instrumented Kernel](wiki/wiki1353__the_instrumented_kernel.md)
- FIXME: Malloc Optimizations/[Debug Malloc](https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/Debug_Malloc)
- FIXME: Asynchronous Message Passing
- [Adaptive Partitioning](wiki/wiki1116__adaptive_partitioning_technology.md)
- FIXME: Benchmarks & Performance (aka QNX vs World)
- [Virtual memory manager algorithms](wiki/wiki1322__vmm_algorithms.md)
- [Virtual Memory Manager Data Structures](wiki/wiki1321__vmm_data_structures.md)
- [Master Instrumentation Event Table](http://community.qnx.com/integration/viewcvs/viewcvs.cgi/trunk/services/system/doc/instr-event-table.txt?root=coreos_pub&rev=153052&system=exsy1001&view=markup)
- [Kernel Introspection](https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/Future_Kernel_Introspection) A proposal for a high-bandwidth and regular way of getting **lots** of statistics out of the kernel.
- [Kernel Reading Notes](https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/KernelReadingNotes) A place for people to record their observations on the kernel code.
- [Send/Receive/Reply](https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/SendReceiveReply)
- [SuperLock](https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/SuperLock) - An amusing tale on the levels of memory locking

## Performance measurements and benchmarks

- [compiler](https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/Compiler_performance_measurements)
- kernel performance

## Brainstorming: New ideas or problems

- [Kernel Debugability](https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/KernelDebugability)
- [The mmaped-file lockup problem](https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/TheMmapedFileLockupProblem)

|      |                                            |                                                              |      |                                               |
| ---- | ------------------------------------------ | ------------------------------------------------------------ | ---- | --------------------------------------------- |
| x    | wiki1202: SMPInitialisation                | https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/SMPInitialisation |      | wiki1202__smp_initialisation.md               |
| x    | wiki1203: SMPStartupSupport                | https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/SMPStartupSupport |      | wiki1203__SMP_startup_support.md              |
| x    | wiki1341: SMPKernel                        | https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/SMPKernel |      | wiki1341__smp_kernel.md                       |
| x    | wiki1201: SymmetricMultiProcessing         | https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/SymmetricMultiProcessing |      | wiki1201__symmetric_multi_processing.md       |
| x    | wiki1134: APS_source                       | https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/APS_source |      | wiki1134__aps_source.md                       |
|      | wiki1319: Trinity                          | https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/Trinity |      | wiki1319__trinity.md                          |
| o    | wiki1220: KernelSystemCall                 | https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/KernelSystemCall |      | wiki1220__kernel_system_call.md               |
|      | wiki1353: TheInstrumentedKernel            | https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/TheInstrumentedKernel |      | wiki1353__the_instrumented_kernel.md          |
|      | wiki1345: Debug_Malloc                     | https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/Debug_Malloc |      |                                               |
| x    | wiki1116: Adaptive_Partitioning_Technology | https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/Adaptive_Partitioning_Technology |      | wiki1116__adaptive_partitioning_technology.md |
| x    | wiki1322: Vmm_algorithms                   | https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/Vmm_algorithms |      | wiki1322__vmm_algorithms.md                   |
| x    | wiki1321: Vmm_data_structures              | https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/Vmm_data_structures |      | wiki1321__vmm_data_structures.md              |
|      | wiki1325: Future_Kernel_Introspection      | https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/Future_Kernel_Introspection |      |                                               |
|      | wiki1418: KernelReadingNotes               | https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/KernelReadingNotes |      |                                               |
|      | wiki1674: SendReceiveReply                 | https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/SendReceiveReply |      |                                               |
|      | wiki3673: SuperLock                        | https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/SuperLock |      |                                               |
| x    | wiki1115: Memory_Partitioning_Technology   |                                                              |      | wiki1115__memory_partitioning_technology.md   |
|      | wiki1130: Adaptive_Partitioning_Scheduler  |                                                              |      | wiki1130__adaptive_partitioning_scheduler.md  |

## Articles

Articles located in the documents section

- [About Pulses and Pulse Events](article/article_870_1__About_Pulses_and_Pulse_Events.pdf)
- [Design Decoupling in a Message-Passing Environment](article/article_309_2__Design_Decoupling_in_a_Message-Passing_Environment.pdf)
- [Handling Mount Requests in Your Resource Manager](article/article_306_2__Handling_Mount_Requests_in_Your_Resource_Manager.pdf)
- [Pathname Resolution with a Bit on Union Mountpoints](article/article_294_1__Pathname_Resolution_with_a_Bit_on_Union_Mountpoints.pdf)
- [Pay the Piper](article/article_287_4__Pay_the_Piper.pdf) About efficient pipe mechanisms.
- [Protecting Your Data in a Multi-Threaded App](article/article_301_2__Protecting_Your_Data_in_a_Multi-Threaded_App.pdf)
- [QNX Neutrino Resource Managers: Using MsgSend() and MsgReply()](article/article_861_1__QNX_Neutrino_Resource_Managers-Using_MsgSend()_and_MsgReply().pdf)
- [QNX Priorities - You Aren’t in UNIX Anymore](article/article_295_1__QNX_Priorities-You_Aren-t_in_UNIX_Anymore.pdf)
- [Sharing a File Descriptor between Two Processes](article/article_913_1__Sharing_a_File_Descriptor_between_Two_Processes.pdf)
- [SMP: Two Processors and Beyond](article/article_299_3__SMP-Two_Processors_and_Beyond.pdf)
- [Tick-tock Part 1 - Understanding the Neutrino micro kernel's concept of time](article/article_834_1__Tick-tock_Part1-Understanding_the_Neutrino_microkernels_concept_of_time.pdf)
- [Tick-tock Part 2 - Understanding the Neutrino micro kernel's concept of time](article/article_826_2__Tick-tock_Part_II-Understanding_the_Neutrino_micro_kernels_concept_of_time.pdf)
- [To Resource Manager or Not to Resource Manager](article/article_307_2__To_Resource_Manager_or_Not_to_Resource_Manager.pdf)
- [What is Real Time and Why Do I Need It?](article/article_298_1__What_is_Real_Time_and_Why_Do_I_Need_It.pdf)
- (see also the [documents/articles section](http://community.qnx.com/sf/docman/do/listDocuments/projects.core_os/docman.root.articles) for stuff we might have missed)

