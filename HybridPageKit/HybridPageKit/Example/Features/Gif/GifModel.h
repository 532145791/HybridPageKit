//
//  GifModel.h
//  HybridPageKit
//
//  Created by dequanzhu.
//  Copyright © 2018 HybridPageKit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface GifModel : NSObject<RNSModelProtocol>
@property(nonatomic,copy,readonly)NSString *index;
@property(nonatomic,copy,readonly)NSString *imageUrl;
@property(nonatomic,copy,readonly)NSString *desc;
@property(nonatomic,assign,readonly)CGRect frame;


- (instancetype)initWithIndex:(NSString *)index valueDic:(NSDictionary *)valueDic;
@end
