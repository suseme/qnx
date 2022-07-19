wiki1130: Adaptive_Partitioning_Scheduler
===

[TOC]

# Adaptive Partitioning - Scheduler

Aka APS

## What is it?

It's a fair-share thread scheduler which guarantees groups of a user-specified percentage of cpu time when the system is overloaded. When the system is sufficently underloaded, it chooses to schedule threads based strictly on priority and therefore maintians realtime behavior. Even when overloaded it provides realtime latencies to an engineerable set of critical threads.

Scheduler Partitioning is part of an overall resource partitioning strategy. See [Adaptive Partitioning](https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/Adaptive_Partitioning_Technology).

## Table of Contents

1. Presentation on APS

   - [slide presentation](http://community.qnx.com/sf/docman/do/viewDocument/projects.core_os/docman.root.adaptive_partitioning/doc1017?selectedTab=review): history / use cases / why is it "adaptive" / why is it cool
   - video commentary by the main perp to go with the above slide presentation:
     - slides 1 to 5: [part 1.1](http://www.youtube.com/watch?v=-oqSijTCe4Q)
     - slides 6 to 9: [part 1.2](http://www.youtube.com/watch?v=30Vbssrg_CI)
     - slides 10 to 18: [part 1.2](http://www.youtube.com/watch?v=Hpzxp1X7_C0)
     - slides 19 to end: [part 2.2](http://www.youtube.com/watch?v=x4GA8dRhGTQ)

2. QNX Designer's Documentation

   - [Requirements Document](https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/APS_Requirements): requirements / APIs / Limitations
   - [How it works FAQ](https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/APS_How_it_Works_FAQ): Scheduling / Microbilling/ Algorithms / Overhead / Bankruptcy / Inheritance / Budgets / Security

3. Hacking

   - Where to find the [source](https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/APS_source) code.
   - How to [build APS](https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/APS_how_to_build)
   - [APS_Buildfile_extensions](https://community.qnx.com/sf/wiki/do/viewPage/projects.core_os/wiki/BuildfileExtensionsForAPS)

4. Links to user's documents:

   - [Adapative Partitioning User's Guide](http://www.qnx.com/developers/docs/6.3.2/adaptive_partitioning_en/user_guide/about.html)
   - [Installation Notes](http://community.qnx.com/sf/go/doc1023?nav=1)
   - [Release Notes](http://community.qnx.com/sf/go/doc1022?nav=1)
   - [APS Command Reference](http://community.qnx.com/sf/go/doc1021?nav=1)
   - Library reference for [SchedCtl()](http://community.qnx.com/sf/go/doc1018?nav=1)
   - [APS chapter](http://www.qnx.com/developers/docs/6.3.0SP3/neutrino/sys_arch/adaptive.html) from the QNX System Architecture guide.

5. Other links

   - A [blog](http://fieldstudy.wordpress.com/2007/11/30/debugging-with-adaptive-partioning-a-better-mousetrap/) posting about why debugging is better with APS.
   - The wikipedia entry on [Adaptive Partition Schedulers](http://en.wikipedia.org/wiki/Adaptive_Partition_Scheduler)

   