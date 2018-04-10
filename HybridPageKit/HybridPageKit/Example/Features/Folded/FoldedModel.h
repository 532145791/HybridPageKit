//
//  FoldedModel.h
//  HybridPageKit
//
//  Created by dequanzhu on 10/04/2018.
//  Copyright © 2018 HybridPageKit. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FoldedModel : NSObject<RNSModelProtocol>

@property(nonatomic,copy,readonly)NSString *index;
@property(nonatomic,copy,readonly)NSString *text;

- (instancetype)initWithDic:(NSDictionary *)dic;
@end
