// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#include "test.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_test {
class RecordDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Record>
      _instance;
} _Record_default_instance_;
}  // namespace protobuf_test
namespace protobuf_test_2eproto {
static void InitDefaultsRecord() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::protobuf_test::_Record_default_instance_;
    new (ptr) ::protobuf_test::Record();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::protobuf_test::Record::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Record =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsRecord}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Record.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protobuf_test::Record, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protobuf_test::Record, ids_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protobuf_test::Record, strings_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::protobuf_test::Record)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::protobuf_test::_Record_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "test.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\ntest.proto\022\rprotobuf_test\"&\n\006Record\022\013\n"
      "\003ids\030\001 \003(\003\022\017\n\007strings\030\002 \003(\tb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 75);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "test.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_test_2eproto
namespace protobuf_test {

// ===================================================================

void Record::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Record::kIdsFieldNumber;
const int Record::kStringsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Record::Record()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_test_2eproto::scc_info_Record.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:protobuf_test.Record)
}
Record::Record(const Record& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      ids_(from.ids_),
      strings_(from.strings_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:protobuf_test.Record)
}

void Record::SharedCtor() {
}

Record::~Record() {
  // @@protoc_insertion_point(destructor:protobuf_test.Record)
  SharedDtor();
}

void Record::SharedDtor() {
}

void Record::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Record::descriptor() {
  ::protobuf_test_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_test_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Record& Record::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_test_2eproto::scc_info_Record.base);
  return *internal_default_instance();
}


void Record::Clear() {
// @@protoc_insertion_point(message_clear_start:protobuf_test.Record)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ids_.Clear();
  strings_.Clear();
  _internal_metadata_.Clear();
}

bool Record::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protobuf_test.Record)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated int64 ids = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, this->mutable_ids())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 1, 10u, input, this->mutable_ids())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string strings = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_strings()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strings(this->strings_size() - 1).data(),
            static_cast<int>(this->strings(this->strings_size() - 1).length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protobuf_test.Record.strings"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protobuf_test.Record)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protobuf_test.Record)
  return false;
#undef DO_
}

void Record::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protobuf_test.Record)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int64 ids = 1;
  if (this->ids_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _ids_cached_byte_size_));
  }
  for (int i = 0, n = this->ids_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64NoTag(
      this->ids(i), output);
  }

  // repeated string strings = 2;
  for (int i = 0, n = this->strings_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strings(i).data(), static_cast<int>(this->strings(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protobuf_test.Record.strings");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->strings(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:protobuf_test.Record)
}

::google::protobuf::uint8* Record::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:protobuf_test.Record)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int64 ids = 1;
  if (this->ids_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::int32>(
            _ids_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt64NoTagToArray(this->ids_, target);
  }

  // repeated string strings = 2;
  for (int i = 0, n = this->strings_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strings(i).data(), static_cast<int>(this->strings(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protobuf_test.Record.strings");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->strings(i), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protobuf_test.Record)
  return target;
}

size_t Record::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protobuf_test.Record)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated int64 ids = 1;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      Int64Size(this->ids_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _ids_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated string strings = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->strings_size());
  for (int i = 0, n = this->strings_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->strings(i));
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Record::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protobuf_test.Record)
  GOOGLE_DCHECK_NE(&from, this);
  const Record* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Record>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protobuf_test.Record)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protobuf_test.Record)
    MergeFrom(*source);
  }
}

void Record::MergeFrom(const Record& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protobuf_test.Record)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  ids_.MergeFrom(from.ids_);
  strings_.MergeFrom(from.strings_);
}

void Record::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protobuf_test.Record)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Record::CopyFrom(const Record& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protobuf_test.Record)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Record::IsInitialized() const {
  return true;
}

void Record::Swap(Record* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Record::InternalSwap(Record* other) {
  using std::swap;
  ids_.InternalSwap(&other->ids_);
  strings_.InternalSwap(CastToBase(&other->strings_));
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Record::GetMetadata() const {
  protobuf_test_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_test_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf_test
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::protobuf_test::Record* Arena::CreateMaybeMessage< ::protobuf_test::Record >(Arena* arena) {
  return Arena::CreateInternal< ::protobuf_test::Record >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
