# Automata-Implementation


This is an implementation of three deterministic finite automata (DFA) machines.

Tools: Visual Studio 2019.

Language: C++.

The first machine accepts languages with binary representations of odd numbers.
It accepts examples such as 01, 011, and 0101, while rejecting examples like 0, 10, and 100.

The second machine accepts languages with binary representations of even numbers.
It accepts examples such as 0, 10, and 100, while rejecting examples like 01, 011, and 0101.

The third machine accepts languages where every even number of 'b's is followed by an odd number of 'a's (and there are no odd 'b's).
It accepts examples like 'a', 'bba', 'abba', 'bbabba', and 'abbaaa', while rejecting examples like 'b', 'bb', 'ab', 'aa', 'ba', and 'bbaba'.
