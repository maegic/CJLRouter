//
//  CJRouter+CJLogin
//  CJLogin
//
//  Created by lele8446 on 2018/10/22.
//  Copyright © 2018 lele8446. All rights reserved.
//

/*
 * 声明当前组件可供外部调用的通信接口
 * 接口方法名格式：+ 当前模块名_方法
 *
 当前组件接口：
   例1: + (UIViewController *)login_loginViewController;//获取登录页面Controller
   例2: + (BOOL)login_updateUserName:(NSString *)name;//更新用户名

 其他组件调用：
 1、路由分类方法转发调用
   UIViewController *loginVC = [CJRouter routerPerformSELname:@"login_loginViewController"];
   BOOL result = [CJRouter routerPerformSELname:@"login_updateUserName:" params:@[@"username"]];

 2、AppScheme路由URI调用
 BOOL result = [CJRouter routerPerformWithUri:@"CJRouter://login/login_updateUserName:?name=username"];

 */

#import "CJRouter.h"
#import <UIKit/UIKit.h>

@interface CJRouter (CJLogin)

/// 我的模块Navigation
+ (UINavigationController *)login_meNavigationCtr;

/// 调用登录
/// @param viewController 触发登录的页面
/// @param loginSuccessBlock 登录成功回调
+ (void)login_loginFromController:(UIViewController *)viewController success:(void(^)(void))loginSuccessBlock;

@end
