/* 
 *  Body
 *
 *  Body is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Fri Mar 26 13:53:21 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#ifndef __BODY_H__
#define __BODY_H__

#include <QtCore>
#include "IVEFLoginRequest.h"
#include "IVEFLoginResponse.h"
#include "IVEFLogout.h"
#include "IVEFPing.h"
#include "IVEFPong.h"
#include "IVEFServerStatus.h"
#include "IVEFServiceRequest.h"
#include "IVEFVesselData.h"

//-----------------------------------------------------------
//! \brief       Class definition of Body
//!
//! 
//!

class Body : public QObject { 
    Q_OBJECT

public:
    //!constructor
    //!
    Body();
    //!copy constructor
    //!
    Body(const Body&);
    //!= operator
    //!
    Body & operator=(const Body&/*val*/);
    //!              sets the LoginRequest
    //!
    void setLoginRequest(LoginRequest val);

    //!              gets the LoginRequest
    //!
    //! \return     LoginRequest
    //!
    LoginRequest getLoginRequest() const;

    //!              returns true if LoginRequestis used (optional field).
    //!
    //! \return     bool
    bool hasLoginRequest() const;

    //!              sets the LoginResponse
    //!
    void setLoginResponse(LoginResponse val);

    //!              gets the LoginResponse
    //!
    //! \return     LoginResponse
    //!
    LoginResponse getLoginResponse() const;

    //!              returns true if LoginResponseis used (optional field).
    //!
    //! \return     bool
    bool hasLoginResponse() const;

    //!              sets the Logout: Logout element node
    //!
    void setLogout(Logout val);

    //!              gets the Logout: Logout element node
    //!
    //! \return     Logout
    //!
    Logout getLogout() const;

    //!              returns true if Logoutis used (optional field).
    //!
    //! \return     bool
    bool hasLogout() const;

    //!              sets the Ping
    //!
    void setPing(Ping val);

    //!              gets the Ping
    //!
    //! \return     Ping
    //!
    Ping getPing() const;

    //!              returns true if Pingis used (optional field).
    //!
    //! \return     bool
    bool hasPing() const;

    //!              sets the Pong
    //!
    void setPong(Pong val);

    //!              gets the Pong
    //!
    //! \return     Pong
    //!
    Pong getPong() const;

    //!              returns true if Pongis used (optional field).
    //!
    //! \return     bool
    bool hasPong() const;

    //!              sets the ServerStatus
    //!
    void setServerStatus(ServerStatus val);

    //!              gets the ServerStatus
    //!
    //! \return     ServerStatus
    //!
    ServerStatus getServerStatus() const;

    //!              returns true if ServerStatusis used (optional field).
    //!
    //! \return     bool
    bool hasServerStatus() const;

    //!              sets the ServiceRequest
    //!
    void setServiceRequest(ServiceRequest val);

    //!              gets the ServiceRequest
    //!
    //! \return     ServiceRequest
    //!
    ServiceRequest getServiceRequest() const;

    //!              returns true if ServiceRequestis used (optional field).
    //!
    //! \return     bool
    bool hasServiceRequest() const;

    //!              adds a VesselData.
    //!
    void addVesselData(VesselData val);

    //!              gets the i-th VesselData.
    //!
    VesselData getVesselDataAt(int i) const;

    //!              return the number of VesselData objects.
    //!
    //! \return     int
    int countOfVesselDatas() const;

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
    LoginRequest m_loginRequest;
    bool m_loginRequestPresent;
    LoginResponse m_loginResponse;
    bool m_loginResponsePresent;
    Logout m_logout;
    bool m_logoutPresent;
    Ping m_ping;
    bool m_pingPresent;
    Pong m_pong;
    bool m_pongPresent;
    ServerStatus m_serverStatus;
    bool m_serverStatusPresent;
    ServiceRequest m_serviceRequest;
    bool m_serviceRequestPresent;
    QVector<VesselData> m_vesselDatas;
    bool m_vesselDataPresent;

}; 

#endif

