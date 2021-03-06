/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusEngineScrollViewOffsets : NSObject {
    id /* block */  _completion;
    float  _convergenceRate;
    struct CGPoint { 
        float x; 
        float y; 
    }  _lastContentOffset;
    struct CGPoint { 
        float x; 
        float y; 
    }  _lastVelocity;
    struct CGPoint { 
        float x; 
        float y; 
    }  _peekAdjustment;
    <UIScrollViewDelegate> * _scrollDelegate;
    UIScrollView * _scrollView;
    struct CGPoint { 
        float x; 
        float y; 
    }  _targetContentOffset;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) float convergenceRate;
@property (nonatomic) struct CGPoint { float x1; float x2; } lastContentOffset;
@property (nonatomic) struct CGPoint { float x1; float x2; } lastVelocity;
@property (nonatomic) struct CGPoint { float x1; float x2; } peekAdjustment;
@property (nonatomic, retain) <UIScrollViewDelegate> *scrollDelegate;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic) struct CGPoint { float x1; float x2; } targetContentOffset;

- (void).cxx_destruct;
- (id /* block */)completion;
- (float)convergenceRate;
- (struct CGPoint { float x1; float x2; })lastContentOffset;
- (struct CGPoint { float x1; float x2; })lastVelocity;
- (struct CGPoint { float x1; float x2; })peekAdjustment;
- (id)scrollDelegate;
- (id)scrollView;
- (void)setCompletion:(id /* block */)arg1;
- (void)setConvergenceRate:(float)arg1;
- (void)setLastContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setLastVelocity:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPeekAdjustment:(struct CGPoint { float x1; float x2; })arg1;
- (void)setScrollDelegate:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setTargetContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })targetContentOffset;

@end
