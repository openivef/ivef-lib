/* 
 *  ObjectData
 *
 *  ObjectData is free software: you can redistribute it and/or modify
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

import ivef.TrackData;
import ivef.VesselData;
import ivef.VoyageData;
import ivef.TaggedItem;

public class ObjectData { 

    private TrackData m_trackData; // default value is uninitialized
    private boolean m_trackDataPresent;
    private Vector<VesselData> m_vesselDatas = new Vector<VesselData>();
    private boolean m_vesselDataPresent;
    private Vector<VoyageData> m_voyageDatas = new Vector<VoyageData>();
    private boolean m_voyageDataPresent;
    private Vector<TaggedItem> m_taggedItems = new Vector<TaggedItem>();
    private boolean m_taggedItemPresent;

    public ObjectData() {

        m_trackDataPresent = false;
        m_vesselDataPresent = false;
        m_voyageDataPresent = false;
        m_taggedItemPresent = false;
    }

    public ObjectData(ObjectData val) {

        m_trackData = val.getTrackData();
        if (val != null) {
            m_trackDataPresent = true;
        }
        for(int i=0; i < val.countOfVesselDatas(); i++ ) {
            m_vesselDatas.add( val.getVesselDataAt(i) );
        }
        for(int i=0; i < val.countOfVoyageDatas(); i++ ) {
            m_voyageDatas.add( val.getVoyageDataAt(i) );
        }
        for(int i=0; i < val.countOfTaggedItems(); i++ ) {
            m_taggedItems.add( val.getTaggedItemAt(i) );
        }
    }

    public boolean setTrackData(TrackData val) {

        m_trackDataPresent = true;
        m_trackData = val;
          return true;
    }

    public TrackData getTrackData() {

        return m_trackData;
    }

    public boolean hasTrackData() {

        return m_trackDataPresent;
    }

    public boolean removeVesselData(VesselData val) {
          if (m_vesselDatas.size() <= 0) {
              return false; // scalar already at minOccurs
          }

        m_vesselDatas.remove(val);
          return true;
    }

    public boolean addVesselData(VesselData val) {

        m_vesselDatas.add(val);
          return true;
    }

    public VesselData getVesselDataAt(int i) {

        return (VesselData) m_vesselDatas.get(i);
    }

    public int countOfVesselDatas() {

        return m_vesselDatas.size();
    }

    public boolean removeVoyageData(VoyageData val) {
          if (m_voyageDatas.size() <= 0) {
              return false; // scalar already at minOccurs
          }

        m_voyageDatas.remove(val);
          return true;
    }

    public boolean addVoyageData(VoyageData val) {

        m_voyageDatas.add(val);
          return true;
    }

    public VoyageData getVoyageDataAt(int i) {

        return (VoyageData) m_voyageDatas.get(i);
    }

    public int countOfVoyageDatas() {

        return m_voyageDatas.size();
    }

    public boolean removeTaggedItem(TaggedItem val) {
          if (m_taggedItems.size() <= 0) {
              return false; // scalar already at minOccurs
          }

        m_taggedItems.remove(val);
          return true;
    }

    public boolean addTaggedItem(TaggedItem val) {

        m_taggedItems.add(val);
          return true;
    }

    public TaggedItem getTaggedItemAt(int i) {

        return (TaggedItem) m_taggedItems.get(i);
    }

    public int countOfTaggedItems() {

        return m_taggedItems.size();
    }

    public String toXML() {

        String xml = "<ObjectData";
        String dataMember;        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        DecimalFormat nf = new DecimalFormat("0.000000");

        xml += ">\n";
        if ( hasTrackData() ) {
            dataMember =  m_trackData.toXML() ;
            if (dataMember != null) {
               xml += dataMember;
            } else {
               return null; // not all required data members have been set 
            } 
        } 
        if (m_vesselDatas.size() < 0) {
            return null; // not enough values
        }
        if (m_vesselDatas.size() < 0) {
            return null; // not enough values
        }
        for(int i=0; i < m_vesselDatas.size(); i++ ) {
           VesselData attribute = (VesselData) m_vesselDatas.get(i);
            dataMember = attribute.toXML();
            if (dataMember != null) {
               xml += dataMember;
            } else {
               return null; // not all required data members have been set 
            } 
        } 
        if (m_voyageDatas.size() < 0) {
            return null; // not enough values
        }
        if (m_voyageDatas.size() < 0) {
            return null; // not enough values
        }
        for(int i=0; i < m_voyageDatas.size(); i++ ) {
           VoyageData attribute = (VoyageData) m_voyageDatas.get(i);
            dataMember = attribute.toXML();
            if (dataMember != null) {
               xml += dataMember;
            } else {
               return null; // not all required data members have been set 
            } 
        } 
        if (m_taggedItems.size() < 0) {
            return null; // not enough values
        }
        if (m_taggedItems.size() < 0) {
            return null; // not enough values
        }
        for(int i=0; i < m_taggedItems.size(); i++ ) {
           TaggedItem attribute = (TaggedItem) m_taggedItems.get(i);
            dataMember = attribute.toXML();
            if (dataMember != null) {
               xml += dataMember;
            } else {
               return null; // not all required data members have been set 
            } 
        } 
        xml += "</ObjectData>\n";
        return xml;
    }

    public String toString(String lead) {

        String str = lead + "ObjectData\n";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        DecimalFormat nf = new DecimalFormat("0.000000");

        if ( hasTrackData() ) {
            str +=  m_trackData.toString(lead + "    ") ;
        }
        for(int i=0; i < m_vesselDatas.size(); i++ ) {
           VesselData attribute = (VesselData) m_vesselDatas.get(i);
           str += attribute.toString(lead + "    ");
        }
        for(int i=0; i < m_voyageDatas.size(); i++ ) {
           VoyageData attribute = (VoyageData) m_voyageDatas.get(i);
           str += attribute.toString(lead + "    ");
        }
        for(int i=0; i < m_taggedItems.size(); i++ ) {
           TaggedItem attribute = (TaggedItem) m_taggedItems.get(i);
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
