C-Exceptions
============

Exceptions emulation in C.

Coded after discussion on reddit about 'atexit()' which allows you to call some of your code before the programm quits.

I evoked the gcc 'destructor' attribute and added that there was something similar but for variables, not the program, with the 'cleanup' attribute.
http://www.reddit.com/r/programming/comments/1856qx/how_did_i_miss_this_feature_in_c_so_far/c8buqgr
That 'cleanup' attribute can be interesting to emulate exceptions in C. Actually, it enables you to have try blocks inside other try blocks etc etc. Which would have been more complicated (impossible??) without.

There surely is a better implementation for this, somewhere.
I'm very open for any suggestions/observations/comments/team fortress 2 matchs, and all stuffs!
