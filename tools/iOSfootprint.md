Memory foot print
===============
2019. 5. 7.

[WWDC2018](https://developer.apple.com/videos/play/wwdc2018/416)

**Debug Navigator**
*Instrument*


Page
———
Minimum usage of memory
16KB

Memory status
——


* Clean memory

* Dirty memory

* Compressed



# Solutions

NSCache 
————
*Pros* 
Thread safe
Purgeable
Better than NSDictionary


Image
————
Memory use is related to the dimensions of the image, not the file size.

### Sequance

1. Load
1. Decode
1. Render



### ImageIO
———

# I can be used with Low Lv API
*50% faster* than UIImage when resizing


Optimizing background
———————————

Unload Image when app goes background




