/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef serialized_result_set_TYPES_H
#define serialized_result_set_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/stdcxx.h>
#include "common_types.h"




struct TResultSetLayout {
  enum type {
    GroupByPerfectHash = 0,
    GroupByBaselineHash = 1,
    Projection = 2,
    NonGroupedAggregate = 3
  };
};

extern const std::map<int, const char*> _TResultSetLayout_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const TResultSetLayout::type& val);

struct TCountDistinctImplType {
  enum type {
    Invalid = 0,
    Bitmap = 1,
    StdSet = 2
  };
};

extern const std::map<int, const char*> _TCountDistinctImplType_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const TCountDistinctImplType::type& val);

struct TAggKind {
  enum type {
    AVG = 0,
    MIN = 1,
    MAX = 2,
    SUM = 3,
    COUNT = 4,
    APPROX_COUNT_DISTINCT = 5,
    SAMPLE = 6
  };
};

extern const std::map<int, const char*> _TAggKind_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const TAggKind::type& val);

typedef std::vector<class TCountDistinctDescriptor>  TCountDistinctDescriptors;

class TSlotSize;

class TColSlotContext;

class TCountDistinctDescriptor;

class TResultSetBufferDescriptor;

class TTargetInfo;

class TCountDistinctSetStorage;

class TCountDistinctSet;

class TSerializedRows;

typedef struct _TSlotSize__isset {
  _TSlotSize__isset() : padded(false), logical(false) {}
  bool padded :1;
  bool logical :1;
} _TSlotSize__isset;

class TSlotSize : public virtual ::apache::thrift::TBase {
 public:

  TSlotSize(const TSlotSize&);
  TSlotSize& operator=(const TSlotSize&);
  TSlotSize() : padded(0), logical(0) {
  }

  virtual ~TSlotSize() throw();
  int16_t padded;
  int16_t logical;

  _TSlotSize__isset __isset;

  void __set_padded(const int16_t val);

  void __set_logical(const int16_t val);

  bool operator == (const TSlotSize & rhs) const
  {
    if (!(padded == rhs.padded))
      return false;
    if (!(logical == rhs.logical))
      return false;
    return true;
  }
  bool operator != (const TSlotSize &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TSlotSize & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TSlotSize &a, TSlotSize &b);

std::ostream& operator<<(std::ostream& out, const TSlotSize& obj);

typedef struct _TColSlotContext__isset {
  _TColSlotContext__isset() : slot_sizes(false), col_to_slot_map(false) {}
  bool slot_sizes :1;
  bool col_to_slot_map :1;
} _TColSlotContext__isset;

class TColSlotContext : public virtual ::apache::thrift::TBase {
 public:

  TColSlotContext(const TColSlotContext&);
  TColSlotContext& operator=(const TColSlotContext&);
  TColSlotContext() {
  }

  virtual ~TColSlotContext() throw();
  std::vector<TSlotSize>  slot_sizes;
  std::vector<std::vector<int32_t> >  col_to_slot_map;

  _TColSlotContext__isset __isset;

  void __set_slot_sizes(const std::vector<TSlotSize> & val);

  void __set_col_to_slot_map(const std::vector<std::vector<int32_t> > & val);

  bool operator == (const TColSlotContext & rhs) const
  {
    if (!(slot_sizes == rhs.slot_sizes))
      return false;
    if (!(col_to_slot_map == rhs.col_to_slot_map))
      return false;
    return true;
  }
  bool operator != (const TColSlotContext &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TColSlotContext & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TColSlotContext &a, TColSlotContext &b);

std::ostream& operator<<(std::ostream& out, const TColSlotContext& obj);

typedef struct _TCountDistinctDescriptor__isset {
  _TCountDistinctDescriptor__isset() : impl_type(false), min_val(false), bitmap_sz_bits(false), approximate(false), device_type(false), sub_bitmap_count(false) {}
  bool impl_type :1;
  bool min_val :1;
  bool bitmap_sz_bits :1;
  bool approximate :1;
  bool device_type :1;
  bool sub_bitmap_count :1;
} _TCountDistinctDescriptor__isset;

class TCountDistinctDescriptor : public virtual ::apache::thrift::TBase {
 public:

  TCountDistinctDescriptor(const TCountDistinctDescriptor&);
  TCountDistinctDescriptor& operator=(const TCountDistinctDescriptor&);
  TCountDistinctDescriptor() : impl_type((TCountDistinctImplType::type)0), min_val(0), bitmap_sz_bits(0), approximate(0), device_type(( ::TDeviceType::type)0), sub_bitmap_count(0) {
  }

  virtual ~TCountDistinctDescriptor() throw();
  TCountDistinctImplType::type impl_type;
  int64_t min_val;
  int64_t bitmap_sz_bits;
  bool approximate;
   ::TDeviceType::type device_type;
  int64_t sub_bitmap_count;

  _TCountDistinctDescriptor__isset __isset;

  void __set_impl_type(const TCountDistinctImplType::type val);

  void __set_min_val(const int64_t val);

  void __set_bitmap_sz_bits(const int64_t val);

  void __set_approximate(const bool val);

  void __set_device_type(const  ::TDeviceType::type val);

  void __set_sub_bitmap_count(const int64_t val);

  bool operator == (const TCountDistinctDescriptor & rhs) const
  {
    if (!(impl_type == rhs.impl_type))
      return false;
    if (!(min_val == rhs.min_val))
      return false;
    if (!(bitmap_sz_bits == rhs.bitmap_sz_bits))
      return false;
    if (!(approximate == rhs.approximate))
      return false;
    if (!(device_type == rhs.device_type))
      return false;
    if (!(sub_bitmap_count == rhs.sub_bitmap_count))
      return false;
    return true;
  }
  bool operator != (const TCountDistinctDescriptor &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TCountDistinctDescriptor & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TCountDistinctDescriptor &a, TCountDistinctDescriptor &b);

std::ostream& operator<<(std::ostream& out, const TCountDistinctDescriptor& obj);

typedef struct _TResultSetBufferDescriptor__isset {
  _TResultSetBufferDescriptor__isset() : layout(false), keyless(false), entry_count(false), idx_target_as_key(false), min_val(false), max_val(false), bucket(false), group_col_widths(false), key_bytewidth(false), col_slot_context(false), target_groupby_indices(false), count_distinct_descriptors(false), force_4byte_float(false) {}
  bool layout :1;
  bool keyless :1;
  bool entry_count :1;
  bool idx_target_as_key :1;
  bool min_val :1;
  bool max_val :1;
  bool bucket :1;
  bool group_col_widths :1;
  bool key_bytewidth :1;
  bool col_slot_context :1;
  bool target_groupby_indices :1;
  bool count_distinct_descriptors :1;
  bool force_4byte_float :1;
} _TResultSetBufferDescriptor__isset;

class TResultSetBufferDescriptor : public virtual ::apache::thrift::TBase {
 public:

  TResultSetBufferDescriptor(const TResultSetBufferDescriptor&);
  TResultSetBufferDescriptor& operator=(const TResultSetBufferDescriptor&);
  TResultSetBufferDescriptor() : layout((TResultSetLayout::type)0), keyless(0), entry_count(0), idx_target_as_key(0), min_val(0), max_val(0), bucket(0), key_bytewidth(0), force_4byte_float(0) {
  }

  virtual ~TResultSetBufferDescriptor() throw();
  TResultSetLayout::type layout;
  bool keyless;
  int32_t entry_count;
  int32_t idx_target_as_key;
  int64_t min_val;
  int64_t max_val;
  int64_t bucket;
  std::vector<int16_t>  group_col_widths;
  int16_t key_bytewidth;
  TColSlotContext col_slot_context;
  std::vector<int32_t>  target_groupby_indices;
  TCountDistinctDescriptors count_distinct_descriptors;
  bool force_4byte_float;

  _TResultSetBufferDescriptor__isset __isset;

  void __set_layout(const TResultSetLayout::type val);

  void __set_keyless(const bool val);

  void __set_entry_count(const int32_t val);

  void __set_idx_target_as_key(const int32_t val);

  void __set_min_val(const int64_t val);

  void __set_max_val(const int64_t val);

  void __set_bucket(const int64_t val);

  void __set_group_col_widths(const std::vector<int16_t> & val);

  void __set_key_bytewidth(const int16_t val);

  void __set_col_slot_context(const TColSlotContext& val);

  void __set_target_groupby_indices(const std::vector<int32_t> & val);

  void __set_count_distinct_descriptors(const TCountDistinctDescriptors& val);

  void __set_force_4byte_float(const bool val);

  bool operator == (const TResultSetBufferDescriptor & rhs) const
  {
    if (!(layout == rhs.layout))
      return false;
    if (!(keyless == rhs.keyless))
      return false;
    if (!(entry_count == rhs.entry_count))
      return false;
    if (!(idx_target_as_key == rhs.idx_target_as_key))
      return false;
    if (!(min_val == rhs.min_val))
      return false;
    if (!(max_val == rhs.max_val))
      return false;
    if (!(bucket == rhs.bucket))
      return false;
    if (!(group_col_widths == rhs.group_col_widths))
      return false;
    if (!(key_bytewidth == rhs.key_bytewidth))
      return false;
    if (!(col_slot_context == rhs.col_slot_context))
      return false;
    if (!(target_groupby_indices == rhs.target_groupby_indices))
      return false;
    if (!(count_distinct_descriptors == rhs.count_distinct_descriptors))
      return false;
    if (!(force_4byte_float == rhs.force_4byte_float))
      return false;
    return true;
  }
  bool operator != (const TResultSetBufferDescriptor &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TResultSetBufferDescriptor & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TResultSetBufferDescriptor &a, TResultSetBufferDescriptor &b);

std::ostream& operator<<(std::ostream& out, const TResultSetBufferDescriptor& obj);

typedef struct _TTargetInfo__isset {
  _TTargetInfo__isset() : is_agg(false), kind(false), type(false), arg_type(false), skip_nulls(false), is_distinct(false) {}
  bool is_agg :1;
  bool kind :1;
  bool type :1;
  bool arg_type :1;
  bool skip_nulls :1;
  bool is_distinct :1;
} _TTargetInfo__isset;

class TTargetInfo : public virtual ::apache::thrift::TBase {
 public:

  TTargetInfo(const TTargetInfo&);
  TTargetInfo& operator=(const TTargetInfo&);
  TTargetInfo() : is_agg(0), kind((TAggKind::type)0), skip_nulls(0), is_distinct(0) {
  }

  virtual ~TTargetInfo() throw();
  bool is_agg;
  TAggKind::type kind;
   ::TTypeInfo type;
   ::TTypeInfo arg_type;
  bool skip_nulls;
  bool is_distinct;

  _TTargetInfo__isset __isset;

  void __set_is_agg(const bool val);

  void __set_kind(const TAggKind::type val);

  void __set_type(const  ::TTypeInfo& val);

  void __set_arg_type(const  ::TTypeInfo& val);

  void __set_skip_nulls(const bool val);

  void __set_is_distinct(const bool val);

  bool operator == (const TTargetInfo & rhs) const
  {
    if (!(is_agg == rhs.is_agg))
      return false;
    if (!(kind == rhs.kind))
      return false;
    if (!(type == rhs.type))
      return false;
    if (!(arg_type == rhs.arg_type))
      return false;
    if (!(skip_nulls == rhs.skip_nulls))
      return false;
    if (!(is_distinct == rhs.is_distinct))
      return false;
    return true;
  }
  bool operator != (const TTargetInfo &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TTargetInfo & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TTargetInfo &a, TTargetInfo &b);

std::ostream& operator<<(std::ostream& out, const TTargetInfo& obj);

typedef struct _TCountDistinctSetStorage__isset {
  _TCountDistinctSetStorage__isset() : bitmap(false), sparse_set(false) {}
  bool bitmap :1;
  bool sparse_set :1;
} _TCountDistinctSetStorage__isset;

class TCountDistinctSetStorage : public virtual ::apache::thrift::TBase {
 public:

  TCountDistinctSetStorage(const TCountDistinctSetStorage&);
  TCountDistinctSetStorage& operator=(const TCountDistinctSetStorage&);
  TCountDistinctSetStorage() : bitmap() {
  }

  virtual ~TCountDistinctSetStorage() throw();
  std::string bitmap;
  std::set<int64_t>  sparse_set;

  _TCountDistinctSetStorage__isset __isset;

  void __set_bitmap(const std::string& val);

  void __set_sparse_set(const std::set<int64_t> & val);

  bool operator == (const TCountDistinctSetStorage & rhs) const
  {
    if (__isset.bitmap != rhs.__isset.bitmap)
      return false;
    else if (__isset.bitmap && !(bitmap == rhs.bitmap))
      return false;
    if (__isset.sparse_set != rhs.__isset.sparse_set)
      return false;
    else if (__isset.sparse_set && !(sparse_set == rhs.sparse_set))
      return false;
    return true;
  }
  bool operator != (const TCountDistinctSetStorage &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TCountDistinctSetStorage & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TCountDistinctSetStorage &a, TCountDistinctSetStorage &b);

std::ostream& operator<<(std::ostream& out, const TCountDistinctSetStorage& obj);

typedef struct _TCountDistinctSet__isset {
  _TCountDistinctSet__isset() : type(false), storage(false), remote_ptr(false) {}
  bool type :1;
  bool storage :1;
  bool remote_ptr :1;
} _TCountDistinctSet__isset;

class TCountDistinctSet : public virtual ::apache::thrift::TBase {
 public:

  TCountDistinctSet(const TCountDistinctSet&);
  TCountDistinctSet& operator=(const TCountDistinctSet&);
  TCountDistinctSet() : type((TCountDistinctImplType::type)0), remote_ptr(0) {
  }

  virtual ~TCountDistinctSet() throw();
  TCountDistinctImplType::type type;
  TCountDistinctSetStorage storage;
  int64_t remote_ptr;

  _TCountDistinctSet__isset __isset;

  void __set_type(const TCountDistinctImplType::type val);

  void __set_storage(const TCountDistinctSetStorage& val);

  void __set_remote_ptr(const int64_t val);

  bool operator == (const TCountDistinctSet & rhs) const
  {
    if (!(type == rhs.type))
      return false;
    if (!(storage == rhs.storage))
      return false;
    if (!(remote_ptr == rhs.remote_ptr))
      return false;
    return true;
  }
  bool operator != (const TCountDistinctSet &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TCountDistinctSet & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TCountDistinctSet &a, TCountDistinctSet &b);

std::ostream& operator<<(std::ostream& out, const TCountDistinctSet& obj);

typedef struct _TSerializedRows__isset {
  _TSerializedRows__isset() : buffers(false), buffer_lengths(false), buffers_total_size(false), total_compression_time_ms(false), descriptor(false), targets(false), target_init_vals(false), varlen_buffer(false), count_distinct_sets(false), explanation(false) {}
  bool buffers :1;
  bool buffer_lengths :1;
  bool buffers_total_size :1;
  bool total_compression_time_ms :1;
  bool descriptor :1;
  bool targets :1;
  bool target_init_vals :1;
  bool varlen_buffer :1;
  bool count_distinct_sets :1;
  bool explanation :1;
} _TSerializedRows__isset;

class TSerializedRows : public virtual ::apache::thrift::TBase {
 public:

  TSerializedRows(const TSerializedRows&);
  TSerializedRows& operator=(const TSerializedRows&);
  TSerializedRows() : buffers_total_size(0), total_compression_time_ms(0), explanation() {
  }

  virtual ~TSerializedRows() throw();
  std::vector<std::string>  buffers;
  std::vector<int64_t>  buffer_lengths;
  int64_t buffers_total_size;
  int32_t total_compression_time_ms;
  TResultSetBufferDescriptor descriptor;
  std::vector<TTargetInfo>  targets;
  std::vector<int64_t>  target_init_vals;
  std::vector<std::string>  varlen_buffer;
  std::vector<TCountDistinctSet>  count_distinct_sets;
  std::string explanation;

  _TSerializedRows__isset __isset;

  void __set_buffers(const std::vector<std::string> & val);

  void __set_buffer_lengths(const std::vector<int64_t> & val);

  void __set_buffers_total_size(const int64_t val);

  void __set_total_compression_time_ms(const int32_t val);

  void __set_descriptor(const TResultSetBufferDescriptor& val);

  void __set_targets(const std::vector<TTargetInfo> & val);

  void __set_target_init_vals(const std::vector<int64_t> & val);

  void __set_varlen_buffer(const std::vector<std::string> & val);

  void __set_count_distinct_sets(const std::vector<TCountDistinctSet> & val);

  void __set_explanation(const std::string& val);

  bool operator == (const TSerializedRows & rhs) const
  {
    if (!(buffers == rhs.buffers))
      return false;
    if (!(buffer_lengths == rhs.buffer_lengths))
      return false;
    if (!(buffers_total_size == rhs.buffers_total_size))
      return false;
    if (!(total_compression_time_ms == rhs.total_compression_time_ms))
      return false;
    if (!(descriptor == rhs.descriptor))
      return false;
    if (!(targets == rhs.targets))
      return false;
    if (!(target_init_vals == rhs.target_init_vals))
      return false;
    if (!(varlen_buffer == rhs.varlen_buffer))
      return false;
    if (!(count_distinct_sets == rhs.count_distinct_sets))
      return false;
    if (!(explanation == rhs.explanation))
      return false;
    return true;
  }
  bool operator != (const TSerializedRows &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TSerializedRows & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(TSerializedRows &a, TSerializedRows &b);

std::ostream& operator<<(std::ostream& out, const TSerializedRows& obj);



#endif
