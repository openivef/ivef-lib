/* 
 *  ILObjectData
 *
 *  ILObjectData is free software: you can redistribute it and/or modify
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
#import "ILTrackData.h"
#import "ILVesselData.h"
#import "ILVoyageData.h"
#import "ILTaggedItem.h"

//-----------------------------------------------------------
//! \brief       Class definition of ILObjectData
//!
//! DATA regarding an object in the supliers domain, contains at least 1 one of the sub elements (TrackData, VesselData, VoyageData)
//!

@interface ILObjectData : NSObject { 
    ILTrackData *m_trackData;
    BOOL m_trackDataPresent;
    NSMutableArray *m_vesselDatas;
    BOOL m_vesselDataPresent;
    NSMutableArray *m_voyageDatas;
    BOOL m_voyageDataPresent;
    NSMutableArray *m_taggedItems;
    BOOL m_taggedItemPresent;
}

//!Setter for TrackData
//!
-(BOOL) setTrackData:(ILTrackData *) val;
//!Getter for TrackData
//!
-(ILTrackData *) trackData;
//!Test for pressence of TrackData
//!
-(BOOL) hasTrackData;
//!Setter for VesselData
//!
-(BOOL) addVesselData:(ILVesselData *) val;
//!Getter for VesselData
//!
-(ILVesselData *) vesselDataAt:(int) i;
//!Element counter for VesselData
//!
-(int) countOfVesselDatas;
//!Get all elements for VesselData
//!
-(NSArray *) vesselDatas;
//!Setter for VoyageData
//!
-(BOOL) addVoyageData:(ILVoyageData *) val;
//!Getter for VoyageData
//!
-(ILVoyageData *) voyageDataAt:(int) i;
//!Element counter for VoyageData
//!
-(int) countOfVoyageDatas;
//!Get all elements for VoyageData
//!
-(NSArray *) voyageDatas;
//!Setter for TaggedItem
//!
-(BOOL) addTaggedItem:(ILTaggedItem *) val;
//!Getter for TaggedItem
//!
-(ILTaggedItem *) taggedItemAt:(int) i;
//!Element counter for TaggedItem
//!
-(int) countOfTaggedItems;
//!Get all elements for TaggedItem
//!
-(NSArray *) taggedItems;
//!Set attributes by providing a key/value dictionary
//!

-(BOOL) setAttributes:(NSDictionary *)attributeDict;
//!Get attributes as a key/value dictionary
//!
-(NSDictionary *) attributes;
//!Get a XML representation of this class
//!returns nil if not all required fields are set
//!
-(NSString *) XML;
//!Get a string representation of this class
//!
-(NSString *) stringValue;
-(NSString *) stringValueWithLead:(NSString *) lead;
//!Helper routine to encode any string to an XML escaped string
//!
-(NSString *) encode: (NSString *) input;

@end


