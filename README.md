C-Exceptions
============

For reddit users, but everyone can look of course!

Coded after discussion on reddit about 'atexit()' which allows you to call your code before the programm quits.

I evoked the gcc 'destructor' attribute and added that there was something similar for variables with the 'cleanup' attribute.
http://www.reddit.com/r/programming/comments/1856qx/how_did_i_miss_this_feature_in_c_so_far/c8buqgr
That 'cleanup' attribute can be interesting to emulate exceptions in C. Actually, it enables you to have try blocks inside other try blocks etc etc. Which would have been more complicated (impossible??) without.

There is surely a better implementation for this.
I'm very open for any suggestions/observations/comments/team fortress 2 matchs, and all stuffs!
