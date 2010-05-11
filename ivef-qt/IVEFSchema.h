/* 
 *  Schema
 *
 *  Schema is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Tue May 11 11:30:29 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#ifndef __SCHEMA_H__
#define __SCHEMA_H__

#include <QtCore>
#include <cstdlib>
#include <iostream>

//-----------------------------------------------------------
//! \brief       Class definition of Schema
//!
//! 
//!

class Schema : public QObject { 
    Q_OBJECT

public:
    //!constructor
    //!
    Schema();
    //!copy constructor
    //!
    Schema(const Schema&);
    //!= operator
    //!
    Schema & operator=(const Schema&/*val*/);
    //!              gets the ElementFormDefault
    //!
    //! \return     QString
    //!
    QString getElementFormDefault() const;
    //!              gets the TargetNamespace
    //!
    //! \return     QString
    //!
    QString getTargetNamespace() const;
    //!              generates XML of this object including attributes and child elements
    //!              returns NULL if not all required elements are available
    //!
    //! \return     QString
    QString toXML() const;

    //!              generates output of this object including attributes and child elements
    //!
    //! \return     QString
    QString toString();

    //!              generates output of this object including attributes and child elements
    //!
    //! \return     QString
    QString toString(QString lead);

    //!              encodes a string returning the encoded string
    //!
    //! \return     QString
    QString encode(QString str) const;


private:

}; 

#endif

