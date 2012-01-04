//
//  KKNExtract.h
//  KikinIos
//
//  Created by Gerald Kropitz on 8/3/11.
//  Copyright 2011 kikin. All rights reserved.
//

/*
 * This enum indicates the way a selection was made.
 */
typedef enum {
    /*
     * The selection was computed by KKNTextAnalyser.
     */
    HIGHLIGHT,
    
    /*
     * The selection was selected programmatically. 
     */
    SUGGESTION,
    
    /*
     * The selection was manually adjusted by the user.
     */
    SELECTION
} KKNQueryMode;

/*!
 * @class KKNExtract
 *
 * This classe stores extra information about a selection. This information is encoded
 * and sent to the server which analyses it to return the best possible results.
 */
@interface KKNExtract : NSObject

/*!
 * This function sets the text after the selection
 *
 * @param text the full text from the view 
 * @param selectedRange the selected range from the text given as parameter
 */
- (void)setPostTextFromText:(NSString*)text selectedRange:(NSRange)selectedRange;

/*!
 * This function sets the text before the selection
 *
 * @param text the full text from the view 
 * @param selectedRange the selected range from the text given as parameter
 */
- (void)setPreTextFromText:(NSString*)text selectedRange:(NSRange)selectedRange;

/*!
 * The highlighted text
 *
 * @param text the full text from the view 
 * @param selectedRange the selected range from the text given as parameter
 */
- (void)setHlTextFromText:(NSString*)text selectedRange:(NSRange)selectedRange;

/*!
 * The text inside the view
 *
 * @param text the full text from the view
 */
- (void)setTextContent:(NSString*)text;

/*!
 * The selected text
 */
- (void)setQuery:(NSString*)query;

/*!
 * This property stores the type of selection
 */
@property KKNQueryMode queryMode;

@end
