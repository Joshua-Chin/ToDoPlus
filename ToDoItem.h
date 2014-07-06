//
//  ToDoItem.h
//  ToDoList
//
//  Created by Joshua Chin on 7/5/14.
//
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString* itemName;
@property BOOL completed;
@property (readonly) NSDate* creationDate;

@end
