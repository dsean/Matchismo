//
//  PlayingCardGameViewController.m
//  Matchismo
//
//  Created by 楊 德忻 on 2014/6/25.
//  Copyright (c) 2014年 楊 德忻. All rights reserved.
//

#import "PlayingCardGameViewController.h"

#import "PlayingDeck.h"
@interface PlayingCardGameViewController ()

@end

@implementation PlayingCardGameViewController

- (Deck *)createDeck {
    return [[PlayingDeck alloc] init];
}

@end
