/* 
 *  ILVoyageData
 *
 *  ILVoyageData is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Wed Apr 7 16:25:00 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#import <Foundation/Foundation.h>
#import "ILWaypoint.h"

//-----------------------------------------------------------
//! \brief       Class definition of ILVoyageData
//!
//! DATA regarding a movement of a vessel servers domain
//!

@interface ILVoyageData : NSObject { 
    NSMutableArray *m_waypoints;
    float m_airDraught;
    bool m_airDraughtPresent;
    int m_id;
    int m_cargoTypeIMO;
    bool m_cargoTypeIMOPresent;
    NSString *m_contactIdentity;
    bool m_contactIdentityPresent;
    NSString *m_destCode;
    bool m_destCodePresent;
    NSString *m_destName;
    bool m_destNamePresent;
    float m_draught;
    bool m_draughtPresent;
    NSDate *m_ETA;
    bool m_ETAPresent;
    float m_ISPSLevel;
    bool m_ISPSLevelPresent;
    float m_overSizedLength;
    bool m_overSizedLengthPresent;
    float m_overSizedWidth;
    bool m_overSizedWidthPresent;
    NSString *m_nextPort;
    bool m_nextPortPresent;
    float m_personsOnBoard;
    bool m_personsOnBoardPresent;
    float m_pilots;
    bool m_pilotsPresent;
    NSString *m_prevPort;
    bool m_prevPortPresent;
    bool m_routeBound;
    bool m_routeBoundPresent;
    NSString *m_sourceId;
    bool m_sourceIdPresent;
    NSString *m_sourceName;
    int m_sourceType;
    int m_tankerStatus;
    bool m_tankerStatusPresent;
    bool m_tugs;
    bool m_tugsPresent;
    NSDate *m_updateTime;
}


/* Waypoint:
   Waypoint belonging to the route of this voyage */
//!Setter for Waypoint
//!
-(void) addWaypoint:(ILWaypoint *) val;
//!Getter for Waypoint
//!
-(ILWaypoint *) waypointAt:(int) i;
//!Element counter for Waypoint
//!
-(int) countOfWaypoints;
//!Get all elements for Waypoint
//!
-(NSArray *) waypoints;

/* AirDraught:
   Actual air draught of the vessel in meters */
//!Setter for AirDraught
//!
-(void) setAirDraught:(float) val;
//!Getter for AirDraught
//!
-(float) airDraught;
//!Test for pressence of AirDraught
//!
-(bool) hasAirDraught;

/* Id:
   The unique identification of this voyagedata. Valid from first message with TrackStatus!=Terminated to first message with TrackStatus=Terminated */
//!Setter for Id
//!
-(void) setIdent:(int) val;
//!Getter for Id
//!
-(int) ident;

/* CargoTypeIMO:
   0 = All ships of this type
   1 = Carrying DG, HS, or MP, IMO hazard or pollutant category A
   2 = Carrying DG, HS, or MP, IMO hazard or pollutant category B
   3 = Carrying DG, HS, or MP, IMO hazard or pollutant category C
   4 = Carrying DG, HS, or MP, IMO hazard or pollutant category D
   5 = Carrying DG, HS, or MP, IMO hazard or pollutant of unknown category */
//!Setter for CargoTypeIMO
//!
-(void) setCargoTypeIMO:(int) val;
//!Getter for CargoTypeIMO
//!
-(int) cargoTypeIMO;
//!Test for pressence of CargoTypeIMO
//!
-(bool) hasCargoTypeIMO;

/* ContactIdentity:
   reference to the identity associated with this objects voyage */
//!Setter for ContactIdentity
//!
-(void) setContactIdentity:(NSString *) val;
//!Getter for ContactIdentity
//!
-(NSString *) contactIdentity;
//!Test for pressence of ContactIdentity
//!
-(bool) hasContactIdentity;

/* DestCode:
   Destination of the target (UN/LOCODE)  optionally addended with local location code (e.g. BEANR0170100497 = Antwerp, HANSADOK 497) */
//!Setter for DestCode
//!
-(void) setDestCode:(NSString *) val;
//!Getter for DestCode
//!
-(NSString *) destCode;
//!Test for pressence of DestCode
//!
-(bool) hasDestCode;

/* DestName:
   Destination name of the target e.g. local code for berth/lock/bridge/terminal */
//!Setter for DestName
//!
-(void) setDestName:(NSString *) val;
//!Getter for DestName
//!
-(NSString *) destName;
//!Test for pressence of DestName
//!
-(bool) hasDestName;

/* Draught:
   Actual draught of the vessel in meters */
//!Setter for Draught
//!
-(void) setDraught:(float) val;
//!Getter for Draught
//!
-(float) draught;
//!Test for pressence of Draught
//!
-(bool) hasDraught;

/* ETA:
   Date and time in (subset of ISO 8601) UTC format (YYYY-MM-DDThh:mm:ss.sssZ) of the Expected Time Of Arrival of the target at the destination */
//!Setter for ETA
//!
-(void) setETA:(NSDate *) val;
//!Getter for ETA
//!
-(NSDate *) ETA;
//!Test for pressence of ETA
//!
-(bool) hasETA;

/* ISPSLevel:
   The ISPS level of the object (1 = normal, 2 = heightended, 3 = exceptional) */
//!Setter for ISPSLevel
//!
-(void) setISPSLevel:(float) val;
//!Getter for ISPSLevel
//!
-(float) ISPSLevel;
//!Test for pressence of ISPSLevel
//!
-(bool) hasISPSLevel;

/* OverSizedLength:
   Length of the target in meter as confirmed by NCA, in case of a convoy of barges */
//!Setter for OverSizedLength
//!
-(void) setOverSizedLength:(float) val;
//!Getter for OverSizedLength
//!
-(float) overSizedLength;
//!Test for pressence of OverSizedLength
//!
-(bool) hasOverSizedLength;

/* OverSizedWidth:
   Width of the target in meter as confirmed by the NCA, in case of a convoy of barges */
//!Setter for OverSizedWidth
//!
-(void) setOverSizedWidth:(float) val;
//!Getter for OverSizedWidth
//!
-(float) overSizedWidth;
//!Test for pressence of OverSizedWidth
//!
-(bool) hasOverSizedWidth;

/* NextPort:
   Next port of the target (UN/LOCODE) */
//!Setter for NextPort
//!
-(void) setNextPort:(NSString *) val;
//!Getter for NextPort
//!
-(NSString *) nextPort;
//!Test for pressence of NextPort
//!
-(bool) hasNextPort;

/* PersonsOnBoard:
   The number of persons on board of the object, should equal the sum of crew, passengers and support personel if available */
//!Setter for PersonsOnBoard
//!
-(void) setPersonsOnBoard:(float) val;
//!Getter for PersonsOnBoard
//!
-(float) personsOnBoard;
//!Test for pressence of PersonsOnBoard
//!
-(bool) hasPersonsOnBoard;

/* Pilots:
   Pilot status
   0 = unknown
   1 = pilot on board
   2 = object under remote pilotage
   3 = pilot required */
//!Setter for Pilots
//!
-(void) setPilots:(float) val;
//!Getter for Pilots
//!
-(float) pilots;
//!Test for pressence of Pilots
//!
-(bool) hasPilots;

/* PrevPort:
   Previous port of the target (UN/LOCODE) */
//!Setter for PrevPort
//!
-(void) setPrevPort:(NSString *) val;
//!Getter for PrevPort
//!
-(NSString *) prevPort;
//!Test for pressence of PrevPort
//!
-(bool) hasPrevPort;

/* RouteBound:
   This object is bound to the route of this voyage */
//!Setter for RouteBound
//!
-(void) setRouteBound:(bool) val;
//!Getter for RouteBound
//!
-(bool) routeBound;
//!Test for pressence of RouteBound
//!
-(bool) hasRouteBound;

/* SourceId:
   Unique identification of the producer  (UN/LOCODE)  in case multiple producers exist on the same LOCODE, the local competent authority can optionally addended this with a local  code (e.g. BE ANR 01 = Antwerp, 01) */
//!Setter for SourceId
//!
-(void) setSourceId:(NSString *) val;
//!Getter for SourceId
//!
-(NSString *) sourceId;
//!Test for pressence of SourceId
//!
-(bool) hasSourceId;

/* SourceName:
   Identification of the originator of this data */
//!Setter for SourceName
//!
-(void) setSourceName:(NSString *) val;
//!Getter for SourceName
//!
-(NSString *) sourceName;

/* SourceType:
   Source/originator type: 0 = unknown, 1 = transponder, 2 = database, 3 = manual, 4 =  fused */
//!Setter for SourceType
//!
-(void) setSourceType:(int) val;
//!Getter for SourceType
//!
-(int) sourceType;

/* TankerStatus:
   Describes the status of the tanker
   0 = Non gas free
   1 = Gas free
   2 = Inert */
//!Setter for TankerStatus
//!
-(void) setTankerStatus:(int) val;
//!Getter for TankerStatus
//!
-(int) tankerStatus;
//!Test for pressence of TankerStatus
//!
-(bool) hasTankerStatus;

/* Tugs:
   Object uses tugs */
//!Setter for Tugs
//!
-(void) setTugs:(bool) val;
//!Getter for Tugs
//!
-(bool) tugs;
//!Test for pressence of Tugs
//!
-(bool) hasTugs;

/* UpdateTime:
   Date and time in (subset of ISO 8601) UTC format (YYYY-MM-DDThh:mm:ss.sssZ)  this data was compiled */
//!Setter for UpdateTime
//!
-(void) setUpdateTime:(NSDate *) val;
//!Getter for UpdateTime
//!
-(NSDate *) updateTime;
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



