/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSTTableHeaderStorageBucket : TSPObject <TSTTableHeaderStorage> {
    float mHorizontalScaleFactor;
    struct map<unsigned long, SFUtility::ObjcSharedPtr<NSObject>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, SFUtility::ObjcSharedPtr<NSObject> > > > { struct __tree<std::__1::pair<unsigned long, SFUtility::ObjcSharedPtr<NSObject> >, std::__1::__map_value_compare<unsigned long, SFUtility::ObjcSharedPtr<NSObject>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::pair<unsigned long, SFUtility::ObjcSharedPtr<NSObject> > > > { struct __tree_node<std::__1::pair<unsigned long, SFUtility::ObjcSharedPtr<NSObject> >, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<unsigned long, SFUtility::ObjcSharedPtr<NSObject> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, SFUtility::ObjcSharedPtr<NSObject>, std::__1::less<unsigned long>, true> > { unsigned long x_3_2_1; } x_1_1_3; } x1; } *mMap;
}

@property float horizontalScaleFactor;

- (void)applyFunction:(int (*)())arg1 withState:(void*)arg2 willModify:(BOOL)arg3;
- (int)count;
- (void)dealloc;
- (unsigned long)flushableSize;
- (id)headerForKey:(unsigned long)arg1 willModify:(BOOL)arg2 createIfNotThere:(BOOL)arg3;
- (id)headerForKey:(unsigned long)arg1 willModify:(BOOL)arg2;
- (float)horizontalScaleFactor;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (unsigned long)lowerBound:(unsigned long)arg1;
- (void)makeHeadersPerformSelector:(SEL)arg1 willModify:(BOOL)arg2;
- (unsigned long)maxKey;
- (unsigned long)minKey;
- (id)packageLocator;
- (void)removeAllHeaders;
- (void)removeHeaderForKey:(unsigned long)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setHeader:(id)arg1 forKey:(unsigned long)arg2;
- (void)setHorizontalScaleFactor:(float)arg1;
- (void)shiftKeysAtIndex:(unsigned long)arg1 amount:(long)arg2;
- (unsigned long)upperBound:(unsigned long)arg1;

@end
