# r2os Proof of Concept

r2os poc wants to be a minimal kernel, able to load itself, and to provide a small environment where it will be possible to run and debug some stuff like
- ret2libc
- heap spray to test use after free
- DEP

The point of this POC is to isolate the image loaded statically from disk (and any other dependencies, static or dynamic) allocating dynamic memory with different privileges,
so any access will trigger GENERAL PROTECTION FAULT due insufficient privileges from caller/callee.

Target of this POC is Intel Architecture, 32/64bit mode, with paging mode enabled.
