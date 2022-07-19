wiki1353: TheInstrumentedKernel
===

[TOC]

# The Instrumented Kernel

## Source Code Overview



| File                                                         | Function                                           |
| :----------------------------------------------------------- | :------------------------------------------------- |
| [services/system/ker/kertrace.h](http://community.qnx.com/integration/viewcvs/viewcvs.cgi/trunk/services/system/ker/kertrace.h/?root=coreos_pub&system=exsy1001&view=markup) | Trace Macros                                       |
| [services/system/ker/externs.h](http://community.qnx.com/integration/viewcvs/viewcvs.cgi/trunk/services/system/ker/externs.h/?root=coreos_pub&system=exsy1001&view=markup) | Trace Global Variables                             |
| [services/system/ker/ker_trace.c](http://community.qnx.com/integration/viewcvs/viewcvs.cgi/trunk/services/system/ker/ker_trace.c/?root=coreos_pub&system=exsy1001&view=markup) | ker_trace_event() kernel call and support routines |
| [services/system/ker/nano_trace.c](http://community.qnx.com/integration/viewcvs/viewcvs.cgi/trunk/services/system/ker/nano_trace.c/?root=coreos_pub&system=exsy1001&view=markup) | add_trace_event() gear and event handlers          |
| [services/system/ker/ker_call_table.c](http://community.qnx.com/integration/viewcvs/viewcvs.cgi/trunk/services/system/ker/ker_call_table.c/?root=coreos_pub&system=exsy1001&view=markup) | Kernel Call Trampolines                            |

## Reference

[Here](http://community.qnx.com/integration/viewcvs/viewcvs.cgi/trunk/services/system/doc/instr.txt?root=coreos_pub&system=exsy1001&view=markup) is a fairly old document, but it is still relevent...