/* 
 *  ServiceRequestResponse
 *
 *  ServiceRequestResponse is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Fri Mar 26 13:53:33 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#ifndef __SERVICEREQUESTRESPONSE_H__
#define __SERVICEREQUESTRESPONSE_H__

#include <QtCore>

//-----------------------------------------------------------
//! \brief       Class definition of ServiceRequestResponse
//!
//! DATA detailing the supliers response to the users service request
//!

class ServiceRequestResponse : public QObject { 
    Q_OBJECT

public:
    //!constructor
    //!
    ServiceRequestResponse();
    //!copy constructor
    //!
    ServiceRequestResponse(const ServiceRequestResponse&);
    //!= operator
    //!
    ServiceRequestResponse & operator=(const ServiceRequestResponse&/*val*/);
    //!              sets the Reason: String describing reason for declining, when result is "Declined", or a string describing the restrictions when the result is "Accepted with restrictions"
    //!
    void setReason(QString val);

    //!              gets the Reason: String describing reason for declining, when result is "Declined", or a string describing the restrictions when the result is "Accepted with restrictions"
    //!
    //! \return     QString
    //!
    QString getReason() const;

    //!              returns true if Reasonis used (optional field).
    //!
    //! \return     bool
    bool hasReason() const;

    //!              sets the ResponseOn: Corresponds to the original MsgRefId from the ServiceRequest message. Must be an Universally Unique Identifier (TU-T Rec. X.667 | ISO/IEC 9834-8.)
    //!
    void setResponseOn(QString val);

    //!              gets the ResponseOn: Corresponds to the original MsgRefId from the ServiceRequest message. Must be an Universally Unique Identifier (TU-T Rec. X.667 | ISO/IEC 9834-8.)
    //!
    //! \return     QString
    //!
    QString getResponseOn() const;

    //!              sets the Result: 1 = Accepted, 2 = Declined, 3 = Accepted with restrictions
    //!
    void setResult(int val);

    //!              gets the Result: 1 = Accepted, 2 = Declined, 3 = Accepted with restrictions
    //!
    //! \return     int
    //!
    int getResult() const;

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
    QString m_reason;
    bool m_reasonPresent;
    QString m_responseOn;
    int m_result;

}; 

#endif

