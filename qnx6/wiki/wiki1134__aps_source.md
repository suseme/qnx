wiki1134: APS_source
===


Adpaptive Partitioning Scheduler: Navigating the Source
===

https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/APS_source

[TOC]

# What is it

See the Apaptive Partioning Scheduler [wiki](https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/Adaptive_Partitioning_Scheduler).

# Where is the source?

Browse the source in [/ker/aps/](http://community.qnx.com/integration/viewcvs/viewcvs.cgi/trunk/services/system/ker/aps/?root=coreos_pub&system=exsy1001). Also any checkout of the whole kernel, done affter 2008-02-29, will include the aps source.

Other things you may need to know:

- How to Build
  - [APS Build guilde](http://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/APS_how_to_build) and [try it](http://community.qnx.com/sf/go/doc1020?nav=1)
- The user's header file:
  - [/sevices/system/pubilc/sys/sched_aps.h](http://community.qnx.com/integration/viewcvs/viewcvs.cgi/trunk/services/system/public/sys/sched_aps.h?root=coreos_pub&system=exsy1001&view=markup). Include it as `<sys/sched_aps.h>`
- The aps utility command:
  - [utils/a/aps](http://community.qnx.com/integration/viewcvs/viewcvs.cgi/trunk/utils/a/aps/?root=coreos_pub&rev=2133&system=exsy1001)

# What is the file structure of `/services/system/ker/aps`

```c
aps_alg.c, .h 
	algorithm for which partition to schedule a thread from 

aps_application_error.c
        once function for forcing reboots when a partition goes bankrupt. 
	(just so the crash message will say "application error" rather than "nano_aps.c") 

aps_config.c 
        implements the api functions in ker_aps.c to configure the scheduler


aps_crit.c, .h 
	handling of critical time and partition bankruptcy 

aps_data.c, .h 
	definitions, and init routines, for partition data structures, including the scheduling window
	also contains the function to create the first partition, System. 

aps_time.c
	function to time execution of threads: microbill 
	hook into clock interrupt handler for rotating the scheduling and reporting windows

aps_trace.c
	tracelogger functions 

init_aps.S 
	linkage to make the aps scheduler into kernel module: libmod_aps.a 
	
ker_aps.c 
	implements the SchedCtl function for the aps subcommands. Contains parameter checking, 
	security checking. Invokes functions in aps_config.c once it locks the kernel 

nano_aps.c
	analog of ker/nano_sched.c. Implementation of scheduling primitives ready(), block_and_ready(),
	mark_running() and reched() 
	Also contains code to initialize aps. 

proto_aps.h
	function prototypes for all of aps.
```