//
//  SYNetworkHelper.h
//  SYProduct
//
//  Created by aDu on 16/4/20.
//  Copyright © 2016年 DuKaiShun. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^CompletioBlock)(NSDictionary *dic, NSURLResponse *response, NSError *error);
typedef void (^SuccessBlock)(NSDictionary *data);
typedef void (^FailureBlock)(NSError *error);
@interface SYNetworkHelper : NSObject<NSURLSessionDelegate>

/**
 *  get请求
 */
+ (void)getWithUrlString:(NSString *)url parameters:(id)parameters success:(SuccessBlock)successBlock failure:(FailureBlock)failureBlock;
/**
 * post请求
 */
+ (void)postWithUrlString:(NSString *)url parameters:(id)parameters success:(SuccessBlock)successBlock failure:(FailureBlock)failureBlock;

@end
