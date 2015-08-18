/* 
 *  Identifier
 *
 *  Identifier is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Thu Aug 26 11:51:14 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

package ivef;

import java.util.*;
import java.text.DecimalFormat;
import java.text.DateFormat;
import java.text.SimpleDateFormat;

import ivef.OtherId;
import ivef.OtherName;

public class Identifier { 

    private Vector<OtherId> m_otherIds = new Vector<OtherId>();
    private boolean m_otherIdPresent;
    private Vector<OtherName> m_otherNames = new Vector<OtherName>();
    private boolean m_otherNamePresent;
    private String m_callsign; // default value is uninitialized
    private boolean m_callsignPresent;
    private int m_IMO; // default value is uninitialized
    private boolean m_IMOPresent;
    private String m_name; // default value is uninitialized
    private boolean m_namePresent;
    private String m_formerName; // default value is uninitialized
    private boolean m_formerNamePresent;
    private String m_flag; // default value is uninitialized
    private boolean m_flagPresent;
    private String m_owner; // default value is uninitialized
    private boolean m_ownerPresent;
    private int m_MMSI; // default value is uninitialized
    private boolean m_MMSIPresent;
    private String m_LRIT; // default value is uninitialized
    private boolean m_LRITPresent;

    public Identifier() {

        m_otherIdPresent = false;
        m_otherNamePresent = false;
        m_callsignPresent = false;
        m_IMOPresent = false;
        m_namePresent = false;
        m_formerNamePresent = false;
        m_flagPresent = false;
        m_ownerPresent = false;
        m_MMSIPresent = false;
        m_LRITPresent = false;
    }

    public Identifier(Identifier val) {

        for(int i=0; i < val.countOfOtherIds(); i++ ) {
            m_otherIds.add( val.getOtherIdAt(i) );
        }
        for(int i=0; i < val.countOfOtherNames(); i++ ) {
            m_otherNames.add( val.getOtherNameAt(i) );
        }
        m_callsign = val.getCallsign();
        if (val != null) {
            m_callsignPresent = true;
        }
        m_IMO = val.getIMO();
        if (val != null) {
            m_IMOPresent = true;
        }
        m_name = val.getName();
        if (val != null) {
            m_namePresent = true;
        }
        m_formerName = val.getFormerName();
        if (val != null) {
            m_formerNamePresent = true;
        }
        m_flag = val.getFlag();
        if (val != null) {
            m_flagPresent = true;
        }
        m_owner = val.getOwner();
        if (val != null) {
            m_ownerPresent = true;
        }
        m_MMSI = val.getMMSI();
        if (val != null) {
            m_MMSIPresent = true;
        }
        m_LRIT = val.getLRIT();
        if (val != null) {
            m_LRITPresent = true;
        }
    }

    public boolean removeOtherId(OtherId val) {
          if (m_otherIds.size() <= 0) {
              return false; // scalar already at minOccurs
          }

        m_otherIds.remove(val);
          return true;
    }

    public boolean addOtherId(OtherId val) {

        m_otherIds.add(val);
          return true;
    }

    public OtherId getOtherIdAt(int i) {

        return (OtherId) m_otherIds.get(i);
    }

    public int countOfOtherIds() {

        return m_otherIds.size();
    }

    public boolean removeOtherName(OtherName val) {
          if (m_otherNames.size() <= 0) {
              return false; // scalar already at minOccurs
          }

        m_otherNames.remove(val);
          return true;
    }

    public boolean addOtherName(OtherName val) {

        m_otherNames.add(val);
          return true;
    }

    public OtherName getOtherNameAt(int i) {

        return (OtherName) m_otherNames.get(i);
    }

    public int countOfOtherNames() {

        return m_otherNames.size();
    }

    public boolean setCallsign(String val) {

        if (val.length() < 0)
          return false;
        if (val.length() > 9)
          return false;
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

    public boolean setName(String val) {

        if (val.length() < 1)
          return false;
        if (val.length() > 42)
          return false;
        m_namePresent = true;
        m_name = val;
          return true;
    }

    public String getName() {

        return m_name;
    }

    public boolean hasName() {

        return m_namePresent;
    }

    public boolean setFormerName(String val) {

        if (val.length() < 1)
          return false;
        if (val.length() > 42)
          return false;
        m_formerNamePresent = true;
        m_formerName = val;
          return true;
    }

    public String getFormerName() {

        return m_formerName;
    }

    public boolean hasFormerName() {

        return m_formerNamePresent;
    }

    public boolean setFlag(String val) {

        if (val.length() < 2)
          return false;
        if (val.length() > 2)
          return false;
        m_flagPresent = true;
        m_flag = val;
          return true;
    }

    public String getFlag() {

        return m_flag;
    }

    public boolean hasFlag() {

        return m_flagPresent;
    }

    public boolean setOwner(String val) {

        if (val.length() < 1)
          return false;
        if (val.length() > 42)
          return false;
        m_ownerPresent = true;
        m_owner = val;
          return true;
    }

    public String getOwner() {

        return m_owner;
    }

    public boolean hasOwner() {

        return m_ownerPresent;
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

    public boolean setLRIT(String val) {

        if (val.length() < 1)
          return false;
        if (val.length() > 42)
          return false;
        m_LRITPresent = true;
        m_LRIT = val;
          return true;
    }

    public String getLRIT() {

        return m_LRIT;
    }

    public boolean hasLRIT() {

        return m_LRITPresent;
    }

    public String toXML() {

        String xml = "<Identifier";
        String dataMember;        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        DecimalFormat nf = new DecimalFormat("0.000000");

        if ( hasCallsign() ) {
            xml += " Callsign=\"" + encode( m_callsign) + "\"";
        }
        if ( hasIMO() ) {
            xml += " IMO=\"" + m_IMO + "\"";
        }
        if ( hasName() ) {
            xml += " Name=\"" + encode( m_name) + "\"";
        }
        if ( hasFormerName() ) {
            xml += " FormerName=\"" + encode( m_formerName) + "\"";
        }
        if ( hasFlag() ) {
            xml += " Flag=\"" + encode( m_flag) + "\"";
        }
        if ( hasOwner() ) {
            xml += " Owner=\"" + encode( m_owner) + "\"";
        }
        if ( hasMMSI() ) {
            xml += " MMSI=\"" + m_MMSI + "\"";
        }
        if ( hasLRIT() ) {
            xml += " LRIT=\"" + encode( m_LRIT) + "\"";
        }
        xml += ">\n";
        if (m_otherIds.size() < 0) {
            return null; // not enough values
        }
        if (m_otherIds.size() < 0) {
            return null; // not enough values
        }
        for(int i=0; i < m_otherIds.size(); i++ ) {
           OtherId attribute = (OtherId) m_otherIds.get(i);
            dataMember = attribute.toXML();
            if (dataMember != null) {
               xml += dataMember;
            } else {
               return null; // not all required data members have been set 
            } 
        } 
        if (m_otherNames.size() < 0) {
            return null; // not enough values
        }
        if (m_otherNames.size() < 0) {
            return null; // not enough values
        }
        for(int i=0; i < m_otherNames.size(); i++ ) {
           OtherName attribute = (OtherName) m_otherNames.get(i);
            dataMember = attribute.toXML();
            if (dataMember != null) {
               xml += dataMember;
            } else {
               return null; // not all required data members have been set 
            } 
        } 
        xml += "</Identifier>\n";
        return xml;
    }

    public String toString(String lead) {

        String str = lead + "Identifier\n";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        DecimalFormat nf = new DecimalFormat("0.000000");

        if ( hasCallsign() ) {
            str +=  lead + "    Callsign = " + m_callsign + "\n";
        }
        if ( hasIMO() ) {
            str +=  lead + "    IMO = " + m_IMO + "\n";
        }
        if ( hasName() ) {
            str +=  lead + "    Name = " + m_name + "\n";
        }
        if ( hasFormerName() ) {
            str +=  lead + "    FormerName = " + m_formerName + "\n";
        }
        if ( hasFlag() ) {
            str +=  lead + "    Flag = " + m_flag + "\n";
        }
        if ( hasOwner() ) {
            str +=  lead + "    Owner = " + m_owner + "\n";
        }
        if ( hasMMSI() ) {
            str +=  lead + "    MMSI = " + m_MMSI + "\n";
        }
        if ( hasLRIT() ) {
            str +=  lead + "    LRIT = " + m_LRIT + "\n";
        }
        for(int i=0; i < m_otherIds.size(); i++ ) {
           OtherId attribute = (OtherId) m_otherIds.get(i);
           str += attribute.toString(lead + "    ");
        }
        for(int i=0; i < m_otherNames.size(); i++ ) {
           OtherName attribute = (OtherName) m_otherNames.get(i);
           str += attribute.toString(lead + "    ");
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