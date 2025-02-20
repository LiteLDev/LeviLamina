#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaReader.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class PropertyReader; }
// clang-format on

namespace cereal {

class BinarySchemaReader : public ::cereal::SchemaReader {
public:
    // BinarySchemaReader inner types define
    enum class ElemType : int {
        None   = 0,
        Object = 1,
        Array  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc01ff2;
    ::ll::UntypedStorage<8, 24> mUnk630b01;
    ::ll::UntypedStorage<8, 8>  mUnk8c8dc5;
    ::ll::UntypedStorage<8, 8>  mUnk8ab3e6;
    ::ll::UntypedStorage<4, 4>  mUnkae68a4;
    // NOLINTEND

public:
    // prevent constructor by default
    BinarySchemaReader& operator=(BinarySchemaReader const&);
    BinarySchemaReader(BinarySchemaReader const&);
    BinarySchemaReader();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool isValid() const /*override*/;

    // vIndex: 2
    virtual bool isObject() const /*override*/;

    // vIndex: 3
    virtual bool isArray() const /*override*/;

    // vIndex: 4
    virtual bool isNull() const /*override*/;

    // vIndex: 5
    virtual ::Bedrock::Result<bool> asBool(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 6
    virtual ::Bedrock::Result<schar> asInt8(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 7
    virtual ::Bedrock::Result<uchar> asUInt8(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<short> asInt16(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 9
    virtual ::Bedrock::Result<ushort> asUInt16(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 10
    virtual ::Bedrock::Result<int> asInt32(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 11
    virtual ::Bedrock::Result<uint> asUInt32(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 12
    virtual ::Bedrock::Result<int64> asInt64(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 13
    virtual ::Bedrock::Result<uint64> asUInt64(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 14
    virtual ::Bedrock::Result<float> asFloat(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 15
    virtual ::Bedrock::Result<double> asDouble(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 16
    virtual ::Bedrock::Result<::std::string> asString(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 17
    virtual uint64 members() /*override*/;

    // vIndex: 18
    virtual uint64 length() /*override*/;

    // vIndex: 19
    virtual bool pushMember(::std::string_view const, ::cereal::PropertyReader const& prop) /*override*/;

    // vIndex: 20
    virtual ::std::string_view pushNextMember(::cereal::PropertyReader const& prop) /*override*/;

    // vIndex: 21
    virtual void pushElement(uint64, ::cereal::PropertyReader const& prop) /*override*/;

    // vIndex: 22
    virtual void pop() /*override*/;

    // vIndex: 23
    virtual bool isSequenceReader() const /*override*/;

    // vIndex: 0
    virtual ~BinarySchemaReader() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void pushStateIf(::cereal::PropertyReader const& prop);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isValid() const;

    MCAPI bool $isObject() const;

    MCAPI bool $isArray() const;

    MCFOLD bool $isNull() const;

    MCAPI ::Bedrock::Result<bool> $asBool(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<schar> $asInt8(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<uchar> $asUInt8(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<short> $asInt16(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<ushort> $asUInt16(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<int> $asInt32(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<uint> $asUInt32(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<int64> $asInt64(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<uint64> $asUInt64(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<float> $asFloat(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<double> $asDouble(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<::std::string> $asString(::cereal::PropertyReader const&);

    MCFOLD uint64 $members();

    MCAPI uint64 $length();

    MCAPI bool $pushMember(::std::string_view const, ::cereal::PropertyReader const& prop);

    MCAPI ::std::string_view $pushNextMember(::cereal::PropertyReader const& prop);

    MCAPI void $pushElement(uint64, ::cereal::PropertyReader const& prop);

    MCAPI void $pop();

    MCFOLD bool $isSequenceReader() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
