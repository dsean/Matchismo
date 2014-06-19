//
//  PlayingDeck.m
//  Matchismo
//
//  Created by 楊 德忻 on 14/6/19.
//  Copyright (c) 2014年 楊 德忻. All rights reserved.
//

#import "PlayingDeck.h"

#import "PlayingCard.h"
@implementation PlayingDeck

- (instancetype) init {
    self = [super init];
    if (self) {
        for (NSString *suit in [PlayingCard validSuits]) {
            for (NSUInteger rank = 1; rank<= [PlayingCard maxRank]; rank++) {
                PlayingCard *card = [[PlayingCard alloc] init];
                card.rank = rank;
                card.suit = suit;
                [self addCard:card];
            }
        }
    }
    return self;
}

@end
