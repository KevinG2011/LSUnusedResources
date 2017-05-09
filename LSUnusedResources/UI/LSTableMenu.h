//
//  LSTableMenu.h
//  EasyCode
//
//  Created by lijia on 20/03/2017.
//  Copyright © 2017 music4kid. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@protocol LSTableMenuDelegate;

@interface LSTableMenu : NSMenu
@property (nonatomic, weak) id<LSTableMenuDelegate>         editorDelegate;
@property (nonatomic, readonly,copy) NSArray* itemsTitle;
@end

@protocol LSTableMenuDelegate <NSObject>
-(void)menu:(LSTableMenu*)menu didSelectedItemWithTag:(NSInteger)tag;
@end
