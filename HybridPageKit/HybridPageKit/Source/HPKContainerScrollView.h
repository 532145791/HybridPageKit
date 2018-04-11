//
//  HPKContainerScrollView.h
//  HybridPageKit
//
//  Created by dequanzhu.
//  Copyright © 2018 HybridPageKit. All rights reserved.
//

typedef void (^HPKContainerScrollViewChangeBlock)(void);

@interface HPKContainerScrollView : UIScrollView

- (instancetype)initWithFrame:(CGRect)frame
                  layoutBlock:(HPKContainerScrollViewChangeBlock)layoutBlock;
@end
