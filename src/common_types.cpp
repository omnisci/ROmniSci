/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "common_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>



int _kTDeviceTypeValues[] = {
  TDeviceType::CPU,
  TDeviceType::GPU
};
const char* _kTDeviceTypeNames[] = {
  "CPU",
  "GPU"
};
const std::map<int, const char*> _TDeviceType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kTDeviceTypeValues, _kTDeviceTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const TDeviceType::type& val) {
  std::map<int, const char*>::const_iterator it = _TDeviceType_VALUES_TO_NAMES.find(val);
  if (it != _TDeviceType_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

int _kTDatumTypeValues[] = {
  TDatumType::SMALLINT,
  TDatumType::INT,
  TDatumType::BIGINT,
  TDatumType::FLOAT,
  TDatumType::DECIMAL,
  TDatumType::DOUBLE,
  TDatumType::STR,
  TDatumType::TIME,
  TDatumType::TIMESTAMP,
  TDatumType::DATE,
  TDatumType::BOOL,
  TDatumType::INTERVAL_DAY_TIME,
  TDatumType::INTERVAL_YEAR_MONTH,
  TDatumType::POINT,
  TDatumType::LINESTRING,
  TDatumType::POLYGON,
  TDatumType::MULTIPOLYGON,
  TDatumType::TINYINT,
  TDatumType::GEOMETRY,
  TDatumType::GEOGRAPHY
};
const char* _kTDatumTypeNames[] = {
  "SMALLINT",
  "INT",
  "BIGINT",
  "FLOAT",
  "DECIMAL",
  "DOUBLE",
  "STR",
  "TIME",
  "TIMESTAMP",
  "DATE",
  "BOOL",
  "INTERVAL_DAY_TIME",
  "INTERVAL_YEAR_MONTH",
  "POINT",
  "LINESTRING",
  "POLYGON",
  "MULTIPOLYGON",
  "TINYINT",
  "GEOMETRY",
  "GEOGRAPHY"
};
const std::map<int, const char*> _TDatumType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(20, _kTDatumTypeValues, _kTDatumTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const TDatumType::type& val) {
  std::map<int, const char*>::const_iterator it = _TDatumType_VALUES_TO_NAMES.find(val);
  if (it != _TDatumType_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

int _kTEncodingTypeValues[] = {
  TEncodingType::NONE,
  TEncodingType::FIXED,
  TEncodingType::RL,
  TEncodingType::DIFF,
  TEncodingType::DICT,
  TEncodingType::SPARSE,
  TEncodingType::GEOINT,
  TEncodingType::DATE_IN_DAYS
};
const char* _kTEncodingTypeNames[] = {
  "NONE",
  "FIXED",
  "RL",
  "DIFF",
  "DICT",
  "SPARSE",
  "GEOINT",
  "DATE_IN_DAYS"
};
const std::map<int, const char*> _TEncodingType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(8, _kTEncodingTypeValues, _kTEncodingTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const TEncodingType::type& val) {
  std::map<int, const char*>::const_iterator it = _TEncodingType_VALUES_TO_NAMES.find(val);
  if (it != _TEncodingType_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}


TTypeInfo::~TTypeInfo() throw() {
}


void TTypeInfo::__set_type(const TDatumType::type val) {
  this->type = val;
}

void TTypeInfo::__set_encoding(const TEncodingType::type val) {
  this->encoding = val;
}

void TTypeInfo::__set_nullable(const bool val) {
  this->nullable = val;
}

void TTypeInfo::__set_is_array(const bool val) {
  this->is_array = val;
}

void TTypeInfo::__set_precision(const int32_t val) {
  this->precision = val;
}

void TTypeInfo::__set_scale(const int32_t val) {
  this->scale = val;
}

void TTypeInfo::__set_comp_param(const int32_t val) {
  this->comp_param = val;
}

void TTypeInfo::__set_size(const int32_t val) {
  this->size = val;
__isset.size = true;
}
std::ostream& operator<<(std::ostream& out, const TTypeInfo& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t TTypeInfo::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->type = (TDatumType::type)ecast0;
          this->__isset.type = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast1;
          xfer += iprot->readI32(ecast1);
          this->encoding = (TEncodingType::type)ecast1;
          this->__isset.encoding = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->nullable);
          this->__isset.nullable = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->is_array);
          this->__isset.is_array = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->precision);
          this->__isset.precision = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->scale);
          this->__isset.scale = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->comp_param);
          this->__isset.comp_param = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->size);
          this->__isset.size = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t TTypeInfo::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("TTypeInfo");

  xfer += oprot->writeFieldBegin("type", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("nullable", ::apache::thrift::protocol::T_BOOL, 2);
  xfer += oprot->writeBool(this->nullable);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("is_array", ::apache::thrift::protocol::T_BOOL, 3);
  xfer += oprot->writeBool(this->is_array);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("encoding", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32((int32_t)this->encoding);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("precision", ::apache::thrift::protocol::T_I32, 5);
  xfer += oprot->writeI32(this->precision);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("scale", ::apache::thrift::protocol::T_I32, 6);
  xfer += oprot->writeI32(this->scale);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("comp_param", ::apache::thrift::protocol::T_I32, 7);
  xfer += oprot->writeI32(this->comp_param);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.size) {
    xfer += oprot->writeFieldBegin("size", ::apache::thrift::protocol::T_I32, 8);
    xfer += oprot->writeI32(this->size);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(TTypeInfo &a, TTypeInfo &b) {
  using ::std::swap;
  swap(a.type, b.type);
  swap(a.encoding, b.encoding);
  swap(a.nullable, b.nullable);
  swap(a.is_array, b.is_array);
  swap(a.precision, b.precision);
  swap(a.scale, b.scale);
  swap(a.comp_param, b.comp_param);
  swap(a.size, b.size);
  swap(a.__isset, b.__isset);
}

TTypeInfo::TTypeInfo(const TTypeInfo& other2) {
  type = other2.type;
  encoding = other2.encoding;
  nullable = other2.nullable;
  is_array = other2.is_array;
  precision = other2.precision;
  scale = other2.scale;
  comp_param = other2.comp_param;
  size = other2.size;
  __isset = other2.__isset;
}
TTypeInfo& TTypeInfo::operator=(const TTypeInfo& other3) {
  type = other3.type;
  encoding = other3.encoding;
  nullable = other3.nullable;
  is_array = other3.is_array;
  precision = other3.precision;
  scale = other3.scale;
  comp_param = other3.comp_param;
  size = other3.size;
  __isset = other3.__isset;
  return *this;
}
void TTypeInfo::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "TTypeInfo(";
  out << "type=" << to_string(type);
  out << ", " << "encoding=" << to_string(encoding);
  out << ", " << "nullable=" << to_string(nullable);
  out << ", " << "is_array=" << to_string(is_array);
  out << ", " << "precision=" << to_string(precision);
  out << ", " << "scale=" << to_string(scale);
  out << ", " << "comp_param=" << to_string(comp_param);
  out << ", " << "size="; (__isset.size ? (out << to_string(size)) : (out << "<null>"));
  out << ")";
}


