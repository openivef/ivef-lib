/* 
 *  LoginResponse
 *
 *  LoginResponse is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Wed Jan 6 14:24:15 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#ifndef __LOGINRESPONSE_H__
#define __LOGINRESPONSE_H__

#include <QtCore>

//-----------------------------------------------------------
//! \brief       Class definition of LoginResponse
//!
//! 
//!

class LoginResponse : public QObject { 
    Q_OBJECT

public:
    //!constructor
    //!
    LoginResponse();
    //!copy constructor
    //!
    LoginResponse(const LoginResponse&);
    //!= operator
    //!
    LoginResponse & operator=(const LoginResponse&/*val*/);
    //!              sets the MsgId: Corresponds to the original MsgRefId from the Login.xml message
    //!
    void setMsgId(QString val);

    //!              gets the MsgId: Corresponds to the original MsgRefId from the Login.xml message
    //!
    //! \return     QString
    //!
    QString getMsgId() const;

    //!              sets the Result: 1 = Accepted 2 = Declined
    //!
    void setResult(int val);

    //!              gets the Result: 1 = Accepted 2 = Declined
    //!
    //! \return     int
    //!
    int getResult() const;

    //!              sets the Reason: String describing reason for declining, only used when result is "Declined"
    //!
    void setReason(QString val);

    //!              gets the Reason: String describing reason for declining, only used when result is "Declined"
    //!
    //! \return     QString
    //!
    QString getReason() const;

    //!              returns true if Reasonis used (optional field).
    //!
    //! \return     bool
    bool hasReason();

    //!              generates XML of this object including attributes and child elements
    //!
    //! \return     QString
    QString toXML();

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
    QString encode(QString str);


private:
    QString m_msgId;
    int m_result;
    QString m_reason;
    bool m_reasonPresent;

}; 

#endif

