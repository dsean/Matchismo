//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by 楊 德忻 on 14/6/19.
//  Copyright (c) 2014年 楊 德忻. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"
#import "Card.h"
@interface CardMatchingGame : NSObject

- (instancetype)initWithCardCount:(NSUInteger)count
                        usingDeck:(Deck *)deck;

- (void) chooseCardAtIndex :(NSUInteger)index;

- (Card *)cardAtIndex:(NSUInteger)index;

@property (nonatomic, readonly) NSInteger score;

@end
