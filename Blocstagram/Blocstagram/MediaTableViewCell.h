//
//  MediaTableViewCell.h
//  Blocstagram
//
//  Created by Stephen Blair on 5/28/15.
//  Copyright (c) 2015 blairgraphix. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Media;

@interface MediaTableViewCell : UITableViewCell
@property (nonatomic, strong) Media *mediaItem;

+ (CGFloat) heightForMediaItem:(Media *)mediaItem width:(CGFloat)width;


@end
