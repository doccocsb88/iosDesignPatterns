//
//  Album+TableRepresentation.h
//  BlueLibrary
//
//  Created by Apple on 10/1/15.
//  Copyright © 2015 Eli Ganem. All rights reserved.
//

#import "Album.h"

@interface Album (TableRepresentation)
- (NSDictionary*)tr_tableRepresentation;
@end
