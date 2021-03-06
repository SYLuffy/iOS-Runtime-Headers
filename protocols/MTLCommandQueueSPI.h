/* Generated by RuntimeBrowser.
 */

@protocol MTLCommandQueueSPI <MTLCommandQueue>

@required

- (int)backgroundTrackingPID;
- (BOOL)executionEnabled;
- (void)finish;
- (BOOL)isOpenGLQueue;
- (BOOL)isProfilingEnabled;
- (unsigned int)maxCommandBufferCount;
- (unsigned int)qosClass;
- (int)qosRelativePriority;
- (BOOL)setBackgroundGPUPriority:(unsigned int)arg1;
- (BOOL)setBackgroundGPUPriority:(unsigned int)arg1 offset:(unsigned short)arg2;
- (void)setBackgroundTrackingPID:(int)arg1;
- (void)setCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setExecutionEnabled:(BOOL)arg1;
- (BOOL)setGPUPriority:(unsigned int)arg1;
- (BOOL)setGPUPriority:(unsigned int)arg1 offset:(unsigned short)arg2;
- (void)setIsOpenGLQueue:(BOOL)arg1;
- (void)setProfilingEnabled:(BOOL)arg1;
- (void)setSkipRender:(BOOL)arg1;
- (void)setSubmissionQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (BOOL)skipRender;

@optional

- (void)addPerfSampleHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLCommandBuffer> *, NSData *, unsigned int, void*
- (NSArray *)availableCounters;
- (NSDictionary *)counterInfo;
- (NSArray *)getRequestedCounters;
- (unsigned long long)getStatLocations;
- (unsigned long long)getStatOptions;
- (BOOL)isStatEnabled;
- (int)requestCounters:(NSArray *)arg1;
- (int)requestCounters:(NSArray *)arg1 withIndex:(unsigned int)arg2;
- (void)setStatEnabled:(BOOL)arg1;
- (void)setStatLocations:(unsigned long long)arg1;
- (void)setStatOptions:(unsigned long long)arg1;
- (NSArray *)subdivideCounterList:(NSArray *)arg1;

@end
