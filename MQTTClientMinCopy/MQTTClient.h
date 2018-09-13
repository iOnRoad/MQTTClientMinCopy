//
//  MQTTClient.h
//  MQTTClient
//
//  Created by Christoph Krey on 13.01.14.
//  Copyright © 2013-2017 Christoph Krey. All rights reserved.
//

/**
 Include this file to use MQTTClient classes in your application
 
 @author Christoph Krey c@ckrey.de
 @see http://mqtt.org
 */

#import <Foundation/Foundation.h>

#import <MQTTClientMinCopy/MQTTSession.h>
#import <MQTTClientMinCopy/MQTTDecoder.h>
#import <MQTTClientMinCopy/MQTTSessionLegacy.h>
#import <MQTTClientMinCopy/MQTTSessionSynchron.h>
#import <MQTTClientMinCopy/MQTTProperties.h>
#import <MQTTClientMinCopy/MQTTMessage.h>
#import <MQTTClientMinCopy/MQTTTransport.h>
#import <MQTTClientMinCopy/MQTTCFSocketTransport.h>
#import <MQTTClientMinCopy/MQTTCoreDataPersistence.h>
#import <MQTTClientMinCopy/MQTTSSLSecurityPolicyTransport.h>
#import <MQTTClientMinCopy/MQTTLog.h>

#if __has_include(<MQTTClientMinCopy/MQTTSessionManager.h>)
#import <MQTTClientMinCopy/MQTTSessionManager.h>
#endif

//! Project version number for MQTTClient.
FOUNDATION_EXPORT double MQTTClientVersionNumber;

//! Project version string for MQTTClient&lt;.
FOUNDATION_EXPORT const unsigned char MQTTClientVersionString[];

