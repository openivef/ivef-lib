/* 
 *  ILOtherName
 *
 *  ILOtherName is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Thu Aug 26 11:50:38 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#import <Foundation/Foundation.h>

//-----------------------------------------------------------
//! \brief       Class definition of ILOtherName
//!
//! Other names for the track than the English name
//!

@interface ILOtherName : NSObject { 
    NSString *m_lang;
    BOOL m_langPresent;
    NSString *m_name;
    BOOL m_namePresent;
}


/* Lang:
   Languange  (ISO 3166-1-alpha2) */
//!Setter for Lang
//!
-(BOOL) setLang:(NSString *) val;
//!Getter for Lang
//!
-(NSString *) lang;

/* Name:
   Name in the foreign language */
//!Setter for Name
//!
-(BOOL) setName:(NSString *) val;
//!Getter for Name
//!
-(NSString *) name;
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


