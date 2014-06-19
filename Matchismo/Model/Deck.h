//
//  Deck.h
//  Matchismo
//
//  Created by 楊 德忻 on 14/6/19.
//  Copyright (c) 2014年 楊 德忻. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"
@interface Deck : NSObject

-(void) addCard:(Card *)card atTop:(BOOL)atTop;

-(void) addCard:(Card *)card;

- (Card *)drawRandomCard;
@end
