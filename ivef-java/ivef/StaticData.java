/* 
 *  StaticData
 *
 *  StaticData is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Mon Apr 26 16:22:01 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

package ivef;

import java.util.*;
import java.text.DecimalFormat;
import java.text.DateFormat;
import java.text.SimpleDateFormat;


public class StaticData { 

    private String m_id; // default value is uninitialized
    private boolean m_idPresent;
    private String m_sourceName; // default value is uninitialized
    private boolean m_sourceNamePresent;
    private int m_source; // default value is uninitialized
    private boolean m_sourcePresent;
    private double m_length; // default value is uninitialized
    private boolean m_lengthPresent;
    private double m_breadth; // default value is uninitialized
    private boolean m_breadthPresent;
    private String m_callsign; // default value is uninitialized
    private boolean m_callsignPresent;
    private String m_shipName; // default value is uninitialized
    private boolean m_shipNamePresent;
    private int m_objectType; // default value is uninitialized
    private boolean m_objectTypePresent;
    private int m_shipType; // default value is uninitialized
    private boolean m_shipTypePresent;
    private int m_IMO; // default value is uninitialized
    private boolean m_IMOPresent;
    private int m_MMSI; // default value is uninitialized
    private boolean m_MMSIPresent;
    private int m_ATONType; // default value is uninitialized
    private boolean m_ATONTypePresent;
    private String m_ATONName; // default value is uninitialized
    private boolean m_ATONNamePresent;
    private double m_antPosDistFromFront; // default value is uninitialized
    private boolean m_antPosDistFromFrontPresent;
    private double m_antPosDistFromLeft; // default value is uninitialized
    private boolean m_antPosDistFromLeftPresent;
    private String m_natLangShipName; // default value is uninitialized
    private boolean m_natLangShipNamePresent;
    private String m_portOfRegistry; // default value is uninitialized
    private boolean m_portOfRegistryPresent;
    private String m_countryFlag; // default value is uninitialized
    private boolean m_countryFlagPresent;
    private double m_maxAirDraught; // default value is uninitialized
    private boolean m_maxAirDraughtPresent;
    private double m_maxDraught; // default value is uninitialized
    private boolean m_maxDraughtPresent;
    private String m_deepWaterVesselind; // default value is uninitialized
    private boolean m_deepWaterVesselindPresent;

    public StaticData() {

        m_idPresent = false;
        m_sourceNamePresent = false;
        m_sourcePresent = false;
        m_lengthPresent = false;
        m_breadthPresent = false;
        m_callsignPresent = false;
        m_shipNamePresent = false;
        m_objectTypePresent = false;
        m_shipTypePresent = false;
        m_IMOPresent = false;
        m_MMSIPresent = false;
        m_ATONTypePresent = false;
        m_ATONNamePresent = false;
        m_antPosDistFromFrontPresent = false;
        m_antPosDistFromLeftPresent = false;
        m_natLangShipNamePresent = false;
        m_portOfRegistryPresent = false;
        m_countryFlagPresent = false;
        m_maxAirDraughtPresent = false;
        m_maxDraughtPresent = false;
        m_deepWaterVesselindPresent = false;
    }

    public StaticData(StaticData val) {

        m_id = val.getId();
        if (val != null) {
            m_idPresent = true;
        }
        m_sourceName = val.getSourceName();
        if (val != null) {
            m_sourceNamePresent = true;
        }
        m_source = val.getSource();
        if (val != null) {
            m_sourcePresent = true;
        }
        m_length = val.getLength();
        if (val != null) {
            m_lengthPresent = true;
        }
        m_breadth = val.getBreadth();
        if (val != null) {
            m_breadthPresent = true;
        }
        m_callsign = val.getCallsign();
        if (val != null) {
            m_callsignPresent = true;
        }
        m_shipName = val.getShipName();
        if (val != null) {
            m_shipNamePresent = true;
        }
        m_objectType = val.getObjectType();
        if (val != null) {
            m_objectTypePresent = true;
        }
        m_shipType = val.getShipType();
        if (val != null) {
            m_shipTypePresent = true;
        }
        m_IMO = val.getIMO();
        if (val != null) {
            m_IMOPresent = true;
        }
        m_MMSI = val.getMMSI();
        if (val != null) {
            m_MMSIPresent = true;
        }
        m_ATONType = val.getATONType();
        if (val != null) {
            m_ATONTypePresent = true;
        }
        m_ATONName = val.getATONName();
        if (val != null) {
            m_ATONNamePresent = true;
        }
        m_antPosDistFromFront = val.getAntPosDistFromFront();
        if (val != null) {
            m_antPosDistFromFrontPresent = true;
        }
        m_antPosDistFromLeft = val.getAntPosDistFromLeft();
        if (val != null) {
            m_antPosDistFromLeftPresent = true;
        }
        m_natLangShipName = val.getNatLangShipName();
        if (val != null) {
            m_natLangShipNamePresent = true;
        }
        m_portOfRegistry = val.getPortOfRegistry();
        if (val != null) {
            m_portOfRegistryPresent = true;
        }
        m_countryFlag = val.getCountryFlag();
        if (val != null) {
            m_countryFlagPresent = true;
        }
        m_maxAirDraught = val.getMaxAirDraught();
        if (val != null) {
            m_maxAirDraughtPresent = true;
        }
        m_maxDraught = val.getMaxDraught();
        if (val != null) {
            m_maxDraughtPresent = true;
        }
        m_deepWaterVesselind = val.getDeepWaterVesselind();
        if (val != null) {
            m_deepWaterVesselindPresent = true;
        }
    }

    public boolean setId(String val) {

        m_idPresent = true;
        m_id = val;
          return true;
    }

    public String getId() {

        return m_id;
    }

    public boolean setSourceName(String val) {

        m_sourceNamePresent = true;
        m_sourceName = val;
          return true;
    }

    public String getSourceName() {

        return m_sourceName;
    }

    public boolean setSource(int val) {

        if ( ( val != 1 ) &&
             ( val != 2 ) &&
             ( val != 3 ) )
            return false;
        m_sourcePresent = true;
        m_source = val;
          return true;
    }

    public int getSource() {

        return m_source;
    }

    public boolean setLength(double val) {

        if (val < 0)
          return false;
        m_lengthPresent = true;
        m_length = val;
          return true;
    }

    public double getLength() {

        return m_length;
    }

    public boolean hasLength() {

        return m_lengthPresent;
    }

    public boolean setBreadth(double val) {

        if (val < 0)
          return false;
        m_breadthPresent = true;
        m_breadth = val;
          return true;
    }

    public double getBreadth() {

        return m_breadth;
    }

    public boolean hasBreadth() {

        return m_breadthPresent;
    }

    public boolean setCallsign(String val) {

        m_callsignPresent = true;
        m_callsign = val;
          return true;
    }

    public String getCallsign() {

        return m_callsign;
    }

    public boolean hasCallsign() {

        return m_callsignPresent;
    }

    public boolean setShipName(String val) {

        m_shipNamePresent = true;
        m_shipName = val;
          return true;
    }

    public String getShipName() {

        return m_shipName;
    }

    public boolean hasShipName() {

        return m_shipNamePresent;
    }

    public boolean setObjectType(int val) {

        if ( ( val != 1 ) &&
             ( val != 2 ) &&
             ( val != 3 ) &&
             ( val != 4 ) &&
             ( val != 5 ) &&
             ( val != 6 ) &&
             ( val != 7 ) )
            return false;
        m_objectTypePresent = true;
        m_objectType = val;
          return true;
    }

    public int getObjectType() {

        return m_objectType;
    }

    public boolean hasObjectType() {

        return m_objectTypePresent;
    }

    public boolean setShipType(int val) {

        if ( ( val != 20 ) &&
             ( val != 30 ) &&
             ( val != 31 ) &&
             ( val != 32 ) &&
             ( val != 33 ) &&
             ( val != 34 ) &&
             ( val != 35 ) &&
             ( val != 36 ) &&
             ( val != 37 ) &&
             ( val != 40 ) &&
             ( val != 50 ) &&
             ( val != 51 ) &&
             ( val != 52 ) &&
             ( val != 53 ) &&
             ( val != 54 ) &&
             ( val != 55 ) &&
             ( val != 58 ) &&
             ( val != 59 ) &&
             ( val != 60 ) &&
             ( val != 70 ) &&
             ( val != 80 ) &&
             ( val != 90 ) )
            return false;
        m_shipTypePresent = true;
        m_shipType = val;
          return true;
    }

    public int getShipType() {

        return m_shipType;
    }

    public boolean hasShipType() {

        return m_shipTypePresent;
    }

    public boolean setIMO(int val) {

        m_IMOPresent = true;
        m_IMO = val;
          return true;
    }

    public int getIMO() {

        return m_IMO;
    }

    public boolean hasIMO() {

        return m_IMOPresent;
    }

    public boolean setMMSI(int val) {

        m_MMSIPresent = true;
        m_MMSI = val;
          return true;
    }

    public int getMMSI() {

        return m_MMSI;
    }

    public boolean hasMMSI() {

        return m_MMSIPresent;
    }

    public boolean setATONType(int val) {

        if ( ( val != 0 ) &&
             ( val != 1 ) &&
             ( val != 2 ) &&
             ( val != 3 ) &&
             ( val != 5 ) &&
             ( val != 6 ) &&
             ( val != 7 ) &&
             ( val != 8 ) &&
             ( val != 9 ) &&
             ( val != 10 ) &&
             ( val != 11 ) &&
             ( val != 12 ) &&
             ( val != 13 ) &&
             ( val != 14 ) &&
             ( val != 15 ) &&
             ( val != 16 ) &&
             ( val != 17 ) &&
             ( val != 18 ) &&
             ( val != 19 ) &&
             ( val != 20 ) &&
             ( val != 21 ) &&
             ( val != 22 ) &&
             ( val != 23 ) &&
             ( val != 24 ) &&
             ( val != 25 ) &&
             ( val != 26 ) &&
             ( val != 27 ) &&
             ( val != 28 ) &&
             ( val != 29 ) &&
             ( val != 30 ) &&
             ( val != 31 ) &&
             ( val != 32 ) &&
             ( val != 33 ) )
            return false;
        m_ATONTypePresent = true;
        m_ATONType = val;
          return true;
    }

    public int getATONType() {

        return m_ATONType;
    }

    public boolean hasATONType() {

        return m_ATONTypePresent;
    }

    public boolean setATONName(String val) {

        m_ATONNamePresent = true;
        m_ATONName = val;
          return true;
    }

    public String getATONName() {

        return m_ATONName;
    }

    public boolean hasATONName() {

        return m_ATONNamePresent;
    }

    public boolean setAntPosDistFromFront(double val) {

        m_antPosDistFromFrontPresent = true;
        m_antPosDistFromFront = val;
          return true;
    }

    public double getAntPosDistFromFront() {

        return m_antPosDistFromFront;
    }

    public boolean hasAntPosDistFromFront() {

        return m_antPosDistFromFrontPresent;
    }

    public boolean setAntPosDistFromLeft(double val) {

        m_antPosDistFromLeftPresent = true;
        m_antPosDistFromLeft = val;
          return true;
    }

    public double getAntPosDistFromLeft() {

        return m_antPosDistFromLeft;
    }

    public boolean hasAntPosDistFromLeft() {

        return m_antPosDistFromLeftPresent;
    }

    public boolean setNatLangShipName(String val) {

        m_natLangShipNamePresent = true;
        m_natLangShipName = val;
          return true;
    }

    public String getNatLangShipName() {

        return m_natLangShipName;
    }

    public boolean hasNatLangShipName() {

        return m_natLangShipNamePresent;
    }

    public boolean setPortOfRegistry(String val) {

        m_portOfRegistryPresent = true;
        m_portOfRegistry = val;
          return true;
    }

    public String getPortOfRegistry() {

        return m_portOfRegistry;
    }

    public boolean hasPortOfRegistry() {

        return m_portOfRegistryPresent;
    }

    public boolean setCountryFlag(String val) {

        m_countryFlagPresent = true;
        m_countryFlag = val;
          return true;
    }

    public String getCountryFlag() {

        return m_countryFlag;
    }

    public boolean hasCountryFlag() {

        return m_countryFlagPresent;
    }

    public boolean setMaxAirDraught(double val) {

        if (val < 0)
          return false;
        m_maxAirDraughtPresent = true;
        m_maxAirDraught = val;
          return true;
    }

    public double getMaxAirDraught() {

        return m_maxAirDraught;
    }

    public boolean hasMaxAirDraught() {

        return m_maxAirDraughtPresent;
    }

    public boolean setMaxDraught(double val) {

        if (val < 0)
          return false;
        m_maxDraughtPresent = true;
        m_maxDraught = val;
          return true;
    }

    public double getMaxDraught() {

        return m_maxDraught;
    }

    public boolean hasMaxDraught() {

        return m_maxDraughtPresent;
    }

    public boolean setDeepWaterVesselind(String val) {

        if ( ( !val.equals("yes") ) &&
             ( !val.equals("no") ) )
            return false;
        m_deepWaterVesselindPresent = true;
        m_deepWaterVesselind = val;
          return true;
    }

    public String getDeepWaterVesselind() {

        return m_deepWaterVesselind;
    }

    public boolean hasDeepWaterVesselind() {

        return m_deepWaterVesselindPresent;
    }

    public String toXML() {

        String xml = "<StaticData";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        DecimalFormat nf = new DecimalFormat("0.000000");

        if ( m_idPresent ) {
            xml += " Id=\"" + encode( m_id) + "\"";
        } else { 
            return null; // not all required attributes have been set 
        } 
        if ( m_sourceNamePresent ) {
            xml += " SourceName=\"" + encode( m_sourceName) + "\"";
        } else { 
            return null; // not all required attributes have been set 
        } 
        if ( m_sourcePresent ) {
            xml += " Source=\"" + m_source + "\"";
        } else { 
            return null; // not all required attributes have been set 
        } 
        if ( hasLength() ) {
            xml += " Length=\"" + nf.format(m_length) + "\"";
        }
        if ( hasBreadth() ) {
            xml += " Breadth=\"" + nf.format(m_breadth) + "\"";
        }
        if ( hasCallsign() ) {
            xml += " Callsign=\"" + encode( m_callsign) + "\"";
        }
        if ( hasShipName() ) {
            xml += " ShipName=\"" + encode( m_shipName) + "\"";
        }
        if ( hasObjectType() ) {
            xml += " ObjectType=\"" + m_objectType + "\"";
        }
        if ( hasShipType() ) {
            xml += " ShipType=\"" + m_shipType + "\"";
        }
        if ( hasIMO() ) {
            xml += " IMO=\"" + m_IMO + "\"";
        }
        if ( hasMMSI() ) {
            xml += " MMSI=\"" + m_MMSI + "\"";
        }
        if ( hasATONType() ) {
            xml += " ATONType=\"" + m_ATONType + "\"";
        }
        if ( hasATONName() ) {
            xml += " ATONName=\"" + encode( m_ATONName) + "\"";
        }
        if ( hasAntPosDistFromFront() ) {
            xml += " AntPosDistFromFront=\"" + nf.format(m_antPosDistFromFront) + "\"";
        }
        if ( hasAntPosDistFromLeft() ) {
            xml += " AntPosDistFromLeft=\"" + nf.format(m_antPosDistFromLeft) + "\"";
        }
        if ( hasNatLangShipName() ) {
            xml += " NatLangShipName=\"" + encode( m_natLangShipName) + "\"";
        }
        if ( hasPortOfRegistry() ) {
            xml += " PortOfRegistry=\"" + encode( m_portOfRegistry) + "\"";
        }
        if ( hasCountryFlag() ) {
            xml += " CountryFlag=\"" + encode( m_countryFlag) + "\"";
        }
        if ( hasMaxAirDraught() ) {
            xml += " MaxAirDraught=\"" + nf.format(m_maxAirDraught) + "\"";
        }
        if ( hasMaxDraught() ) {
            xml += " MaxDraught=\"" + nf.format(m_maxDraught) + "\"";
        }
        if ( hasDeepWaterVesselind() ) {
            xml += " DeepWaterVesselind=\"" + encode( m_deepWaterVesselind) + "\"";
        }
        xml += "/>\n";
        return xml;
    }

    public String toString(String lead) {

        String str = lead + "StaticData\n";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        DecimalFormat nf = new DecimalFormat("0.000000");

        str +=  lead + "    Id = " + m_id + "\n";
        str +=  lead + "    SourceName = " + m_sourceName + "\n";
        str +=  lead + "    Source = " + m_source + "\n";
        if ( hasLength() ) {
            str +=  lead + "    Length = " + nf.format(m_length) + "\n";
        }
        if ( hasBreadth() ) {
            str +=  lead + "    Breadth = " + nf.format(m_breadth) + "\n";
        }
        if ( hasCallsign() ) {
            str +=  lead + "    Callsign = " + m_callsign + "\n";
        }
        if ( hasShipName() ) {
            str +=  lead + "    ShipName = " + m_shipName + "\n";
        }
        if ( hasObjectType() ) {
            str +=  lead + "    ObjectType = " + m_objectType + "\n";
        }
        if ( hasShipType() ) {
            str +=  lead + "    ShipType = " + m_shipType + "\n";
        }
        if ( hasIMO() ) {
            str +=  lead + "    IMO = " + m_IMO + "\n";
        }
        if ( hasMMSI() ) {
            str +=  lead + "    MMSI = " + m_MMSI + "\n";
        }
        if ( hasATONType() ) {
            str +=  lead + "    ATONType = " + m_ATONType + "\n";
        }
        if ( hasATONName() ) {
            str +=  lead + "    ATONName = " + m_ATONName + "\n";
        }
        if ( hasAntPosDistFromFront() ) {
            str +=  lead + "    AntPosDistFromFront = " + nf.format(m_antPosDistFromFront) + "\n";
        }
        if ( hasAntPosDistFromLeft() ) {
            str +=  lead + "    AntPosDistFromLeft = " + nf.format(m_antPosDistFromLeft) + "\n";
        }
        if ( hasNatLangShipName() ) {
            str +=  lead + "    NatLangShipName = " + m_natLangShipName + "\n";
        }
        if ( hasPortOfRegistry() ) {
            str +=  lead + "    PortOfRegistry = " + m_portOfRegistry + "\n";
        }
        if ( hasCountryFlag() ) {
            str +=  lead + "    CountryFlag = " + m_countryFlag + "\n";
        }
        if ( hasMaxAirDraught() ) {
            str +=  lead + "    MaxAirDraught = " + nf.format(m_maxAirDraught) + "\n";
        }
        if ( hasMaxDraught() ) {
            str +=  lead + "    MaxDraught = " + nf.format(m_maxDraught) + "\n";
        }
        if ( hasDeepWaterVesselind() ) {
            str +=  lead + "    DeepWaterVesselind = " + m_deepWaterVesselind + "\n";
        }
        return str;
    }
    public String encode( String str) {

        str = str.replaceAll("&", "&amp;");
        str = str.replaceAll("<", "&lt;");
        str = str.replaceAll(">", "&gt;");
        str = str.replaceAll("\"", "&quot;");
        return str;
    }


}
