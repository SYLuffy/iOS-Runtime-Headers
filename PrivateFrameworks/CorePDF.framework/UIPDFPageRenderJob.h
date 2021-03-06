/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFPageRenderJob : NSObject {
    SEL  _callback;
    UIImage * _image;
    int  _lock;
    UIPDFPageRenderOperation * _operation;
    UIPDFPage * _page;
    unsigned int  _pageIndex;
    int  _priority;
    BOOL  _releaseWhenDone;
    BOOL  _sendPending;
    struct CGSize { 
        float width; 
        float height; 
    }  _size;
    id  _target;
    id  _userData;
}

@property (readonly, retain) UIImage *image;
@property UIPDFPageRenderOperation *operation;
@property (readonly) unsigned int pageIndex;
@property (readonly) int priority;
@property BOOL releaseWhenDone;
@property (readonly) struct CGSize { float x1; float x2; } size;

- (void)cancel;
- (void)cancelOperation;
- (void)cancelOperationForTarget:(id)arg1;
- (void)dealloc;
- (BOOL)hasPage;
- (id)image;
- (id)initWithPage:(id)arg1 maxSize:(struct CGSize { float x1; float x2; })arg2 queuePriority:(int)arg3;
- (id)operation;
- (unsigned int)pageIndex;
- (int)priority;
- (void)releaseOperation;
- (BOOL)releaseWhenDone;
- (void)renderImage;
- (void)sendImage;
- (void)sendImageTo:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;
- (void)setOperation:(id)arg1;
- (void)setReleaseWhenDone:(BOOL)arg1;
- (void)setTarget:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;
- (struct CGSize { float x1; float x2; })size;

@end
