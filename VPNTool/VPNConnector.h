//
//  VPNConnector.h
//  VPNTool
//
//  Created by Valentin Cherepyanko on 18/11/14.
//  Copyright (c) 2014 Valentin Cherepyanko. All rights reserved.
//

#define ACCOUNT @"Valentin"
#define PASSWORD @"Valentin19"
#define SERVER @"192.168.0.128"
#define SECRET @"ssNWrsE^e&_W6CEMi_hM"

#import <Foundation/Foundation.h>
#import <NetworkExtension/NetworkExtension.h>

@interface VPNConnector : NSObject

+ (VPNConnector *)instance;
- (void)loadConfig;
- (void)connect;

@end
