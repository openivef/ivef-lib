/* 
 *  IVEFSchema
 *
 *  IVEFSchema is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Wed May 20 17:30:50 2009.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#import <Foundation/Foundation.h>

@interface IVEFSchema : NSObject { 
    NSDateFormatter *m_dateFormatter;
}

-(NSString*) getElementFormDefault;
-(NSString*) getTargetNamespace;

-(void) setAttributes:(NSDictionary *)attributeDict;
-(NSString *) XML;
-(NSString *) stringValueWithLead:(NSString *) lead;
-(NSString *) encode;

@end



