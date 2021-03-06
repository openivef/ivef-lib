
#include "IVEFIdentifier.h"

// Constructor
Identifier::Identifier() {

    // initialize empty string
    m_callsign = "";
    m_callsignPresent = false;
    m_IMO = 0;
    m_IMOPresent = false;
    // initialize empty string
    m_name = "";
    m_namePresent = false;
    // initialize empty string
    m_formerName = "";
    m_formerNamePresent = false;
    // initialize empty string
    m_flag = "";
    m_flagPresent = false;
    // initialize empty string
    m_owner = "";
    m_ownerPresent = false;
    m_MMSI = 0;
    m_MMSIPresent = false;
    // initialize empty string
    m_LRIT = "";
    m_LRITPresent = false;
}

// copy constructor
Identifier::Identifier(const Identifier &val) : QObject() {

    m_otherIdPresent = val.m_otherIdPresent;
    m_otherIds = val.m_otherIds;
    m_otherNamePresent = val.m_otherNamePresent;
    m_otherNames = val.m_otherNames;
    m_callsignPresent = val.m_callsignPresent;
    m_callsign = val.m_callsign;
    m_IMOPresent = val.m_IMOPresent;
    m_IMO = val.m_IMO;
    m_namePresent = val.m_namePresent;
    m_name = val.m_name;
    m_formerNamePresent = val.m_formerNamePresent;
    m_formerName = val.m_formerName;
    m_flagPresent = val.m_flagPresent;
    m_flag = val.m_flag;
    m_ownerPresent = val.m_ownerPresent;
    m_owner = val.m_owner;
    m_MMSIPresent = val.m_MMSIPresent;
    m_MMSI = val.m_MMSI;
    m_LRITPresent = val.m_LRITPresent;
    m_LRIT = val.m_LRIT;
}

// compare
bool Identifier::operator==(const Identifier &val) {

    if (!(m_otherIdPresent == val.m_otherIdPresent)) return false;
    if (!(m_otherIds == val.m_otherIds)) return false;
    if (!(m_otherNamePresent == val.m_otherNamePresent)) return false;
    if (!(m_otherNames == val.m_otherNames)) return false;
    if (!(m_callsignPresent == val.m_callsignPresent)) return false;
    if (!(m_callsign == val.m_callsign)) return false;
    if (!(m_IMOPresent == val.m_IMOPresent)) return false;
    if (!(m_IMO == val.m_IMO)) return false;
    if (!(m_namePresent == val.m_namePresent)) return false;
    if (!(m_name == val.m_name)) return false;
    if (!(m_formerNamePresent == val.m_formerNamePresent)) return false;
    if (!(m_formerName == val.m_formerName)) return false;
    if (!(m_flagPresent == val.m_flagPresent)) return false;
    if (!(m_flag == val.m_flag)) return false;
    if (!(m_ownerPresent == val.m_ownerPresent)) return false;
    if (!(m_owner == val.m_owner)) return false;
    if (!(m_MMSIPresent == val.m_MMSIPresent)) return false;
    if (!(m_MMSI == val.m_MMSI)) return false;
    if (!(m_LRITPresent == val.m_LRITPresent)) return false;
    if (!(m_LRIT == val.m_LRIT)) return false;
    return true;
}

// assignement
Identifier & Identifier::operator=(const Identifier &val) {

    m_otherIdPresent = val.m_otherIdPresent;
    m_otherIds = val.m_otherIds;
    m_otherNamePresent = val.m_otherNamePresent;
    m_otherNames = val.m_otherNames;
    m_callsignPresent = val.m_callsignPresent;
    m_callsign = val.m_callsign;
    m_IMOPresent = val.m_IMOPresent;
    m_IMO = val.m_IMO;
    m_namePresent = val.m_namePresent;
    m_name = val.m_name;
    m_formerNamePresent = val.m_formerNamePresent;
    m_formerName = val.m_formerName;
    m_flagPresent = val.m_flagPresent;
    m_flag = val.m_flag;
    m_ownerPresent = val.m_ownerPresent;
    m_owner = val.m_owner;
    m_MMSIPresent = val.m_MMSIPresent;
    m_MMSI = val.m_MMSI;
    m_LRITPresent = val.m_LRITPresent;
    m_LRIT = val.m_LRIT;
    return *this;
}

// String encoder
QString Identifier::encode( QString str) const {

    // replace characters that are illigal in XML with their encodings
    str.replace('&', "&amp;");
    str.replace('<', "&lt;");
    str.replace('>', "&gt;");
    str.replace('"', "&quot;");
    return str;
}

// remover for Identifier
bool Identifier::removeOtherId(OtherId val) {

    if (m_otherIds.count() <= 0) {
        return false; // scalar already at minOccurs
    }
    return m_otherIds.removeOne(val);
}

// setter for Identifier
bool Identifier::addOtherId(OtherId val) {

   m_otherIds.append(val);
      return true;
}

// getter for Identifier
OtherId Identifier::getOtherIdAt(int i) const {

    return m_otherIds.at(i);
}

// count for Identifier
int Identifier::countOfOtherIds() const {

    return m_otherIds.count();
}

// remover for Identifier
bool Identifier::removeOtherName(OtherName val) {

    if (m_otherNames.count() <= 0) {
        return false; // scalar already at minOccurs
    }
    return m_otherNames.removeOne(val);
}

// setter for Identifier
bool Identifier::addOtherName(OtherName val) {

   m_otherNames.append(val);
      return true;
}

// getter for Identifier
OtherName Identifier::getOtherNameAt(int i) const {

    return m_otherNames.at(i);
}

// count for Identifier
int Identifier::countOfOtherNames() const {

    return m_otherNames.count();
}

// setter for Identifier
bool Identifier::setCallsign(QString val) {
    // check if the new value is within bounds 

    if (val.length() < 0)
        return false;    // check if the new value is within bounds 

    if (val.length() > 9)
        return false;
    m_callsignPresent = true;
    m_callsign = val;
      return true;
}

// getter for Identifier
QString Identifier::getCallsign() const {

    return m_callsign;
}

// check if optional element Identifier has been set
bool Identifier::hasCallsign() const {

    return m_callsignPresent;
}

// setter for Identifier
bool Identifier::setIMO(int val) {

    m_IMOPresent = true;
    m_IMO = val;
      return true;
}

// getter for Identifier
int Identifier::getIMO() const {

    return m_IMO;
}

// check if optional element Identifier has been set
bool Identifier::hasIMO() const {

    return m_IMOPresent;
}

// setter for Identifier
bool Identifier::setName(QString val) {
    // check if the new value is within bounds 

    if (val.length() < 1)
        return false;    // check if the new value is within bounds 

    if (val.length() > 42)
        return false;
    m_namePresent = true;
    m_name = val;
      return true;
}

// getter for Identifier
QString Identifier::getName() const {

    return m_name;
}

// check if optional element Identifier has been set
bool Identifier::hasName() const {

    return m_namePresent;
}

// setter for Identifier
bool Identifier::setFormerName(QString val) {
    // check if the new value is within bounds 

    if (val.length() < 1)
        return false;    // check if the new value is within bounds 

    if (val.length() > 42)
        return false;
    m_formerNamePresent = true;
    m_formerName = val;
      return true;
}

// getter for Identifier
QString Identifier::getFormerName() const {

    return m_formerName;
}

// check if optional element Identifier has been set
bool Identifier::hasFormerName() const {

    return m_formerNamePresent;
}

// setter for Identifier
bool Identifier::setFlag(QString val) {
    // check if the new value is within bounds 

    if (val.length() < 2)
        return false;    // check if the new value is within bounds 

    if (val.length() > 2)
        return false;
    m_flagPresent = true;
    m_flag = val;
      return true;
}

// getter for Identifier
QString Identifier::getFlag() const {

    return m_flag;
}

// check if optional element Identifier has been set
bool Identifier::hasFlag() const {

    return m_flagPresent;
}

// setter for Identifier
bool Identifier::setOwner(QString val) {
    // check if the new value is within bounds 

    if (val.length() < 1)
        return false;    // check if the new value is within bounds 

    if (val.length() > 42)
        return false;
    m_ownerPresent = true;
    m_owner = val;
      return true;
}

// getter for Identifier
QString Identifier::getOwner() const {

    return m_owner;
}

// check if optional element Identifier has been set
bool Identifier::hasOwner() const {

    return m_ownerPresent;
}

// setter for Identifier
bool Identifier::setMMSI(int val) {

    m_MMSIPresent = true;
    m_MMSI = val;
      return true;
}

// getter for Identifier
int Identifier::getMMSI() const {

    return m_MMSI;
}

// check if optional element Identifier has been set
bool Identifier::hasMMSI() const {

    return m_MMSIPresent;
}

// setter for Identifier
bool Identifier::setLRIT(QString val) {
    // check if the new value is within bounds 

    if (val.length() < 1)
        return false;    // check if the new value is within bounds 

    if (val.length() > 42)
        return false;
    m_LRITPresent = true;
    m_LRIT = val;
      return true;
}

// getter for Identifier
QString Identifier::getLRIT() const {

    return m_LRIT;
}

// check if optional element Identifier has been set
bool Identifier::hasLRIT() const {

    return m_LRITPresent;
}

// Get XML Representation
QString Identifier::toXML() const {

    QString xml = "<Identifier";
    QString dataMember;
    // check for presence of optional attribute
    if ( hasCallsign() ) {
        xml.append(" Callsign=\"" + encode (m_callsign) + "\"");
    }
    // check for presence of optional attribute
    if ( hasIMO() ) {
        xml.append(" IMO=\"" + QString::number( m_IMO ) + "\"");
    }
    // check for presence of optional attribute
    if ( hasName() ) {
        xml.append(" Name=\"" + encode (m_name) + "\"");
    }
    // check for presence of optional attribute
    if ( hasFormerName() ) {
        xml.append(" FormerName=\"" + encode (m_formerName) + "\"");
    }
    // check for presence of optional attribute
    if ( hasFlag() ) {
        xml.append(" Flag=\"" + encode (m_flag) + "\"");
    }
    // check for presence of optional attribute
    if ( hasOwner() ) {
        xml.append(" Owner=\"" + encode (m_owner) + "\"");
    }
    // check for presence of optional attribute
    if ( hasMMSI() ) {
        xml.append(" MMSI=\"" + QString::number( m_MMSI ) + "\"");
    }
    // check for presence of optional attribute
    if ( hasLRIT() ) {
        xml.append(" LRIT=\"" + encode (m_LRIT) + "\"");
    }
    xml.append(">\n");
    if (m_otherIds.count() < 0) {
        return NULL; // not enough values
    }
    // add all included data
    for(int i=0; i < m_otherIds.count(); i++ ) {
        OtherId attribute = m_otherIds.at(i);
        dataMember = attribute.toXML();
        if (dataMember != NULL) {
           xml.append( attribute.toXML() );
        } else {
            return NULL;
        }
    }
    if (m_otherNames.count() < 0) {
        return NULL; // not enough values
    }
    // add all included data
    for(int i=0; i < m_otherNames.count(); i++ ) {
        OtherName attribute = m_otherNames.at(i);
        dataMember = attribute.toXML();
        if (dataMember != NULL) {
           xml.append( attribute.toXML() );
        } else {
            return NULL;
        }
    }
    xml.append( "</Identifier>\n");
    return xml;
}

// Get String Representation
QString Identifier::toString() {

    return toString("");
}

// Get String Representation with a lead
QString Identifier::toString(QString lead) {

    QString str = lead + "Identifier\n";
    // check for presence of optional attribute
    if ( hasCallsign() ) {
        str.append( lead + "    Callsign = " + m_callsign + "\n");
    }
    // check for presence of optional attribute
    if ( hasIMO() ) {
        str.append( lead + "    IMO = " + QString::number( m_IMO ) + "\n");
    }
    // check for presence of optional attribute
    if ( hasName() ) {
        str.append( lead + "    Name = " + m_name + "\n");
    }
    // check for presence of optional attribute
    if ( hasFormerName() ) {
        str.append( lead + "    FormerName = " + m_formerName + "\n");
    }
    // check for presence of optional attribute
    if ( hasFlag() ) {
        str.append( lead + "    Flag = " + m_flag + "\n");
    }
    // check for presence of optional attribute
    if ( hasOwner() ) {
        str.append( lead + "    Owner = " + m_owner + "\n");
    }
    // check for presence of optional attribute
    if ( hasMMSI() ) {
        str.append( lead + "    MMSI = " + QString::number( m_MMSI ) + "\n");
    }
    // check for presence of optional attribute
    if ( hasLRIT() ) {
        str.append( lead + "    LRIT = " + m_LRIT + "\n");
    }
    // add all included data
    for(int i=0; i < m_otherIds.count(); i++ ) {
        OtherId attribute = m_otherIds.at(i);
        str.append( attribute.toString( lead + "    " ) );
    }
    // add all included data
    for(int i=0; i < m_otherNames.count(); i++ ) {
        OtherName attribute = m_otherNames.at(i);
        str.append( attribute.toString( lead + "    " ) );
    }
    return str;
}

