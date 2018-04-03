//
//  HPKWebViewPool.h
//  HybridPageKit
//
//  Created by dequanzhu.
//  Copyright © 2018 HybridPageKit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HPKWebView.h"

@interface HPKWebViewPool : NSObject

+ (HPKWebViewPool *)shareInstance;

- (__kindof HPKWebView *)getReusedWebViewForHolder:(id)holder;

- (void)recycleReusedWebView:(__kindof HPKWebView *)webView;

- (void)cleanReusableViews;

@end
