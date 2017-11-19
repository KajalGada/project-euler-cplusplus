# Project Euler

## Problem 10
Compute sum of prime numbers upto a given number n

## Method
With a brute force approach, one would simply calculate prime numbers upto n and add them. However, computing a prime number
would take up considerable amount of time as each number would have to be divided by all numbers upto the number in question.

A faster approach would be to use Sieve of Eratosthenes - start with an array of n numbers, assume each number to prime, loop 
through each number, if a number is prime, mark all of its composite as not prime. 

Read more: [https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes].

Further, if you plan to compute sum for multiple numbers, compute list of primes for the max of all numbersand maintain an 
array of sum of primes upto the number. This will save time.

## Learnings
+ Sieve of Eratosthene - computing prime numbers with ease.
+ memset - allows to set all values within an array to one value. Syntax: std::memset(array, value, sizeOfArray).
+ function return type - an array cannot be returned by a function. Use a pointer or use vector.
+ Avoid recomputation - if a certain calculation will repeat, store the calculation results and use them to save time.
