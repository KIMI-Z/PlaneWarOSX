//
//  PlaneSprite.h
//  planeWar
//
//  Created by croath on 13-8-26.
//  Copyright (c) 2013年 Croath. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

typedef enum{
  PlayerPlaneBit    = 0x1 << 0,
  EnemyPlaneBit     = 0x1 << 1,
}PhysicsTypeBit;

@interface PlaneSprite : SKSpriteNode

@property (nonatomic) CGFloat speed;
@property (nonatomic) CGFloat blood;
@property (nonatomic) CGFloat maxBlood;

@property (nonatomic) BOOL inScene;

@end
