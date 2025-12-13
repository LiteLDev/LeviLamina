#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaRWType.h"
#include "mc/deps/cereal/schema/SchemaReader.h"
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
        ::ll::UntypedStorage<8, 8>  mUnke8c05a;
        ::ll::UntypedStorage<8, 16> mUnka2d671;
        // NOLINTEND

    public:
        // prevent constructor by default
        State& operator=(State const&);
        State(State const&);
        State();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~State();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk9a5294;
    ::ll::UntypedStorage<8, 16> mUnk92aa2c;
    // NOLINTEND

public:
    // prevent constructor by default
    JSONCppSchemaReaderBase& operator=(JSONCppSchemaReaderBase const&);
    JSONCppSchemaReaderBase(JSONCppSchemaReaderBase const&);
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

    virtual ::std::optional<bool> readValidityFlag() /*override*/;

    virtual ::std::optional<uint> readControlValue() /*override*/;

    virtual uint64 members() /*override*/;

    virtual uint64 length(uint64 expectedSize) /*override*/;

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

    virtual ~JSONCppSchemaReaderBase() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isValid() const;

    MCNAPI ::cereal::SchemaRWType $expectedType() const;

    MCNAPI ::Bedrock::Result<void> $asNull();

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

    MCNAPI ::Bedrock::Result<::std::string> $asString(uint64 maxInputLength);

    MCNAPI ::std::optional<bool> $readValidityFlag();

    MCNAPI ::std::optional<uint> $readControlValue();

    MCNAPI uint64 $members();

    MCNAPI uint64 $length(uint64 expectedSize);

    MCNAPI bool $pushMember(::std::string_view const name);

    MCNAPI ::std::string_view $pushNextMember();

    MCNAPI void $pushElement(uint64 index);

    MCNAPI void $pop();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
