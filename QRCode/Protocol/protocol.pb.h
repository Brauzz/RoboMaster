// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocol.proto

#ifndef PROTOBUF_protocol_2eproto__INCLUDED
#define PROTOBUF_protocol_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
class Message;
class MessageDefaultTypeInternal;
extern MessageDefaultTypeInternal _Message_default_instance_;
class PosPoint;
class PosPointDefaultTypeInternal;
extern PosPointDefaultTypeInternal _PosPoint_default_instance_;
class ScanResult;
class ScanResultDefaultTypeInternal;
extern ScanResultDefaultTypeInternal _ScanResult_default_instance_;

namespace protobuf_protocol_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_protocol_2eproto

enum Message_MessageType {
  Message_MessageType_NULL_ = 0,
  Message_MessageType_ScanResult = 1,
  Message_MessageType_Message_MessageType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Message_MessageType_Message_MessageType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Message_MessageType_IsValid(int value);
const Message_MessageType Message_MessageType_MessageType_MIN = Message_MessageType_NULL_;
const Message_MessageType Message_MessageType_MessageType_MAX = Message_MessageType_ScanResult;
const int Message_MessageType_MessageType_ARRAYSIZE = Message_MessageType_MessageType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Message_MessageType_descriptor();
inline const ::std::string& Message_MessageType_Name(Message_MessageType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Message_MessageType_descriptor(), value);
}
inline bool Message_MessageType_Parse(
    const ::std::string& name, Message_MessageType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Message_MessageType>(
    Message_MessageType_descriptor(), name, value);
}
// ===================================================================

class PosPoint : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PosPoint) */ {
 public:
  PosPoint();
  virtual ~PosPoint();

  PosPoint(const PosPoint& from);

  inline PosPoint& operator=(const PosPoint& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PosPoint& default_instance();

  static inline const PosPoint* internal_default_instance() {
    return reinterpret_cast<const PosPoint*>(
               &_PosPoint_default_instance_);
  }

  void Swap(PosPoint* other);

  // implements Message ----------------------------------------------

  inline PosPoint* New() const PROTOBUF_FINAL { return New(NULL); }

  PosPoint* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const PosPoint& from);
  void MergeFrom(const PosPoint& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(PosPoint* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // float x = 1;
  void clear_x();
  static const int kXFieldNumber = 1;
  float x() const;
  void set_x(float value);

  // float y = 2;
  void clear_y();
  static const int kYFieldNumber = 2;
  float y() const;
  void set_y(float value);

  // @@protoc_insertion_point(class_scope:PosPoint)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  float x_;
  float y_;
  mutable int _cached_size_;
  friend struct  protobuf_protocol_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ScanResult : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ScanResult) */ {
 public:
  ScanResult();
  virtual ~ScanResult();

  ScanResult(const ScanResult& from);

  inline ScanResult& operator=(const ScanResult& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ScanResult& default_instance();

  static inline const ScanResult* internal_default_instance() {
    return reinterpret_cast<const ScanResult*>(
               &_ScanResult_default_instance_);
  }

  void Swap(ScanResult* other);

  // implements Message ----------------------------------------------

  inline ScanResult* New() const PROTOBUF_FINAL { return New(NULL); }

  ScanResult* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ScanResult& from);
  void MergeFrom(const ScanResult& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ScanResult* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .PosPoint position = 1;
  int position_size() const;
  void clear_position();
  static const int kPositionFieldNumber = 1;
  const ::PosPoint& position(int index) const;
  ::PosPoint* mutable_position(int index);
  ::PosPoint* add_position();
  ::google::protobuf::RepeatedPtrField< ::PosPoint >*
      mutable_position();
  const ::google::protobuf::RepeatedPtrField< ::PosPoint >&
      position() const;

  // string result = 2;
  void clear_result();
  static const int kResultFieldNumber = 2;
  const ::std::string& result() const;
  void set_result(const ::std::string& value);
  #if LANG_CXX11
  void set_result(::std::string&& value);
  #endif
  void set_result(const char* value);
  void set_result(const char* value, size_t size);
  ::std::string* mutable_result();
  ::std::string* release_result();
  void set_allocated_result(::std::string* result);

  // .PosPoint picrutesize = 4;
  bool has_picrutesize() const;
  void clear_picrutesize();
  static const int kPicrutesizeFieldNumber = 4;
  const ::PosPoint& picrutesize() const;
  ::PosPoint* mutable_picrutesize();
  ::PosPoint* release_picrutesize();
  void set_allocated_picrutesize(::PosPoint* picrutesize);

  // float angle = 3;
  void clear_angle();
  static const int kAngleFieldNumber = 3;
  float angle() const;
  void set_angle(float value);

  // @@protoc_insertion_point(class_scope:ScanResult)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::PosPoint > position_;
  ::google::protobuf::internal::ArenaStringPtr result_;
  ::PosPoint* picrutesize_;
  float angle_;
  mutable int _cached_size_;
  friend struct  protobuf_protocol_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Message : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Message) */ {
 public:
  Message();
  virtual ~Message();

  Message(const Message& from);

  inline Message& operator=(const Message& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Message& default_instance();

  static inline const Message* internal_default_instance() {
    return reinterpret_cast<const Message*>(
               &_Message_default_instance_);
  }

  void Swap(Message* other);

  // implements Message ----------------------------------------------

  inline Message* New() const PROTOBUF_FINAL { return New(NULL); }

  Message* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Message& from);
  void MergeFrom(const Message& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Message* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef Message_MessageType MessageType;
  static const MessageType NULL_ =
    Message_MessageType_NULL_;
  static const MessageType ScanResult =
    Message_MessageType_ScanResult;
  static inline bool MessageType_IsValid(int value) {
    return Message_MessageType_IsValid(value);
  }
  static const MessageType MessageType_MIN =
    Message_MessageType_MessageType_MIN;
  static const MessageType MessageType_MAX =
    Message_MessageType_MessageType_MAX;
  static const int MessageType_ARRAYSIZE =
    Message_MessageType_MessageType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  MessageType_descriptor() {
    return Message_MessageType_descriptor();
  }
  static inline const ::std::string& MessageType_Name(MessageType value) {
    return Message_MessageType_Name(value);
  }
  static inline bool MessageType_Parse(const ::std::string& name,
      MessageType* value) {
    return Message_MessageType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // bytes data = 2;
  void clear_data();
  static const int kDataFieldNumber = 2;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  #if LANG_CXX11
  void set_data(::std::string&& value);
  #endif
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  ::std::string* mutable_data();
  ::std::string* release_data();
  void set_allocated_data(::std::string* data);

  // .Message.MessageType messagetype = 1;
  void clear_messagetype();
  static const int kMessagetypeFieldNumber = 1;
  ::Message_MessageType messagetype() const;
  void set_messagetype(::Message_MessageType value);

  // @@protoc_insertion_point(class_scope:Message)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  int messagetype_;
  mutable int _cached_size_;
  friend struct  protobuf_protocol_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// PosPoint

// float x = 1;
inline void PosPoint::clear_x() {
  x_ = 0;
}
inline float PosPoint::x() const {
  // @@protoc_insertion_point(field_get:PosPoint.x)
  return x_;
}
inline void PosPoint::set_x(float value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:PosPoint.x)
}

// float y = 2;
inline void PosPoint::clear_y() {
  y_ = 0;
}
inline float PosPoint::y() const {
  // @@protoc_insertion_point(field_get:PosPoint.y)
  return y_;
}
inline void PosPoint::set_y(float value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:PosPoint.y)
}

// -------------------------------------------------------------------

// ScanResult

// repeated .PosPoint position = 1;
inline int ScanResult::position_size() const {
  return position_.size();
}
inline void ScanResult::clear_position() {
  position_.Clear();
}
inline const ::PosPoint& ScanResult::position(int index) const {
  // @@protoc_insertion_point(field_get:ScanResult.position)
  return position_.Get(index);
}
inline ::PosPoint* ScanResult::mutable_position(int index) {
  // @@protoc_insertion_point(field_mutable:ScanResult.position)
  return position_.Mutable(index);
}
inline ::PosPoint* ScanResult::add_position() {
  // @@protoc_insertion_point(field_add:ScanResult.position)
  return position_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::PosPoint >*
ScanResult::mutable_position() {
  // @@protoc_insertion_point(field_mutable_list:ScanResult.position)
  return &position_;
}
inline const ::google::protobuf::RepeatedPtrField< ::PosPoint >&
ScanResult::position() const {
  // @@protoc_insertion_point(field_list:ScanResult.position)
  return position_;
}

// .PosPoint picrutesize = 4;
inline bool ScanResult::has_picrutesize() const {
  return this != internal_default_instance() && picrutesize_ != NULL;
}
inline void ScanResult::clear_picrutesize() {
  if (GetArenaNoVirtual() == NULL && picrutesize_ != NULL) delete picrutesize_;
  picrutesize_ = NULL;
}
inline const ::PosPoint& ScanResult::picrutesize() const {
  // @@protoc_insertion_point(field_get:ScanResult.picrutesize)
  return picrutesize_ != NULL ? *picrutesize_
                         : *::PosPoint::internal_default_instance();
}
inline ::PosPoint* ScanResult::mutable_picrutesize() {
  
  if (picrutesize_ == NULL) {
    picrutesize_ = new ::PosPoint;
  }
  // @@protoc_insertion_point(field_mutable:ScanResult.picrutesize)
  return picrutesize_;
}
inline ::PosPoint* ScanResult::release_picrutesize() {
  // @@protoc_insertion_point(field_release:ScanResult.picrutesize)
  
  ::PosPoint* temp = picrutesize_;
  picrutesize_ = NULL;
  return temp;
}
inline void ScanResult::set_allocated_picrutesize(::PosPoint* picrutesize) {
  delete picrutesize_;
  picrutesize_ = picrutesize;
  if (picrutesize) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:ScanResult.picrutesize)
}

// string result = 2;
inline void ScanResult::clear_result() {
  result_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ScanResult::result() const {
  // @@protoc_insertion_point(field_get:ScanResult.result)
  return result_.GetNoArena();
}
inline void ScanResult::set_result(const ::std::string& value) {
  
  result_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ScanResult.result)
}
#if LANG_CXX11
inline void ScanResult::set_result(::std::string&& value) {
  
  result_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ScanResult.result)
}
#endif
inline void ScanResult::set_result(const char* value) {
  
  result_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ScanResult.result)
}
inline void ScanResult::set_result(const char* value, size_t size) {
  
  result_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ScanResult.result)
}
inline ::std::string* ScanResult::mutable_result() {
  
  // @@protoc_insertion_point(field_mutable:ScanResult.result)
  return result_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ScanResult::release_result() {
  // @@protoc_insertion_point(field_release:ScanResult.result)
  
  return result_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ScanResult::set_allocated_result(::std::string* result) {
  if (result != NULL) {
    
  } else {
    
  }
  result_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), result);
  // @@protoc_insertion_point(field_set_allocated:ScanResult.result)
}

// float angle = 3;
inline void ScanResult::clear_angle() {
  angle_ = 0;
}
inline float ScanResult::angle() const {
  // @@protoc_insertion_point(field_get:ScanResult.angle)
  return angle_;
}
inline void ScanResult::set_angle(float value) {
  
  angle_ = value;
  // @@protoc_insertion_point(field_set:ScanResult.angle)
}

// -------------------------------------------------------------------

// Message

// .Message.MessageType messagetype = 1;
inline void Message::clear_messagetype() {
  messagetype_ = 0;
}
inline ::Message_MessageType Message::messagetype() const {
  // @@protoc_insertion_point(field_get:Message.messagetype)
  return static_cast< ::Message_MessageType >(messagetype_);
}
inline void Message::set_messagetype(::Message_MessageType value) {
  
  messagetype_ = value;
  // @@protoc_insertion_point(field_set:Message.messagetype)
}

// bytes data = 2;
inline void Message::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Message::data() const {
  // @@protoc_insertion_point(field_get:Message.data)
  return data_.GetNoArena();
}
inline void Message::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Message.data)
}
#if LANG_CXX11
inline void Message::set_data(::std::string&& value) {
  
  data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Message.data)
}
#endif
inline void Message::set_data(const char* value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Message.data)
}
inline void Message::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Message.data)
}
inline ::std::string* Message::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:Message.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Message::release_data() {
  // @@protoc_insertion_point(field_release:Message.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Message::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:Message.data)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::Message_MessageType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Message_MessageType>() {
  return ::Message_MessageType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_protocol_2eproto__INCLUDED
