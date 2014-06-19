//
//  Card.h
//  Matchismo
//
//  Created by 楊 德忻 on 14/6/19.
//  Copyright (c) 2014年 楊 德忻. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject
@property (strong, nonatomic) NSString *contents;
@property (nonatomic, getter = isChosen) BOOL chosen;
@property (nonatomic, getter = isMatched) BOOL matched;

- (int) match:(NSArray *)otherCards;
@end
