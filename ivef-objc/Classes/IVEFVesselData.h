/* 
 *  IVEFVesselData
 *
 *  IVEFVesselData is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Tue Feb 3 14:32:25 2009.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#import <Foundation/Foundation.h>
#import "IVEFPosReport.h"
#import "IVEFStaticData.h"
#import "IVEFVoyage.h"

@interface IVEFVesselData : NSObject { 
    IVEFPosReport *m_posReport;
    NSMutableArray *m_staticDatas;
    NSMutableArray *m_voyages;
    NSDateFormatter *m_dateFormatter;
}

-(void) setPosReport:(IVEFPosReport *) val;
-(IVEFPosReport *) getPosReport;
-(void) addStaticData:(IVEFStaticData *) val;
-(IVEFStaticData *) getStaticDataAt:(int) i;
-(int) countOfStaticDatas;
-(void) addVoyage:(IVEFVoyage *) val;
-(IVEFVoyage *) getVoyageAt:(int) i;
-(int) countOfVoyages;

-(void) setAttributes:(NSDictionary *)attributeDict;
-(NSString *) XML;
-(NSString *) stringValueWithLead:(NSString *) lead;

@end



