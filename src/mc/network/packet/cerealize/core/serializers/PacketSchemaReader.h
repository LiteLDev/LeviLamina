#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaRWType.h"
#include "mc/deps/cereal/schema/SchemaReader.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

class PacketSchemaReader : public ::cereal::SchemaReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ReadOnlyBinaryStream&> mStream;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketSchemaReader& operator=(PacketSchemaReader const&);
    PacketSchemaReader(PacketSchemaReader const&);
    PacketSchemaReader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isValid() const /*override*/;

    virtual ::cereal::SchemaRWType expectedType() const /*override*/;

    virtual ::Bedrock::Result<void> asNull() /*override*/;

    virtual ::Bedrock::Result<bool> asBool() /*override*/;

    virtual ::Bedrock::Result<schar> asInt8() /*override*/;

    virtual ::Bedrock::Result<uchar> asUInt8() /*override*/;

    virtual ::Bedrock::Result<short> asInt16() /*override*/;

    virtual ::Bedrock::Result<ushort> asUInt16() /*override*/;

    virtual ::Bedrock::Result<int> asInt32() /*override*/;

    virtual ::Bedrock::Result<uint> asUInt32() /*override*/;

    virtual ::Bedrock::Result<int64> asInt64() /*override*/;

    virtual ::Bedrock::Result<uint64> asUInt64() /*override*/;

    virtual ::Bedrock::Result<float> asFloat() /*override*/;

    virtual ::Bedrock::Result<double> asDouble() /*override*/;

    virtual ::Bedrock::Result<::std::string> asString(uint64 maxInputLength) /*override*/;

    virtual ::Bedrock::Result<void>
    asRawBytes(::std::function<::gsl::span<uchar>(uint64)> storage, uint64 maxInputLength) /*override*/;

    virtual ::std::optional<bool> readValidityFlag() /*override*/;

    virtual ::std::optional<uint> readControlValue() /*override*/;

    virtual uint64 members() /*override*/;

    virtual uint64 length(uint64 expectedSize) /*override*/;

    virtual bool pushMember(::std::string_view const) /*override*/;

    virtual ::std::string_view pushNextMember() /*override*/;

    virtual void pushElement(uint64) /*override*/;

    virtual void pop() /*override*/;

    virtual ~PacketSchemaReader() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isValid() const;

    MCFOLD ::cereal::SchemaRWType $expectedType() const;

    MCFOLD ::Bedrock::Result<void> $asNull();

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

    MCFOLD ::Bedrock::Result<::std::string> $asString(uint64 maxInputLength);

    MCAPI ::Bedrock::Result<void>
    $asRawBytes(::std::function<::gsl::span<uchar>(uint64)> storage, uint64 maxInputLength);

    MCFOLD ::std::optional<bool> $readValidityFlag();

    MCFOLD ::std::optional<uint> $readControlValue();

    MCFOLD uint64 $members();

    MCAPI uint64 $length(uint64 expectedSize);

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
