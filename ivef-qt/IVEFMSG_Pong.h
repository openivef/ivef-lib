/* 
 *  MSG_Pong
 *
 *  MSG_Pong is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Tue May 18 14:04:26 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#ifndef __MSG_PONG_H__
#define __MSG_PONG_H__

#include <QtCore>
#include <cstdlib>
#include <iostream>
#include "IVEFHeader.h"
#include "IVEFBody.h"

//-----------------------------------------------------------
//! \brief       Class definition of MSG_Pong
//!
//! MESSAGE sent as reply to a MSG_Ping to confirm the aliveness of the connection.
//!

class MSG_Pong : public QObject { 
    Q_OBJECT

public:
    //!constructor
    //!
    MSG_Pong();
    //!copy constructor
    //!
    MSG_Pong(const MSG_Pong&);
    //!= operator
    //!
    MSG_Pong & operator=(const MSG_Pong&/*val*/);
    //!              sets the Header
    //!
    bool setHeader(Header val);

    //!              gets the Header
    //!
    //! \return     Header
    //!
    Header getHeader() const;

    //!              sets the Body
    //!
    bool setBody(Body val);

    //!              gets the Body
    //!
    //! \return     Body
    //!
    Body getBody() const;

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
    Header m_header;
    bool m_headerPresent;
    Body m_body;
    bool m_bodyPresent;

}; 

#endif

