<?php

// 
//  Pong
//
//  Pong is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  Pong is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY ); without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//*********************************************************************************
//  WARNING: THIS CODE WAS GENERATED DO NOT MODIFY, CHANGE THE XSD INSTEAD
//  Generated by xsd2code on Thu Aug 26 11:51:18 2010.
//*********************************************************************************
//  Copyright 2010
//


class Pong { 

    var $m_responseOn; // default value is uninitialized
    var $m_responseOnPresent;
    var $m_sourceId; // default value is uninitialized
    var $m_sourceIdPresent;
    var $m_timeStamp; // default value is uninitialized
    var $m_timeStampPresent;

    public function Pong() {

        date_default_timezone_set('UTC');
        $this->m_responseOnPresent = false;
        $this->m_sourceIdPresent = false;
        $this->m_timeStampPresent = false;
    }

    public function setResponseOn( $val ) {

        if (strlen ($val) < 36)
          return false;
        if (strlen ($val) > 42)
          return false;
        $this->m_responseOnPresent = true;
        $this->m_responseOn = $val;
        return true;
    }

    public function getResponseOn() {

        return $this->m_responseOn;
    }

    public function setSourceId( $val ) {

        $this->m_sourceIdPresent = true;
        $this->m_sourceId = $val;
        return true;
    }

    public function getSourceId() {

        return $this->m_sourceId;
    }

    public function setTimeStamp( $val ) {

        $this->m_timeStampPresent = true;
        $this->m_timeStamp = $val;
        return true;
    }

    public function getTimeStamp() {

        return $this->m_timeStamp;
    }

    public function toXML() {

        $xml = new SimpleXMLElement("<Pong></Pong>");

        if ( $this->m_responseOnPresent ) {
            $xml->addAttribute('ResponseOn', $this->m_responseOn);
        } else { 
            return ""; // not all required attributes have been set 
        } 
        if ( $this->m_sourceIdPresent ) {
            $xml->addAttribute('SourceId', $this->m_sourceId);
        } else { 
            return ""; // not all required attributes have been set 
        } 
        if ( $this->m_timeStampPresent ) {
            $xml->addAttribute('TimeStamp', $this->m_timeStamp);
        } else { 
            return ""; // not all required attributes have been set 
        } 
        return $xml->asXML();
    }

    public function toString() {

    	return $this->toStringWithLead("");
    }

    public function toStringWithLead( $lead ) {

        $str = $lead . "Pong\n";

        $str .= $lead . "    ResponseOn = " . $this->m_responseOn . "\n";
        $str .= $lead . "    SourceId = " . $this->m_sourceId . "\n";
        $str .= $lead . "    TimeStamp = " . $this->m_timeStamp . "\n";

        return $str;
    }
}
?>
