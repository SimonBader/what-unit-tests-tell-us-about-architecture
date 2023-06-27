# What unit tests tell us about the architecture
Typically, we write unit tests to make sure that the software does behave as expected.

There is one more aspect about unit tests that allows us to gain insight into the current state of software architecture (or software design).

## General indicators
Have a look at the unit test setup code (the arrange block).

You should become suspicious...
* if the arrange block gets huge
* if the arrange block gets complicated
* if the arrange block gets interconnected


