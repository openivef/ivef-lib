/* 
 *  Area
 *
 *  Area is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Thu Aug 26 11:50:41 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#ifndef __AREA_H__
#define __AREA_H__

#include <QtCore>
#include <cstdlib>
#include <iostream>
#include "IVEFPos.h"

//-----------------------------------------------------------
//! \brief       Class definition of Area
//!
//! Geographical location based on one or more polygons
//!

class Area : public QObject { 
    Q_OBJECT

public:
    //!constructor
    //!
    Area();
    //!copy constructor
    //!
    Area(const Area&);
    //!= operator
    //!
    Area & operator=(const Area&/*val*/);
    //!== operator
    //!
    bool operator==(const Area&/*val*/);
    //!              removes a Pos.
    //!
    bool removePos(Pos val);

    //!              adds a Pos.
    //!
    bool addPos(Pos val);

    //!              gets the i-th Pos.
    //!
    Pos getPosAt(int i) const;

    //!              return the number of Pos objects.
    //!
    //! \return     int
    int countOfPoss() const;

    //!              sets the Name: Name of the area
    //!
    bool setName(QString val);

    //!              gets the Name: Name of the area
    //!
    //! \return     QString
    //!
    QString getName() const;

    //!              returns true if Nameis used (optional field).
    //!
    //! \return     bool
    bool hasName() const;

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
    QList<Pos> m_poss;
    bool m_posPresent;
    QString m_name;
    bool m_namePresent;

}; 

#endif

