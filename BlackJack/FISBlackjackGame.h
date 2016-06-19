//
//  FISBlackjackGame.h
//  
//
//  Created by Erica on 6/17/16.
//
//

#import <Foundation/Foundation.h>
#import "FISBlackjackPlayer.h"
#import "FISCardDeck.h"

@interface FISBlackjackGame : NSObject

@property (nonatomic, strong)FISCardDeck*deck;

@property(nonatomic, strong)FISBlackjackPlayer*house;

@property(nonatomic, strong)FISBlackjackPlayer*player;


-(void)playBlackjack;

-(void)dealNewRound;

-(void)dealCardToPlayer;

-(void)dealCardToHouse;

-(void)processPlayerTurn;

-(void)processHouseTurn;

-(BOOL)houseWins;

-(void)incrementWinsAndLossesForHouseWins:(BOOL)houseWins;




@end
