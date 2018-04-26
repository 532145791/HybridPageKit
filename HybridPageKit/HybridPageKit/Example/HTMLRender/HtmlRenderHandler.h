//
//  HtmlRenderHandler.h
//  HybridPageKit
//
//  Created by dequanzhu.
//  Copyright © 2018 HybridPageKit. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "RNSHandler.h"

typedef void (^HPKHtmlRenderCompleteBlock)(NSString *finalHTMLString, NSError *error);

@interface HtmlRenderHandler : NSObject

+ (HtmlRenderHandler *)shareInstance;

- (void)asyncRenderHTMLString:(NSString *)htmlString
               componentArray:(NSArray<RNSModel *> *)componentArray
                completeBlock:(HPKHtmlRenderCompleteBlock)completeBlock;
@end
