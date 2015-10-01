//
//  Album.h
//  BlueLibrary
//
//  Created by Apple on 10/1/15.
//  Copyright © 2015 Eli Ganem. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Album : NSObject
@property (nonatomic, copy, readonly) NSString *title, *artist, *genre, *coverUrl, *year;
- (id)initWithTitle:(NSString*)title artist:(NSString*)artist coverUrl:(NSString*)coverUrl year:(NSString*)year;
@end
