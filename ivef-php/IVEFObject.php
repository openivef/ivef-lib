<?php

// 
//  Object
//
//  Object is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  Object is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY ); without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//*********************************************************************************
//  WARNING: THIS CODE WAS GENERATED DO NOT MODIFY, CHANGE THE XSD INSTEAD
//  Generated by xsd2code on Fri May 28 20:19:57 2010.
//*********************************************************************************
//  Copyright 2010
//


class Object { 

    var $m_fileName; // default value is uninitialized
    var $m_fileNamePresent;

    public function Object() {

        date_default_timezone_set('UTC');
        $this->m_fileNamePresent = false;
    }

    public function setFileName( $val ) {

        $this->m_fileNamePresent = true;
        $this->m_fileName = $val;
        return true;
    }

    public function getFileName() {

        return $this->m_fileName;
    }

    public function toXML() {

        $xml = new SimpleXMLElement("<Object></Object>");

        if ( $this->m_fileNamePresent ) {
            $xml->addAttribute('FileName', $this->m_fileName);
        } else { 
            return ""; // not all required attributes have been set 
        } 
        return $xml->asXML();
    }

    public function toString() {

    	return $this->toStringWithLead("");
    }

    public function toStringWithLead( $lead ) {

        $str = $lead . "Object\n";

        $str .= $lead . "    FileName = " . $this->m_fileName . "\n";

        return $str;
    }
}
?>
