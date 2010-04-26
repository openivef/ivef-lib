/* 
 *  Sensor
 *
 *  Sensor is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Mon Apr 26 22:11:34 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

package ivef;

import java.util.*;
import java.text.DecimalFormat;
import java.text.DateFormat;
import java.text.SimpleDateFormat;


public class Sensor { 

    private int m_senId; // default value is uninitialized
    private boolean m_senIdPresent;
    private int m_trkId; // default value is uninitialized
    private boolean m_trkIdPresent;

    public Sensor() {

        m_senIdPresent = false;
        m_trkIdPresent = false;
    }

    public Sensor(Sensor val) {

        m_senId = val.getSenId();
        if (val != null) {
            m_senIdPresent = true;
        }
        m_trkId = val.getTrkId();
        if (val != null) {
            m_trkIdPresent = true;
        }
    }

    public boolean setSenId(int val) {

        if (val < 0)
          return false;
        if (val > 65536)
          return false;
        m_senIdPresent = true;
        m_senId = val;
          return true;
    }

    public int getSenId() {

        return m_senId;
    }

    public boolean setTrkId(int val) {

        if (val < 0)
          return false;
        if (val > 65536)
          return false;
        m_trkIdPresent = true;
        m_trkId = val;
          return true;
    }

    public int getTrkId() {

        return m_trkId;
    }

    public String toXML() {

        String xml = "<Sensor";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        DecimalFormat nf = new DecimalFormat("0.000000");

        if ( m_senIdPresent ) {
            xml += " SenId=\"" + m_senId + "\"";
        } else { 
            return null; // not all required attributes have been set 
        } 
        if ( m_trkIdPresent ) {
            xml += " TrkId=\"" + m_trkId + "\"";
        } else { 
            return null; // not all required attributes have been set 
        } 
        xml += "/>\n";
        return xml;
    }

    public String toString(String lead) {

        String str = lead + "Sensor\n";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        DecimalFormat nf = new DecimalFormat("0.000000");

        str +=  lead + "    SenId = " + m_senId + "\n";
        str +=  lead + "    TrkId = " + m_trkId + "\n";
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
