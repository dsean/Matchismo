//
//  PlayingCard.h
//  Matchismo
//
//  Created by 楊 德忻 on 14/6/19.
//  Copyright (c) 2014年 楊 德忻. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic)NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
