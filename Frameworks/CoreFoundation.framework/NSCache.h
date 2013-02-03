/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSCache : NSObject {
    id _delegate;
    void *_private[5];
    void *_reserved;
}

- (NSUInteger)countLimit;
- (void)dealloc;
- (id)delegate;
- (BOOL)evictsObjectsWithDiscardedContent;
- (void)finalize;
- (id)init;
- (id)name;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setCountLimit:(NSUInteger)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEvictsObjectsWithDiscardedContent:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(NSUInteger)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setTotalCostLimit:(NSUInteger)arg1;
- (NSUInteger)totalCostLimit;

@end