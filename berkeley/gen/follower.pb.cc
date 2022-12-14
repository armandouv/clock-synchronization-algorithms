// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: follower.proto

#include "follower.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
constexpr GetTimeRequest::GetTimeRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct GetTimeRequestDefaultTypeInternal {
  constexpr GetTimeRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~GetTimeRequestDefaultTypeInternal() {}
  union {
    GetTimeRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT GetTimeRequestDefaultTypeInternal _GetTimeRequest_default_instance_;
constexpr SetTimeResponse::SetTimeResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct SetTimeResponseDefaultTypeInternal {
  constexpr SetTimeResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~SetTimeResponseDefaultTypeInternal() {}
  union {
    SetTimeResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT SetTimeResponseDefaultTypeInternal _SetTimeResponse_default_instance_;
constexpr SetTimeRequest::SetTimeRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : delta_(nullptr)
  , olddelta_(nullptr){}
struct SetTimeRequestDefaultTypeInternal {
  constexpr SetTimeRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~SetTimeRequestDefaultTypeInternal() {}
  union {
    SetTimeRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT SetTimeRequestDefaultTypeInternal _SetTimeRequest_default_instance_;
constexpr Timeval::Timeval(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : seconds_(int64_t{0})
  , microseconds_(int64_t{0}){}
struct TimevalDefaultTypeInternal {
  constexpr TimevalDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~TimevalDefaultTypeInternal() {}
  union {
    Timeval _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT TimevalDefaultTypeInternal _Timeval_default_instance_;
constexpr Timespec::Timespec(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : seconds_(int64_t{0})
  , nanoseconds_(int64_t{0}){}
struct TimespecDefaultTypeInternal {
  constexpr TimespecDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~TimespecDefaultTypeInternal() {}
  union {
    Timespec _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT TimespecDefaultTypeInternal _Timespec_default_instance_;
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_follower_2eproto[5];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_follower_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_follower_2eproto = nullptr;

const uint32_t TableStruct_follower_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::GetTimeRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::SetTimeResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::SetTimeRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::SetTimeRequest, delta_),
  PROTOBUF_FIELD_OFFSET(::SetTimeRequest, olddelta_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Timeval, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Timeval, seconds_),
  PROTOBUF_FIELD_OFFSET(::Timeval, microseconds_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Timespec, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Timespec, seconds_),
  PROTOBUF_FIELD_OFFSET(::Timespec, nanoseconds_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::GetTimeRequest)},
  { 6, -1, -1, sizeof(::SetTimeResponse)},
  { 12, -1, -1, sizeof(::SetTimeRequest)},
  { 20, -1, -1, sizeof(::Timeval)},
  { 28, -1, -1, sizeof(::Timespec)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_GetTimeRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_SetTimeResponse_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_SetTimeRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_Timeval_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_Timespec_default_instance_),
};

const char descriptor_table_protodef_follower_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016follower.proto\"\020\n\016GetTimeRequest\"\021\n\017Se"
  "tTimeResponse\"E\n\016SetTimeRequest\022\027\n\005delta"
  "\030\001 \001(\0132\010.Timeval\022\032\n\010oldDelta\030\002 \001(\0132\010.Tim"
  "eval\"0\n\007Timeval\022\017\n\007seconds\030\001 \001(\003\022\024\n\014micr"
  "oseconds\030\002 \001(\003\"0\n\010Timespec\022\017\n\007seconds\030\001 "
  "\001(\003\022\023\n\013nanoseconds\030\002 \001(\0032c\n\010Follower\022\'\n\007"
  "GetTime\022\017.GetTimeRequest\032\t.Timespec\"\000\022.\n"
  "\007SetTime\022\017.SetTimeRequest\032\020.SetTimeRespo"
  "nse\"\000b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_follower_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_follower_2eproto = {
  false, false, 333, descriptor_table_protodef_follower_2eproto, "follower.proto", 
  &descriptor_table_follower_2eproto_once, nullptr, 0, 5,
  schemas, file_default_instances, TableStruct_follower_2eproto::offsets,
  file_level_metadata_follower_2eproto, file_level_enum_descriptors_follower_2eproto, file_level_service_descriptors_follower_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_follower_2eproto_getter() {
  return &descriptor_table_follower_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_follower_2eproto(&descriptor_table_follower_2eproto);

// ===================================================================

class GetTimeRequest::_Internal {
 public:
};

GetTimeRequest::GetTimeRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase(arena, is_message_owned) {
  // @@protoc_insertion_point(arena_constructor:GetTimeRequest)
}
GetTimeRequest::GetTimeRequest(const GetTimeRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:GetTimeRequest)
}





const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GetTimeRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl,
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl,
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetTimeRequest::GetClassData() const { return &_class_data_; }







::PROTOBUF_NAMESPACE_ID::Metadata GetTimeRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_follower_2eproto_getter, &descriptor_table_follower_2eproto_once,
      file_level_metadata_follower_2eproto[0]);
}

// ===================================================================

class SetTimeResponse::_Internal {
 public:
};

SetTimeResponse::SetTimeResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase(arena, is_message_owned) {
  // @@protoc_insertion_point(arena_constructor:SetTimeResponse)
}
SetTimeResponse::SetTimeResponse(const SetTimeResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:SetTimeResponse)
}





const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SetTimeResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl,
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl,
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SetTimeResponse::GetClassData() const { return &_class_data_; }







::PROTOBUF_NAMESPACE_ID::Metadata SetTimeResponse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_follower_2eproto_getter, &descriptor_table_follower_2eproto_once,
      file_level_metadata_follower_2eproto[1]);
}

// ===================================================================

class SetTimeRequest::_Internal {
 public:
  static const ::Timeval& delta(const SetTimeRequest* msg);
  static const ::Timeval& olddelta(const SetTimeRequest* msg);
};

const ::Timeval&
SetTimeRequest::_Internal::delta(const SetTimeRequest* msg) {
  return *msg->delta_;
}
const ::Timeval&
SetTimeRequest::_Internal::olddelta(const SetTimeRequest* msg) {
  return *msg->olddelta_;
}
SetTimeRequest::SetTimeRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:SetTimeRequest)
}
SetTimeRequest::SetTimeRequest(const SetTimeRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_delta()) {
    delta_ = new ::Timeval(*from.delta_);
  } else {
    delta_ = nullptr;
  }
  if (from._internal_has_olddelta()) {
    olddelta_ = new ::Timeval(*from.olddelta_);
  } else {
    olddelta_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:SetTimeRequest)
}

inline void SetTimeRequest::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&delta_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&olddelta_) -
    reinterpret_cast<char*>(&delta_)) + sizeof(olddelta_));
}

SetTimeRequest::~SetTimeRequest() {
  // @@protoc_insertion_point(destructor:SetTimeRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void SetTimeRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete delta_;
  if (this != internal_default_instance()) delete olddelta_;
}

void SetTimeRequest::ArenaDtor(void* object) {
  SetTimeRequest* _this = reinterpret_cast< SetTimeRequest* >(object);
  (void)_this;
}
void SetTimeRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SetTimeRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void SetTimeRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:SetTimeRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && delta_ != nullptr) {
    delete delta_;
  }
  delta_ = nullptr;
  if (GetArenaForAllocation() == nullptr && olddelta_ != nullptr) {
    delete olddelta_;
  }
  olddelta_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SetTimeRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .Timeval delta = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_delta(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .Timeval oldDelta = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_olddelta(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SetTimeRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:SetTimeRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .Timeval delta = 1;
  if (this->_internal_has_delta()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::delta(this), target, stream);
  }

  // .Timeval oldDelta = 2;
  if (this->_internal_has_olddelta()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::olddelta(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SetTimeRequest)
  return target;
}

size_t SetTimeRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SetTimeRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .Timeval delta = 1;
  if (this->_internal_has_delta()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *delta_);
  }

  // .Timeval oldDelta = 2;
  if (this->_internal_has_olddelta()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *olddelta_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SetTimeRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    SetTimeRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SetTimeRequest::GetClassData() const { return &_class_data_; }

void SetTimeRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<SetTimeRequest *>(to)->MergeFrom(
      static_cast<const SetTimeRequest &>(from));
}


void SetTimeRequest::MergeFrom(const SetTimeRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:SetTimeRequest)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_delta()) {
    _internal_mutable_delta()->::Timeval::MergeFrom(from._internal_delta());
  }
  if (from._internal_has_olddelta()) {
    _internal_mutable_olddelta()->::Timeval::MergeFrom(from._internal_olddelta());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SetTimeRequest::CopyFrom(const SetTimeRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SetTimeRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SetTimeRequest::IsInitialized() const {
  return true;
}

void SetTimeRequest::InternalSwap(SetTimeRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SetTimeRequest, olddelta_)
      + sizeof(SetTimeRequest::olddelta_)
      - PROTOBUF_FIELD_OFFSET(SetTimeRequest, delta_)>(
          reinterpret_cast<char*>(&delta_),
          reinterpret_cast<char*>(&other->delta_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SetTimeRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_follower_2eproto_getter, &descriptor_table_follower_2eproto_once,
      file_level_metadata_follower_2eproto[2]);
}

// ===================================================================

class Timeval::_Internal {
 public:
};

Timeval::Timeval(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:Timeval)
}
Timeval::Timeval(const Timeval& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&seconds_, &from.seconds_,
    static_cast<size_t>(reinterpret_cast<char*>(&microseconds_) -
    reinterpret_cast<char*>(&seconds_)) + sizeof(microseconds_));
  // @@protoc_insertion_point(copy_constructor:Timeval)
}

inline void Timeval::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&seconds_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&microseconds_) -
    reinterpret_cast<char*>(&seconds_)) + sizeof(microseconds_));
}

Timeval::~Timeval() {
  // @@protoc_insertion_point(destructor:Timeval)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Timeval::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Timeval::ArenaDtor(void* object) {
  Timeval* _this = reinterpret_cast< Timeval* >(object);
  (void)_this;
}
void Timeval::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Timeval::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Timeval::Clear() {
// @@protoc_insertion_point(message_clear_start:Timeval)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&seconds_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&microseconds_) -
      reinterpret_cast<char*>(&seconds_)) + sizeof(microseconds_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Timeval::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int64 seconds = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          seconds_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 microseconds = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          microseconds_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Timeval::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Timeval)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 seconds = 1;
  if (this->_internal_seconds() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(1, this->_internal_seconds(), target);
  }

  // int64 microseconds = 2;
  if (this->_internal_microseconds() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(2, this->_internal_microseconds(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Timeval)
  return target;
}

size_t Timeval::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Timeval)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int64 seconds = 1;
  if (this->_internal_seconds() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64SizePlusOne(this->_internal_seconds());
  }

  // int64 microseconds = 2;
  if (this->_internal_microseconds() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64SizePlusOne(this->_internal_microseconds());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Timeval::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Timeval::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Timeval::GetClassData() const { return &_class_data_; }

void Timeval::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Timeval *>(to)->MergeFrom(
      static_cast<const Timeval &>(from));
}


void Timeval::MergeFrom(const Timeval& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Timeval)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_seconds() != 0) {
    _internal_set_seconds(from._internal_seconds());
  }
  if (from._internal_microseconds() != 0) {
    _internal_set_microseconds(from._internal_microseconds());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Timeval::CopyFrom(const Timeval& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Timeval)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Timeval::IsInitialized() const {
  return true;
}

void Timeval::InternalSwap(Timeval* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Timeval, microseconds_)
      + sizeof(Timeval::microseconds_)
      - PROTOBUF_FIELD_OFFSET(Timeval, seconds_)>(
          reinterpret_cast<char*>(&seconds_),
          reinterpret_cast<char*>(&other->seconds_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Timeval::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_follower_2eproto_getter, &descriptor_table_follower_2eproto_once,
      file_level_metadata_follower_2eproto[3]);
}

// ===================================================================

class Timespec::_Internal {
 public:
};

Timespec::Timespec(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:Timespec)
}
Timespec::Timespec(const Timespec& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&seconds_, &from.seconds_,
    static_cast<size_t>(reinterpret_cast<char*>(&nanoseconds_) -
    reinterpret_cast<char*>(&seconds_)) + sizeof(nanoseconds_));
  // @@protoc_insertion_point(copy_constructor:Timespec)
}

inline void Timespec::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&seconds_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&nanoseconds_) -
    reinterpret_cast<char*>(&seconds_)) + sizeof(nanoseconds_));
}

Timespec::~Timespec() {
  // @@protoc_insertion_point(destructor:Timespec)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Timespec::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Timespec::ArenaDtor(void* object) {
  Timespec* _this = reinterpret_cast< Timespec* >(object);
  (void)_this;
}
void Timespec::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Timespec::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Timespec::Clear() {
// @@protoc_insertion_point(message_clear_start:Timespec)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&seconds_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&nanoseconds_) -
      reinterpret_cast<char*>(&seconds_)) + sizeof(nanoseconds_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Timespec::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int64 seconds = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          seconds_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 nanoseconds = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          nanoseconds_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Timespec::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Timespec)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 seconds = 1;
  if (this->_internal_seconds() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(1, this->_internal_seconds(), target);
  }

  // int64 nanoseconds = 2;
  if (this->_internal_nanoseconds() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(2, this->_internal_nanoseconds(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Timespec)
  return target;
}

size_t Timespec::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Timespec)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int64 seconds = 1;
  if (this->_internal_seconds() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64SizePlusOne(this->_internal_seconds());
  }

  // int64 nanoseconds = 2;
  if (this->_internal_nanoseconds() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64SizePlusOne(this->_internal_nanoseconds());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Timespec::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Timespec::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Timespec::GetClassData() const { return &_class_data_; }

void Timespec::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Timespec *>(to)->MergeFrom(
      static_cast<const Timespec &>(from));
}


void Timespec::MergeFrom(const Timespec& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Timespec)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_seconds() != 0) {
    _internal_set_seconds(from._internal_seconds());
  }
  if (from._internal_nanoseconds() != 0) {
    _internal_set_nanoseconds(from._internal_nanoseconds());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Timespec::CopyFrom(const Timespec& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Timespec)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Timespec::IsInitialized() const {
  return true;
}

void Timespec::InternalSwap(Timespec* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Timespec, nanoseconds_)
      + sizeof(Timespec::nanoseconds_)
      - PROTOBUF_FIELD_OFFSET(Timespec, seconds_)>(
          reinterpret_cast<char*>(&seconds_),
          reinterpret_cast<char*>(&other->seconds_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Timespec::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_follower_2eproto_getter, &descriptor_table_follower_2eproto_once,
      file_level_metadata_follower_2eproto[4]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::GetTimeRequest* Arena::CreateMaybeMessage< ::GetTimeRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::GetTimeRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::SetTimeResponse* Arena::CreateMaybeMessage< ::SetTimeResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::SetTimeResponse >(arena);
}
template<> PROTOBUF_NOINLINE ::SetTimeRequest* Arena::CreateMaybeMessage< ::SetTimeRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::SetTimeRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::Timeval* Arena::CreateMaybeMessage< ::Timeval >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Timeval >(arena);
}
template<> PROTOBUF_NOINLINE ::Timespec* Arena::CreateMaybeMessage< ::Timespec >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Timespec >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
