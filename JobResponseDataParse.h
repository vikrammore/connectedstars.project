//
//  JobResponseDataParse.h
//  ToDoList
//
//  Created by Vikam MORE on 29/05/15.
//  Copyright (c) 2015 Vikam MORE. All rights reserved.
//

#ifndef ToDoList_JobResponseDataParse_h
#define ToDoList_JobResponseDataParse_h


#endif

- (void) parseResponse : (NSDictionary*) input;
- (NSArray*) getArrayFromDictionary: (NSString*) keyWord : (NSDictionary*) input;
- (NSDictionary*) getDictionaryFromDictionary: (NSString*) keyWord : (NSDictionary*) input;
- (NSString*) getStringFromDictionary: (NSString*) keyWord : (NSDictionary*) input;
