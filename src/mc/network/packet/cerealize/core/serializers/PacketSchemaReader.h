#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaReader.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

class PacketSchemaReader : public ::cereal::SchemaReader {
public:
    // PacketSchemaReader inner types define
    enum class ElemType : int {
        None   = 0,
        Object = 1,
        Array  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ReadOnlyBinaryStream&>        mStream;
    ::ll::TypedStorage<4, 4, ::PacketSchemaReader::ElemType> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketSchemaReader& operator=(PacketSchemaReader const&);
    PacketSchemaReader(PacketSchemaReader const&);
    PacketSchemaReader();

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
    virtual ~PacketSchemaReader() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isValid() const;

    MCFOLD bool $isObject() const;

    MCFOLD bool $isArray() const;

    MCFOLD bool $isNull() const;

    MCFOLD ::Bedrock::Result<bool> $asBool();

    MCAPI ::Bedrock::Result<schar> $asInt8();

    MCFOLD ::Bedrock::Result<uchar> $asUInt8();

    MCFOLD ::Bedrock::Result<short> $asInt16();

    MCFOLD ::Bedrock::Result<ushort> $asUInt16();

    MCFOLD ::Bedrock::Result<int> $asInt32();

    MCFOLD ::Bedrock::Result<uint> $asUInt32();

    MCFOLD ::Bedrock::Result<int64> $asInt64();

    MCFOLD ::Bedrock::Result<uint64> $asUInt64();

    MCFOLD ::Bedrock::Result<float> $asFloat();

    MCFOLD ::Bedrock::Result<double> $asDouble();

    MCAPI ::Bedrock::Result<::std::string> $asString();

    MCFOLD uint64 $members();

    MCFOLD uint64 $length();

    MCFOLD bool $pushMember(::std::string_view const);

    MCFOLD ::std::string_view $pushNextMember();

    MCFOLD void $pushElement(uint64);

    MCFOLD void $pop();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
