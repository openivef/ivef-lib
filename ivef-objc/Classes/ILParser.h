/* 
 *  ILParser
 *
 *  ILParser is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Tue May 18 14:51:29 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#import <Foundation/Foundation.h>
#import "ILSchema.h"
#import "ILMSG_IVEF.h"
#import "ILBody.h"
#import "ILObjectDatas.h"
#import "ILArea.h"
#import "ILOtherId.h"
#import "ILOtherName.h"
#import "ILHeader.h"
#import "ILLoginRequest.h"
#import "ILLoginResponse.h"
#import "ILLogout.h"
#import "ILObjectData.h"
#import "ILPing.h"
#import "ILPong.h"
#import "ILPos.h"
#import "ILServerStatus.h"
#import "ILServiceRequest.h"
#import "ILTransmission.h"
#import "ILItem.h"
#import "ILFilter.h"
#import "ILServiceRequestResponse.h"
#import "ILTaggedItem.h"
#import "ILTrackData.h"
#import "ILNavStatus.h"
#import "ILVesselData.h"
#import "ILConstruction.h"
#import "ILUnType.h"
#import "ILIdentifier.h"
#import "ILVoyageData.h"
#import "ILWaypoint.h"

//-----------------------------------------------------------
//! \brief       Class definition of ILParser
//!

#if defined (__clang__)
@interface ILParser : NSObject { // defintion is missing in GNUStep 
#else
@interface ILParser : NSObject <NSXMLParserDelegate> { 
#endif
    NSMutableString *m_dataBuffer;
    NSMutableString *m_characterBuffer;
    NSMutableArray *m_objStack;
    NSMutableArray *m_closeTags;
}

//!Delegate method for NSXMLParser
//!
- (void)     parser:(NSXMLParser *)parser 
    didStartElement:(NSString *)elementName
       namespaceURI:(NSString *)namespaceURI
      qualifiedName:(NSString *)qualifiedName
         attributes:(NSDictionary *)attributeDict;
//!Delegate method for NSXMLParser
//!
- (void)parser:(NSXMLParser *)parser foundCharacters:(NSString *)string;
//!Delegate method for NSXMLParser
//!
- (void)     parser:(NSXMLParser *)parser 
      didEndElement:(NSString *)elementName
       namespaceURI:(NSString *)namespaceURI
      qualifiedName:(NSString *)qualifiedName;
- (BOOL) parseXMLString:(NSString *)data andBuffer: (BOOL) cont;
- (void)parser:(NSXMLParser *)parser parseErrorOccurred:(NSError *)parseError;
//!Published Notifications
//!
//    @"NewILMSG_IVEF" with @"Data" = ILMSG_IVEF
//    @"ILParserError" with @"Error" = NSError 
//    @"ILValidationError" with @"Error" = NString 

@end



