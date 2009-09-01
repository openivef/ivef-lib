/* 
 *  ILBody
 *
 *  ILBody is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Foobar is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY ); without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 **********************************************************************************
 *  WARNING: THIS CODE WAS GENERATED DO NOT MODIFY, CHANGE THE XSD INSTEAD
 *  Generated by xsd2code on Tue Sep 1 21:18:22 2009.
 **********************************************************************************
 *  Copyright 2009
 *
 */

#import <Foundation/Foundation.h>
#import "ILLoginRequest.h"
#import "ILLoginResponse.h"
#import "ILLogout.h"
#import "ILPing.h"
#import "ILPong.h"
#import "ILServerStatus.h"
#import "ILServiceRequest.h"
#import "ILVesselData.h"

@interface ILBody : NSObject { 
    ILLoginRequest *m_loginRequest;
    bool m_loginRequestPresent;
    ILLoginResponse *m_loginResponse;
    bool m_loginResponsePresent;
    ILLogout *m_logout;
    bool m_logoutPresent;
    ILPing *m_ping;
    bool m_pingPresent;
    ILPong *m_pong;
    bool m_pongPresent;
    ILServerStatus *m_serverStatus;
    bool m_serverStatusPresent;
    ILServiceRequest *m_serviceRequest;
    bool m_serviceRequestPresent;
    NSMutableArray *m_vesselDatas;
    bool m_vesselDataPresent;
}

-(void) setLoginRequest:(ILLoginRequest *) val;
-(ILLoginRequest *) loginRequest;
-(bool) hasLoginRequest;
-(void) setLoginResponse:(ILLoginResponse *) val;
-(ILLoginResponse *) loginResponse;
-(bool) hasLoginResponse;

/* Logout:
   Logout element node */
-(void) setLogout:(ILLogout *) val;
-(ILLogout *) logout;
-(bool) hasLogout;
-(void) setPing:(ILPing *) val;
-(ILPing *) ping;
-(bool) hasPing;
-(void) setPong:(ILPong *) val;
-(ILPong *) pong;
-(bool) hasPong;
-(void) setServerStatus:(ILServerStatus *) val;
-(ILServerStatus *) serverStatus;
-(bool) hasServerStatus;
-(void) setServiceRequest:(ILServiceRequest *) val;
-(ILServiceRequest *) serviceRequest;
-(bool) hasServiceRequest;
-(void) addVesselData:(ILVesselData *) val;
-(ILVesselData *) getVesselDataAt:(int) i;
-(int) countOfVesselDatas;
-(NSArray *) VesselDatas;

-(void) setAttributes:(NSDictionary *)attributeDict;
-(NSDictionary *) attributes;
-(NSString *) XML;
-(NSString *) stringValue;
-(NSString *) stringValueWithLead:(NSString *) lead;
-(NSString *) encode: (NSString *) input;

@end


