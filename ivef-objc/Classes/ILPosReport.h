/* 
 *  ILPosReport
 *
 *  ILPosReport is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Wed Apr 7 16:24:49 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#import <Foundation/Foundation.h>
#import "ILPos.h"
#import "ILSensor.h"

//-----------------------------------------------------------
//! \brief       Class definition of ILPosReport
//!
//! DATA describing a position report of an object
//!

@interface ILPosReport : NSObject { 
    ILPos *m_pos;
    NSMutableArray *m_sensors;
    int m_id;
    int m_sourceId;
    NSDate *m_updateTime;
    NSDate *m_updateTimeRadar;
    bool m_updateTimeRadarPresent;
    NSDate *m_updateTimeAIS;
    bool m_updateTimeAISPresent;
    NSDate *m_updateTimeDR;
    bool m_updateTimeDRPresent;
    float m_SOG;
    float m_COG;
    NSString *m_lost;
    float m_rateOfTurn;
    bool m_rateOfTurnPresent;
    float m_orientation;
    bool m_orientationPresent;
    float m_length;
    bool m_lengthPresent;
    float m_breadth;
    bool m_breadthPresent;
    float m_altitude;
    bool m_altitudePresent;
    int m_navStatus;
    bool m_navStatusPresent;
    int m_updSensorType;
    bool m_updSensorTypePresent;
    bool m_ATONOffPos;
    bool m_ATONOffPosPresent;
}

//!Setter for Pos
//!
-(void) setPos:(ILPos *) val;
//!Getter for Pos
//!
-(ILPos *) pos;

/* Sensor:
   Sensors contributing to this postion report (for the purpose of analysis) */
//!Setter for Sensor
//!
-(void) addSensor:(ILSensor *) val;
//!Getter for Sensor
//!
-(ILSensor *) sensorAt:(int) i;
//!Element counter for Sensor
//!
-(int) countOfSensors;
//!Get all elements for Sensor
//!
-(NSArray *) sensors;

/* Id:
   The identification of this track */
//!Setter for Id
//!
-(void) setIdent:(int) val;
//!Getter for Id
//!
-(int) ident;

/* SourceId:
   The identification of the node who initially created this message */
//!Setter for SourceId
//!
-(void) setSourceId:(int) val;
//!Getter for SourceId
//!
-(int) sourceId;

/* UpdateTime:
   Date and time in ISO 8601 UTC format (YYYY-MM-DDThh:mm:ss.sssZ)  this position was measured. */
//!Setter for UpdateTime
//!
-(void) setUpdateTime:(NSDate *) val;
//!Getter for UpdateTime
//!
-(NSDate *) updateTime;

/* UpdateTimeRadar:
   Date and time in ISO 8601 UTC format (YYYY-MM-DDThh:mm:ss.sssZ)  this position was updated by Radar */
//!Setter for UpdateTimeRadar
//!
-(void) setUpdateTimeRadar:(NSDate *) val;
//!Getter for UpdateTimeRadar
//!
-(NSDate *) updateTimeRadar;
//!Test for pressence of UpdateTimeRadar
//!
-(bool) hasUpdateTimeRadar;

/* UpdateTimeAIS:
   Date and time in ISO 8601 UTC format (YYYY-MM-DDThh:mm:ss.sssZ)  this position was updated by AIS */
//!Setter for UpdateTimeAIS
//!
-(void) setUpdateTimeAIS:(NSDate *) val;
//!Getter for UpdateTimeAIS
//!
-(NSDate *) updateTimeAIS;
//!Test for pressence of UpdateTimeAIS
//!
-(bool) hasUpdateTimeAIS;

/* UpdateTimeDR:
   Date and time in ISO 8601 UTC format (YYYY-MM-DDThh:mm:ss.sssZ)  this position was updated by dead reckoning */
//!Setter for UpdateTimeDR
//!
-(void) setUpdateTimeDR:(NSDate *) val;
//!Getter for UpdateTimeDR
//!
-(NSDate *) updateTimeDR;
//!Test for pressence of UpdateTimeDR
//!
-(bool) hasUpdateTimeDR;

/* SOG:
   Speed over ground in meters per second */
//!Setter for SOG
//!
-(void) setSOG:(float) val;
//!Getter for SOG
//!
-(float) SOG;

/* COG:
   Course over ground  in degrees. (0-360) */
//!Setter for COG
//!
-(void) setCOG:(float) val;
//!Getter for COG
//!
-(float) COG;

/* Lost:
   'yes' or 'no' */
//!Setter for Lost
//!
-(void) setLost:(NSString *) val;
//!Getter for Lost
//!
-(NSString *) lost;

/* RateOfTurn:
   Rate of turn in degrees per minute */
//!Setter for RateOfTurn
//!
-(void) setRateOfTurn:(float) val;
//!Getter for RateOfTurn
//!
-(float) rateOfTurn;
//!Test for pressence of RateOfTurn
//!
-(bool) hasRateOfTurn;

/* Orientation:
   Orientation of the target in degrees */
//!Setter for Orientation
//!
-(void) setOrientation:(float) val;
//!Getter for Orientation
//!
-(float) orientation;
//!Test for pressence of Orientation
//!
-(bool) hasOrientation;

/* Length:
   Length of the target in meter */
//!Setter for Length
//!
-(void) setLength:(float) val;
//!Getter for Length
//!
-(float) length;
//!Test for pressence of Length
//!
-(bool) hasLength;

/* Breadth:
   Breadth of the target in  meter */
//!Setter for Breadth
//!
-(void) setBreadth:(float) val;
//!Getter for Breadth
//!
-(float) breadth;
//!Test for pressence of Breadth
//!
-(bool) hasBreadth;

/* Altitude:
   The altitude of the target above the WGS-84 ellipsoid in meters */
//!Setter for Altitude
//!
-(void) setAltitude:(float) val;
//!Getter for Altitude
//!
-(float) altitude;
//!Test for pressence of Altitude
//!
-(bool) hasAltitude;

/* NavStatus:
   Navigation status of the target
   0 = under way using engine
   1 = at anchor
   2 = not under command
   3 = restricted manoeuvrability
   4 = constrained by her draught
   5 = moored
   6 = aground
   7 = engaged in fishing
   8 = under way sailing
   9 - 14 = reserved for future use
   15 = undefined default */
//!Setter for NavStatus
//!
-(void) setNavStatus:(int) val;
//!Getter for NavStatus
//!
-(int) navStatus;
//!Test for pressence of NavStatus
//!
-(bool) hasNavStatus;

/* UpdSensorType:
   Type of detection or track type:
   1 = radar
   2 = ais
   3 = ais+radar
   4 = deadreckoning
   5 = other */
//!Setter for UpdSensorType
//!
-(void) setUpdSensorType:(int) val;
//!Getter for UpdSensorType
//!
-(int) updSensorType;
//!Test for pressence of UpdSensorType
//!
-(bool) hasUpdSensorType;

/* ATONOffPos:
   "1" or "0". Indicates whether or not the ATON is on position or not */
//!Setter for ATONOffPos
//!
-(void) setATONOffPos:(bool) val;
//!Getter for ATONOffPos
//!
-(bool) ATONOffPos;
//!Test for pressence of ATONOffPos
//!
-(bool) hasATONOffPos;
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



