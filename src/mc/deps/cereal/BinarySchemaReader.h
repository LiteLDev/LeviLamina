#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaReader.h"
#include "mc/platform/Result.h"

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
    ::ll::UntypedStorage<8, 8> mUnk8ab3e6;
    ::ll::UntypedStorage<4, 4> mUnkae68a4;
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
    virtual ::Bedrock::Result<bool> asBool() /*override*/;

    // vIndex: 6
    virtual ::Bedrock::Result<schar> asInt8() /*override*/;

    // vIndex: 7
    virtual ::Bedrock::Result<uchar> asUInt8() /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<short> asInt16() /*override*/;

    // vIndex: 9
    virtual ::Bedrock::Result<ushort> asUInt16() /*override*/;

    // vIndex: 10
    virtual ::Bedrock::Result<int> asInt32() /*override*/;

    // vIndex: 11
    virtual ::Bedrock::Result<uint> asUInt32() /*override*/;

    // vIndex: 12
    virtual ::Bedrock::Result<int64> asInt64() /*override*/;

    // vIndex: 13
    virtual ::Bedrock::Result<uint64> asUInt64() /*override*/;

    // vIndex: 14
    virtual ::Bedrock::Result<float> asFloat() /*override*/;

    // vIndex: 15
    virtual ::Bedrock::Result<double> asDouble() /*override*/;

    // vIndex: 16
    virtual ::Bedrock::Result<::std::string> asString() /*override*/;

    // vIndex: 17
    virtual uint64 members() /*override*/;

    // vIndex: 18
    virtual uint64 length() /*override*/;

    // vIndex: 19
    virtual bool pushMember(::std::string_view const) /*override*/;

    // vIndex: 20
    virtual ::std::string_view pushNextMember() /*override*/;

    // vIndex: 21
    virtual void pushElement(uint64) /*override*/;

    // vIndex: 22
    virtual void pop() /*override*/;

    // vIndex: 0
    virtual ~BinarySchemaReader() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isValid() const;

    MCNAPI bool $isObject() const;

    MCNAPI bool $isArray() const;

    MCNAPI bool $isNull() const;

    MCNAPI ::Bedrock::Result<bool> $asBool();

    MCNAPI ::Bedrock::Result<schar> $asInt8();

    MCNAPI ::Bedrock::Result<uchar> $asUInt8();

    MCNAPI ::Bedrock::Result<short> $asInt16();

    MCNAPI ::Bedrock::Result<ushort> $asUInt16();

    MCNAPI ::Bedrock::Result<int> $asInt32();

    MCNAPI ::Bedrock::Result<uint> $asUInt32();

    MCNAPI ::Bedrock::Result<int64> $asInt64();

    MCNAPI ::Bedrock::Result<uint64> $asUInt64();

    MCNAPI ::Bedrock::Result<float> $asFloat();

    MCNAPI ::Bedrock::Result<double> $asDouble();

    MCNAPI ::Bedrock::Result<::std::string> $asString();

    MCNAPI uint64 $members();

    MCNAPI uint64 $length();

    MCNAPI bool $pushMember(::std::string_view const);

    MCNAPI ::std::string_view $pushNextMember();

    MCNAPI void $pushElement(uint64);

    MCNAPI void $pop();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
