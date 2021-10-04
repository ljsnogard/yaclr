# YACLR
Yet Another Common Language Runtime

* Nothing to do with ECMA-335 nor even compatible to it.   
* Going to achieve an easily maintainable common language runtime.  
* Very early stage, experimental, just for fun.  

## Plans

### YAVM

Yet Another Virtual Machine.

#### Proto0
A prototype of virtual machine that will be implemented with c++.

### YAIL

Yet Another Intermediate Language.  
It will be the instruction set that the `YAVM` will consume and interpret.   

Design:
* Register-based, unlike `CIL` and `JVM` which are both stack-based, more like Android DEX.  
* Supporting only single-inheritance object-oriented. More like `CIL`.
* Supporting coroutine related instructions: `spawn`, `yield` and `resume`
