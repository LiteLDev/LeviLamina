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
    // vIndex: 1
    virtual bool isValid() const /*override*/;

    // vIndex: 2
    virtual ::cereal::SchemaRWType expectedType() const /*override*/;

    // vIndex: 3
    virtual ::Bedrock::Result<void> asNull() /*override*/;

    // vIndex: 4
    virtual ::Bedrock::Result<bool> asBool() /*override*/;

    // vIndex: 5
    virtual ::Bedrock::Result<schar> asInt8() /*override*/;

    // vIndex: 6
    virtual ::Bedrock::Result<uchar> asUInt8() /*override*/;

    // vIndex: 7
    virtual ::Bedrock::Result<short> asInt16() /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<ushort> asUInt16() /*override*/;

    // vIndex: 9
    virtual ::Bedrock::Result<int> asInt32() /*override*/;

    // vIndex: 10
    virtual ::Bedrock::Result<uint> asUInt32() /*override*/;

    // vIndex: 11
    virtual ::Bedrock::Result<int64> asInt64() /*override*/;

    // vIndex: 12
    virtual ::Bedrock::Result<uint64> asUInt64() /*override*/;

    // vIndex: 13
    virtual ::Bedrock::Result<float> asFloat() /*override*/;

    // vIndex: 14
    virtual ::Bedrock::Result<double> asDouble() /*override*/;

    // vIndex: 15
    virtual ::Bedrock::Result<::std::string> asString(uint64 maxInputLength) /*override*/;

    // vIndex: 16
    virtual ::std::optional<bool> readValidityFlag() /*override*/;

    // vIndex: 17
    virtual ::std::optional<uint> readControlValue() /*override*/;

    // vIndex: 18
    virtual uint64 members() /*override*/;

    // vIndex: 19
    virtual uint64 length(uint64 expectedSize) /*override*/;

    // vIndex: 20
    virtual bool pushMember(::std::string_view const name) /*override*/;

    // vIndex: 21
    virtual ::std::string_view pushNextMember() /*override*/;

    // vIndex: 22
    virtual void pushElement(uint64 index) /*override*/;

    // vIndex: 23
    virtual void pop() /*override*/;

    // vIndex: 24
    virtual bool _allowAsBool() = 0;

    // vIndex: 25
    virtual bool _allowAsInt8() = 0;

    // vIndex: 26
    virtual bool _allowAsUInt8() = 0;

    // vIndex: 27
    virtual bool _allowAsInt16() = 0;

    // vIndex: 28
    virtual bool _allowAsUInt16() = 0;

    // vIndex: 29
    virtual bool _allowAsInt32() = 0;

    // vIndex: 30
    virtual bool _allowAsUInt32() = 0;

    // vIndex: 31
    virtual bool _allowAsInt64() = 0;

    // vIndex: 32
    virtual bool _allowAsUInt64() = 0;

    // vIndex: 33
    virtual bool _allowAsFloat() = 0;

    // vIndex: 34
    virtual bool _allowAsDouble() = 0;

    // vIndex: 0
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
