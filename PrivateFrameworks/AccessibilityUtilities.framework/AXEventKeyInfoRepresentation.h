/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class NSString;

@interface AXEventKeyInfoRepresentation : NSObject <NSSecureCoding, NSCopying> {
    unsigned short _keyCode;
    BOOL _keyDown;
    NSString *_modifiedInput;
    unsigned int _modifierState;
    NSString *_shiftModifiedInput;
    NSString *_unmodifiedInput;
}

@property unsigned short keyCode;
@property BOOL keyDown;
@property(retain) NSString * modifiedInput;
@property unsigned int modifierState;
@property(retain) NSString * shiftModifiedInput;
@property(retain) NSString * unmodifiedInput;

+ (BOOL)supportsSecureCoding;

- (id)_hardwareKeyboardLayout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned short)keyCode;
- (BOOL)keyDown;
- (id)modifiedInput;
- (unsigned int)modifierState;
- (void)setKeyCode:(unsigned short)arg1;
- (void)setKeyDown:(BOOL)arg1;
- (void)setModifiedInput:(id)arg1;
- (void)setModifierState:(unsigned int)arg1;
- (void)setShiftModifiedInput:(id)arg1;
- (void)setUnmodifiedInput:(id)arg1;
- (id)shiftModifiedInput;
- (void)translateKeycode;
- (id)unmodifiedInput;

@end