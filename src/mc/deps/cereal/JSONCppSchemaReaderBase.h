#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaRWType.h"
#include "mc/deps/cereal/schema/SchemaReader.h"
#include "mc/deps/json/Value.h"
#include "mc/deps/json/ValueConstIterator.h"
#include "mc/platform/Result.h"

namespace cereal {

class JSONCppSchemaReaderBase : public ::cereal::SchemaReader {
public:
    // JSONCppSchemaReaderBase inner types declare
    // clang-format off
    struct State;
    // clang-format on

    // JSONCppSchemaReaderBase inner types define
    struct State {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Json::Value const*>        mValue;
        ::ll::TypedStorage<8, 16, ::Json::ValueConstIterator> mIt;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::cereal::JSONCppSchemaReaderBase::State>> mState;
    ::ll::TypedStorage<8, 16, ::Json::Value>                                           mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    JSONCppSchemaReaderBase();

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

    virtual ::std::optional<bool> additionalDataAsBool() /*override*/;

    virtual ::std::optional<uint> additionalDataAsUInt32() /*override*/;

    virtual ::std::optional<::std::string> additionalDataAsString(uint64) /*override*/;

    virtual uint64 members() /*override*/;

    virtual uint64 length(uint64) /*override*/;

    virtual bool pushMember(::std::string_view const name) /*override*/;

    virtual ::std::string_view pushNextMember() /*override*/;

    virtual void pushElement(uint64 index) /*override*/;

    virtual void pop() /*override*/;

    virtual bool _allowAsBool() = 0;

    virtual bool _allowAsInt8() = 0;

    virtual bool _allowAsUInt8() = 0;

    virtual bool _allowAsInt16() = 0;

    virtual bool _allowAsUInt16() = 0;

    virtual bool _allowAsInt32() = 0;

    virtual bool _allowAsUInt32() = 0;

    virtual bool _allowAsInt64() = 0;

    virtual bool _allowAsUInt64() = 0;

    virtual bool _allowAsFloat() = 0;

    virtual bool _allowAsDouble() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit JSONCppSchemaReaderBase(::std::string const& data);

    MCAPI explicit JSONCppSchemaReaderBase(::std::reference_wrapper<::Json::Value const> value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& data);

    MCAPI void* $ctor(::std::reference_wrapper<::Json::Value const> value);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isValid() const;

    MCAPI ::cereal::SchemaRWType $expectedType() const;

    MCAPI ::Bedrock::Result<void> $asNull();

    MCAPI ::Bedrock::Result<bool> $asBool();

    MCAPI ::Bedrock::Result<schar> $asInt8();

    MCAPI ::Bedrock::Result<uchar> $asUInt8();

    MCAPI ::Bedrock::Result<short> $asInt16();

    MCAPI ::Bedrock::Result<ushort> $asUInt16();

    MCAPI ::Bedrock::Result<int> $asInt32();

    MCAPI ::Bedrock::Result<uint> $asUInt32();

    MCAPI ::Bedrock::Result<int64> $asInt64();

    MCAPI ::Bedrock::Result<uint64> $asUInt64();

    MCAPI ::Bedrock::Result<float> $asFloat();

    MCAPI ::Bedrock::Result<double> $asDouble();

    MCAPI ::Bedrock::Result<::std::string> $asString(uint64 maxInputLength);

    MCAPI ::Bedrock::Result<void>
    $asRawBytes(::std::function<::gsl::span<uchar>(uint64)> storage, uint64 maxInputLength);

    MCFOLD ::std::optional<bool> $additionalDataAsBool();

    MCFOLD ::std::optional<uint> $additionalDataAsUInt32();

    MCFOLD ::std::optional<::std::string> $additionalDataAsString(uint64);

    MCFOLD uint64 $members();

    MCFOLD uint64 $length(uint64);

    MCAPI bool $pushMember(::std::string_view const name);

    MCAPI ::std::string_view $pushNextMember();

    MCAPI void $pushElement(uint64 index);

    MCAPI void $pop();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
