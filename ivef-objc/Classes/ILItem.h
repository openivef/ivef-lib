/* 
 *  ILItem
 *
 *  ILItem is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Fri Mar 26 13:53:32 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#import <Foundation/Foundation.h>

//-----------------------------------------------------------
//! \brief       Class definition of ILItem
//!
//! 
//!

@interface ILItem : NSObject { 
    int m_dataSelector;
    NSString *m_fieldSelector;
}


/* DataSelector:
   Describes requested Object data element, possible values:
   1 = TrackData
   2 = VesselData
   3 = VoyageData */
//!Setter for DataSelector
//!
-(void) setDataSelector:(int) val;
//!Getter for DataSelector
//!
-(int) dataSelector;

/* FieldSelector:
   Selected field. Can be 'all' or one of the items of object data TrackData, VesselData  or VoyageData, to be changed into an enumeration of strings once these have been fixed */
//!Setter for FieldSelector
//!
-(void) setFieldSelector:(NSString *) val;
//!Getter for FieldSelector
//!
-(NSString *) fieldSelector;
//!Set attributes by providing a key/value dictionary
//!

-(void) setAttributes:(NSDictionary *)attributeDict;
//!Get attributes as a key/value dictionary
//!
-(NSDictionary *) attributes;
//!Get a XML representation of this class
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



