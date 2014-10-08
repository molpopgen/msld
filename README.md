#LD stats calculated from ms-like output

Requires [libsequence](https://gitub.com/molpopgen/libsequence).  This program is really just an example of processing simulation data using the library.

To compile:

```
c++ -std=c++11 -O2 -o msld msld.cc -lsequence
```

Usage:

```
ms 10 1000 -t 10 -r 10 1000 | ./msld | gzip > msldout.gz
```

The output consists of:

1. Number of haplotypes
2. Haplotype heterozygosity
3. Hudson and Kaplan's [Rm](http://www.genetics.org/content/111/1/147.abstract)
4. Wall's B, Wall, J. (1999) Genetical Research 74, pp 65-79
5. Wall's Q, Wall, J. (1999) Genetical Research 74, pp 65-79
6. Hudson's [C](http://dx.doi.org/10.1017/S0016672300023776)

