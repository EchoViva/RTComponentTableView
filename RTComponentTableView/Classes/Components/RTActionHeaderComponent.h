//
//  RTActionHeaderComponent.h
//  Pods
//
//  Created by ricky on 16/6/19.
//
//

#import "RTHeaderComponent.h"

@protocol RTActionHeaderComponentDelegate <RTBaseComponentDelegate>
@optional
- (void)tableComponentDidTapActionButton:(id<RTTableComponent>)component;
@end


@interface RTActionHeaderComponent : RTHeaderComponent
@property (nonatomic, weak) id<RTActionHeaderComponentDelegate> delegate;
@property (nonatomic, readonly, strong) UIButton *actionButton;
@property (nonatomic, strong) NSString *actionTitle;
@end
