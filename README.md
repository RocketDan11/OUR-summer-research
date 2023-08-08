# OUR-summer-research
Code samples used for symposium presentation 

Our goals this summer were modest.
	* Get comfortable with popular version control system git.
	* Explore the software/hardware structures of 3D stacking DRAM.
	* Learn what it means to write “Pythonic” code

I am pleased to share that we have not only achieved the intended goal but have also gone above and beyond the initial objectives

Abstract-lite
-------------
	Modern CPUs are comprised of many parallel computing elements called "cores" and soon Very Large Scale Integrated Circuits (VLSI) chips will have tens of thousands of cores coupled with 3D vertically stacked memories, giving us enormous resources packed into a single chip. However, most programs written in popular languages like C++, Java and Python are single threaded thus only utilizing one core.


  Although Python is written with single thread programming in mind, we would like to exploit the memory bandwidth afforded by the 3D memory to automatically map it to many cores. Since Python is a "high-level" language it provides a layer of abstraction that we can utilize to extract the parallel threads. Using techniques such as divide & conquer algorithms we can create multiple streams of data between the cores and the memory.


  Pythons high-level concepts such as set comprehension, first class functions and decorators were implemented along side strategically chosen algorithms optimal for parallelism, including dense matrix multiplication and quick sort. These algorithms were selected to showcase how much parallelism we need to achieve to make up for the fact that a single-core version of Python is much slower than a single-core version of C++
