/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UITextInputTraits.h>
#import "UIKit-Structs.h"
#import <UIKit/UITextField.h>
#import <Availability2.h>

@class UITextSelectionView, UIColor, UITextFieldAtomBackgroundView, UITextFieldBorderView, UITextFieldLabel, NSString, UITextInputTraits, UIImage, UIImageView, UITextFieldBackgroundView, UIFont, UILabel, UITextInteractionAssistant;
@protocol UITextFieldDelegate;

@interface UITextField ()
// inherited: -(id)initWithFrame:(CGRect)frame;
// in a protocol: -(id)initWithCoder:(id)coder;
-(void)_populateArchivedSubviews:(id)subviews;
// in a protocol: -(void)encodeWithCoder:(id)coder;
// inherited: -(void)dealloc;
-(void)_clearStyle;
-(void)_setNeedsStyleRecalc;
-(void)_sizeChanged:(BOOL)changed;
// inherited: -(void)setFrame:(CGRect)frame;
// inherited: -(void)setBounds:(CGRect)bounds;
-(void)setAnimating:(BOOL)animating;
-(CGSize)_textSize;
// inherited: -(CGSize)sizeThatFits:(CGSize)fits;
// inherited: -(BOOL)canBecomeFirstResponder;
// inherited: -(BOOL)canResignFirstResponder;
// inherited: -(BOOL)becomeFirstResponder;
// inherited: -(BOOL)isFirstResponder;
// inherited: -(BOOL)resignFirstResponder;
-(BOOL)_sendInitialMouseEvents;
// inherited: -(void)mouseDown:(GSEventRef)down;
// inherited: -(void)mouseDragged:(GSEventRef)dragged;
// inherited: -(void)mouseUp:(GSEventRef)up;
// inherited: -(void)touchesEnded:(id)ended withEvent:(id)event;
// inherited: -(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
// inherited: -(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)setFont:(id)font fullFontSize:(CGFloat)size;
-(id)_copyFont:(id)font newSize:(CGFloat)size maxSize:(CGFloat)size3;
-(CGFloat)_marginTopForText:(id)text;
-(id)_style;
-(void)_endedEditing;
-(void)_updateButtons;
-(void)_updateAutosizeStyleIfNeeded;
-(CGRect)_atomBackgroundViewFrame;
-(BOOL)_showsAtomBackground;
-(void)_updateAtomBackground;
-(BOOL)_showsClearButton:(BOOL)button;
-(BOOL)_showsLeftView;
-(BOOL)_showsRightView;
-(CGRect)_textRectForBounds:(CGRect)bounds forEditing:(BOOL)editing;
-(CGRect)_textRectExcludingButtonsForBounds:(CGRect)bounds;
-(void)_updateLabel;
-(CGRect)_frameForLabel:(id)label inTextRect:(CGRect)textRect;
-(void)layoutSubviews;
-(BOOL)_shouldEndEditing;
-(void)_updateBackgroundViews;
-(void)_clearBackgroundViews;
-(void)_setImplicitAlignment;
-(CGPoint)_scrollOffset;
-(CGSize)_leftViewOffset;
-(void)_setLeftViewOffset:(CGSize)offset;
-(CGSize)_rightViewOffset;
-(void)_setRightViewOffset:(CGSize)offset;
-(Class)_systemBackgroundViewClass;
-(BOOL)_fieldEditorAttached;
-(void)_setSystemBackgroundViewActive:(BOOL)active;
-(id)_placeholderView;
-(id)_textLabelView;
-(id)textInputTraits;
-(void)forwardInvocation:(id)invocation;
-(id)methodSignatureForSelector:(SEL)selector;
-(void)_updateTextLabel;
-(id)_text;
-(id)searchText;
-(void)_updateTextColor;
-(void)setContentVerticalAlignment:(int)alignment;
-(id)createPlaceholderLabelWithFont:(id)font andTextAlignment:(int)alignment;
-(id)createTextLabelWithTextColor:(id)textColor;
-(CGRect)borderRectForBounds:(CGRect)bounds;
-(CGRect)textRectForBounds:(CGRect)bounds;
-(CGRect)placeholderRectForBounds:(CGRect)bounds;
-(CGRect)editingRectForBounds:(CGRect)bounds;
-(CGRect)clearButtonRectForBounds:(CGRect)bounds;
-(CGRect)leftViewRectForBounds:(CGRect)bounds;
-(CGRect)rightViewRectForBounds:(CGRect)bounds;
-(void)drawTextInRect:(CGRect)rect;
-(void)drawPlaceholderInRect:(CGRect)rect;
-(void)_drawTextInRect:(CGRect)rect forLabel:(id)label;
-(void)willAttachFieldEditor:(id)editor;
-(void)attachFieldEditor:(id)editor;
-(void)willDetachFieldEditor:(id)editor;
-(BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;
-(BOOL)keyboardInputShouldDelete:(id)keyboardInput;
-(BOOL)keyboardInputChanged:(id)changed;
-(void)keyboardInputChangedSelection:(id)selection;
-(id)customOverlayContainer;
-(void)fieldEditorDidChange:(id)fieldEditor;
-(void)selectAllFromFieldEditor:(id)fieldEditor;
-(NSRange)fieldEditor:(id)editor willChangeSelectionFromCharacterRange:(NSRange)characterRange toCharacterRange:(NSRange)characterRange3;
-(void)fieldEditorDidChangeSelection:(id)fieldEditor;
-(BOOL)fieldEditor:(id)editor shouldInsertText:(id)text replacingRange:(NSRange)range;
-(BOOL)fieldEditor:(id)editor shouldReplaceWithText:(id)text;
-(id)supportedPasteboardTypesForCurrentSelection;
-(id)documentFragmentForPasteboardItemAtIndex:(int)index;
-(void)setAutoresizesTextToFit:(BOOL)fit;
-(void)setTextAutorresizesToFit:(BOOL)fit;
-(void)setClearButtonStyle:(int)style;
-(CGRect)clearButtonRect;
-(CGRect)textRect;
-(CGRect)editRect;
// inherited: -(void)drawRect:(CGRect)rect;
-(void)drawBorder:(CGRect)border;
-(void)setPaddingTop:(CGFloat)top paddingLeft:(CGFloat)left;
-(void)setPaddingLeft:(CGFloat)left;
-(CGFloat)paddingLeft;
-(void)setPaddingTop:(CGFloat)top;
-(CGFloat)paddingTop;
-(void)setPaddingBottom:(CGFloat)bottom;
-(CGFloat)paddingBottom;
-(void)setPaddingRight:(CGFloat)right;
-(CGFloat)paddingRight;
-(void)setTextFont:(id)font;
-(void)setInactiveHasDimAppearance:(BOOL)appearance;
-(void)setEnabled:(BOOL)enabled;
-(void)selectAll;
-(void)layoutTilesNow;
-(void)clearText;
-(NSRange)selectionRange;
-(void)setSelectionRange:(NSRange)range;
-(unsigned)characterOffsetAtPoint:(CGPoint)point;
-(void)setIcon:(id)icon;
-(CGSize)clearButtonOffset;
-(void)setBecomesFirstResponderOnClearButtonTap:(BOOL)tap;
-(CGRect)iconRect;
-(void)setProgress:(CGFloat)progress;
-(BOOL)hasMarkedText;
-(void)setLabelOffset:(CGFloat)offset;
-(id)textLabel;
-(void)setLabel:(id)label;
-(void)setTextCentersHorizontally:(BOOL)horizontally;
-(void)setTextCentersVertically:(BOOL)vertically;
-(void)setUndoEnabled:(BOOL)enabled;
-(BOOL)isUndoEnabled;
-(void)_clearButtonClicked:(id)clicked;
-(void)setClearButtonOffset:(CGSize)offset;
-(void)setDrawsAsAtom:(BOOL)atom;
-(BOOL)drawsAsAtom;
-(void)setAtomStyle:(int)style;
-(int)atomStyle;
-(id)undoManager;
-(id)content;
-(BOOL)isEditable;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(void)selectionChanged;
-(id)_fieldEditor;
-(BOOL)hasSelection;
-(int)selectionState;
-(void)clearSelection;
-(int)selectionGranularity;
-(void)setSelectionGranularity:(int)granularity;
-(BOOL)selectionGranularityIncreasing;
-(void)setSelectionGranularityIncreasing:(BOOL)increasing;
-(void)setSelectionToNextGranularity:(CGPoint)nextGranularity;
-(void)startAutoscroll:(CGPoint)autoscroll;
-(void)cancelAutoscroll;
-(void)setSelectionVisible:(BOOL)visible;
-(void)collapseSelection;
-(BOOL)selectionVisible;
-(void)setCaretBlinks:(BOOL)blinks;
-(BOOL)caretBlinks;
-(id)selectionView;
-(id)interactionAssistant;
-(CGRect)caretRect;
-(CGRect)selectionClipRect;
-(id)selectionRects;
-(BOOL)setRangedSelectionExtentPoint:(CGPoint)point baseIsStart:(BOOL)start;
-(void)setSelectionWithFirstPoint:(CGPoint)firstPoint secondPoint:(CGPoint)point;
-(id)selectedText;
-(void)insertText:(id)text;
-(CGRect)closestCaretRectForPoint:(CGPoint)point inSelection:(BOOL)selection;
-(CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)point;
-(unsigned)selectionOffsetInMarkedText;
-(id)wordAtPoint:(CGPoint)point;
-(BOOL)pointAtStartOfLine:(CGPoint)line;
-(BOOL)pointAtEndOfLine:(CGPoint)line;
-(void)moveSelectionToStartOrEndOfCurrentWord;
-(void)setSelectionWithPoint:(CGPoint)point;
-(CGPoint)constrainedPoint:(CGPoint)point;
-(id)webView;
// inherited: -(void)cut:(id)cut;
// inherited: -(void)copy:(id)copy;
-(id)supportedPasteboardTypes;
// inherited: -(void)paste:(id)paste;
// inherited: -(void)select:(id)select;
// inherited: -(void)selectAll:(id)all;
-(void)_setRtoLTextDirection:(id)direction;
-(void)_setLtoRTextDirection:(id)direction;
// inherited: -(BOOL)canPerformAction:(SEL)action withSender:(id)sender;

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(id)_keyboardResponder;
-(BOOL)_requiresKeyboardResetOnReload;
-(void)_becomeFirstResponderAndMakeVisible;
-(void)_becomeFirstResponder;
-(void)_resignFirstResponder;
-(id)_createCSSStyleDeclarationForWebView:(id)webView;
-(id)_placeholderColor;
-(void)replace:(id)replace;
-(void)promptForReplace:(id)replace;
#else
-(id)_firstResponder;
-(int)keyboardInput:(id)input positionForAutocorrection:(id)autocorrection;
-(BOOL)fieldEditorShouldEndEditing:(id)fieldEditor;
-(void)fieldEditorDidBecomeFirstResponder:(id)fieldEditor;
-(void)fieldEditorDidResignFirstResponder:(id)fieldEditor;
-(BOOL)webView:(id)view shouldInsertText:(id)text replacingDOMRange:(id)range givenAction:(int)action;
#endif
@end

@interface UITextField (SyntheticEvents)
-(id)_scriptingInfo;
@end

@interface UITextField (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

