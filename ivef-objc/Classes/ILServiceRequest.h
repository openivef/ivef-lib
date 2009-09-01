/* 
 *  ILServiceRequest
 *
 *  ILServiceRequest is free software: you can redistribute it and/or modify
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
#import "ILArea.h"
#import "ILTransmission.h"
#import "ILItem.h"
#import "ILObject.h"

@interface ILServiceRequest : NSObject { 
    NSMutableArray *m_areas;
    ILTransmission *m_transmission;
    NSMutableArray *m_items;
    NSMutableArray *m_objects;
}

-(void) addArea:(ILArea *) val;
-(ILArea *) getAreaAt:(int) i;
-(int) countOfAreas;
-(NSArray *) Areas;
-(void) setTransmission:(ILTransmission *) val;
-(ILTransmission *) transmission;
-(void) addItem:(ILItem *) val;
-(ILItem *) getItemAt:(int) i;
-(int) countOfItems;
-(NSArray *) Items;
-(void) addObject:(ILObject *) val;
-(ILObject *) getObjectAt:(int) i;
-(int) countOfObjects;
-(NSArray *) Objects;

-(void) setAttributes:(NSDictionary *)attributeDict;
-(NSDictionary *) attributes;
-(NSString *) XML;
-(NSString *) stringValue;
-(NSString *) stringValueWithLead:(NSString *) lead;
-(NSString *) encode: (NSString *) input;

@end


