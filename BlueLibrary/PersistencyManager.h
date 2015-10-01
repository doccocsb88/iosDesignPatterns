//
//  PersistencyManager.h
//  BlueLibrary
//
//  Created by Apple on 10/1/15.
//  Copyright © 2015 Eli Ganem. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Album.h"
@interface PersistencyManager : NSObject
- (NSArray*)getAlbums;
- (void)addAlbum:(Album*)album atIndex:(int)index;
- (void)deleteAlbumAtIndex:(int)index;
@end
