/* 
 *  Pos
 *
 *  Pos is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Tue May 18 14:11:31 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

package ivef;

import java.util.*;
import java.text.DecimalFormat;
import java.text.DateFormat;
import java.text.SimpleDateFormat;


public class Pos { 

    private double m_lat; // default value is uninitialized
    private boolean m_latPresent;
    private double m_long; // default value is uninitialized
    private boolean m_longPresent;

    public Pos() {

        m_latPresent = false;
        m_longPresent = false;
    }

    public Pos(Pos val) {

        m_lat = val.getLat();
        if (val != null) {
            m_latPresent = true;
        }
        m_long = val.getLong();
        if (val != null) {
            m_longPresent = true;
        }
    }

    public boolean setLat(double val) {

        if (val < -90)
          return false;
        if (val > 90)
          return false;
        m_latPresent = true;
        m_lat = val;
          return true;
    }

    public double getLat() {

        return m_lat;
    }

    public boolean setLong(double val) {

        if (val < -180)
          return false;
        if (val > 180)
          return false;
        m_longPresent = true;
        m_long = val;
          return true;
    }

    public double getLong() {

        return m_long;
    }

    public String toXML() {

        String xml = "<Pos";
        String dataMember;        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        DecimalFormat nf = new DecimalFormat("0.000000");

        if ( m_latPresent ) {
            xml += " Lat=\"" + nf.format(m_lat) + "\"";
        } else { 
            return null; // not all required attributes have been set 
        } 
        if ( m_longPresent ) {
            xml += " Long=\"" + nf.format(m_long) + "\"";
        } else { 
            return null; // not all required attributes have been set 
        } 
        xml += "/>\n";
        return xml;
    }

    public String toString(String lead) {

        String str = lead + "Pos\n";
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        DecimalFormat nf = new DecimalFormat("0.000000");

            str +=  lead + "    Lat = " + nf.format(m_lat) + "\n";
            str +=  lead + "    Long = " + nf.format(m_long) + "\n";
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
