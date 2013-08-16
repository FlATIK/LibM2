LibM2
=====
A library to help extend and develop new features for Metin2 servers

Requires [Boost](http://sourceforge.net/projects/boost/) version >= 1.41 & < 1.48 due to some drastic changes in the unordered_map class.
The Metin2 server binary itself uses a version in that range. 
We're not certain which exact one.

Also requires a C++11 compatible compiler (e.g. gcc >= 4.8)

Requires mysql headers and must be linked against mysql to use any of the mysql_* functions (as I was too lazy to manually implement them)

More documentation comming soon™.
