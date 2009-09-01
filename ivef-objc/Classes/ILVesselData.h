/* 
 *  ILVesselData
 *
 *  ILVesselData is free software: you can redistribute it and/or modify
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
#import "ILPosReport.h"
#import "ILStaticData.h"
#import "ILVoyage.h"

@interface ILVesselData : NSObject { 
    ILPosReport *m_posReport;
    NSMutableArray *m_staticDatas;
    NSMutableArray *m_voyages;
    int m_id;
}

-(void) setPosReport:(ILPosReport *) val;
-(ILPosReport *) posReport;
-(void) addStaticData:(ILStaticData *) val;
-(ILStaticData *) getStaticDataAt:(int) i;
-(int) countOfStaticDatas;
-(NSArray *) StaticDatas;
-(void) addVoyage:(ILVoyage *) val;
-(ILVoyage *) getVoyageAt:(int) i;
-(int) countOfVoyages;
-(NSArray *) Voyages;

/* Id:
   The unique identification of this object, typically identical to Id in the PosReport, but not required */
-(void) setIdent:(int) val;
-(int) ident;

-(void) setAttributes:(NSDictionary *)attributeDict;
-(NSDictionary *) attributes;
-(NSString *) XML;
-(NSString *) stringValue;
-(NSString *) stringValueWithLead:(NSString *) lead;
-(NSString *) encode: (NSString *) input;

@end


