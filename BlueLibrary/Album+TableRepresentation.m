//
//  Album+TableRepresentation.m
//  BlueLibrary
//
//  Created by Apple on 10/1/15.
//  Copyright © 2015 Eli Ganem. All rights reserved.
//

#import "Album+TableRepresentation.h"

@implementation Album (TableRepresentation)
- (NSDictionary*)tr_tableRepresentation
{
    return @{@"titles":@[@"Artist", @"Album", @"Genre", @"Year"],
             @"values":@[self.artist, self.title, self.genre, self.year]};
}
@end
