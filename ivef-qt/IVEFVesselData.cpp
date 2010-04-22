
#include "IVEFVesselData.h"

// Constructor
VesselData::VesselData() {

    // optional attributes are by default not present
    m_posReportPresent = false;
}

// copy constructor
VesselData::VesselData(const VesselData &val) : QObject() {

    m_posReportPresent = val.m_posReportPresent;
    m_posReport = val.m_posReport;
    m_staticDatas = val.m_staticDatas;
    m_voyages = val.m_voyages;
    m_taggedItems = val.m_taggedItems;
}

// assignement
VesselData & VesselData::operator=(const VesselData &val) {

    m_posReportPresent = val.m_posReportPresent;
    m_posReport = val.m_posReport;
    m_staticDatas = val.m_staticDatas;
    m_voyages = val.m_voyages;
    m_taggedItems = val.m_taggedItems;
    return *this;
}

// String encoder
QString VesselData::encode( QString str) const {

    // replace characters that are illigal in XML with their encodings
    str.replace('&', "&amp;");
    str.replace('<', "&lt;");
    str.replace('>', "&gt;");
    str.replace('"', "&quot;");
    return str;
}

// setter for VesselData
bool VesselData::setPosReport(PosReport val) {

    m_posReportPresent = true;
    m_posReport = val;
      return true;
}

// getter for VesselData
PosReport VesselData::getPosReport() const {

    return m_posReport;
}

// check if optional element VesselData has been set
bool VesselData::hasPosReport() const {

    return m_posReportPresent;
}

// setter for VesselData
bool VesselData::addStaticData(StaticData val) {

    m_staticDatas.append(val);
      return true;
}

// getter for VesselData
StaticData VesselData::getStaticDataAt(int i) const {

    return m_staticDatas.at(i);
}

// count for VesselData
int VesselData::countOfStaticDatas() const {

    return m_staticDatas.count();
}

// setter for VesselData
bool VesselData::addVoyage(Voyage val) {

    m_voyages.append(val);
      return true;
}

// getter for VesselData
Voyage VesselData::getVoyageAt(int i) const {

    return m_voyages.at(i);
}

// count for VesselData
int VesselData::countOfVoyages() const {

    return m_voyages.count();
}

// setter for VesselData
bool VesselData::addTaggedItem(TaggedItem val) {

    m_taggedItems.append(val);
      return true;
}

// getter for VesselData
TaggedItem VesselData::getTaggedItemAt(int i) const {

    return m_taggedItems.at(i);
}

// count for VesselData
int VesselData::countOfTaggedItems() const {

    return m_taggedItems.count();
}

// Get XML Representation
QString VesselData::toXML() const {

    QString xml = "<VesselData";
    xml.append(">\n");
    // add optional data if available
    if ( hasPosReport() ) {
        xml.append( m_posReport.toXML() );
    }
    // add all included data
    for(int i=0; i < m_staticDatas.count(); i++ ) {
        StaticData attribute = m_staticDatas.at(i);
        xml.append( attribute.toXML() );
    }
    // add all included data
    for(int i=0; i < m_voyages.count(); i++ ) {
        Voyage attribute = m_voyages.at(i);
        xml.append( attribute.toXML() );
    }
    // add all included data
    for(int i=0; i < m_taggedItems.count(); i++ ) {
        TaggedItem attribute = m_taggedItems.at(i);
        xml.append( attribute.toXML() );
    }
    xml.append( "</VesselData>\n");
    return xml;
}

// Get String Representation
QString VesselData::toString() {

    return toString("");
}

// Get String Representation with a lead
QString VesselData::toString(QString lead) {

    QString str = lead + "VesselData\n";
    // add all optional data if present
    if ( hasPosReport() ) {
        str.append( m_posReport.toString(lead + "    ") );
    }
    // add all included data
    for(int i=0; i < m_staticDatas.count(); i++ ) {
       StaticData attribute = m_staticDatas.at(i);
       str.append( attribute.toString(lead + "    ") );
    }
    // add all included data
    for(int i=0; i < m_voyages.count(); i++ ) {
       Voyage attribute = m_voyages.at(i);
       str.append( attribute.toString(lead + "    ") );
    }
    // add all included data
    for(int i=0; i < m_taggedItems.count(); i++ ) {
       TaggedItem attribute = m_taggedItems.at(i);
       str.append( attribute.toString(lead + "    ") );
    }
    return str;
}

