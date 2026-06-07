#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaRWType.h"
#include "mc/deps/cereal/schema/SchemaReader.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class DynamicValue; }
// clang-format on

namespace cereal {

class DynamicValueSchemaReader : public ::cereal::SchemaReader {
public:
    // DynamicValueSchemaReader inner types declare
    // clang-format off
    struct State;
    // clang-format on

    // DynamicValueSchemaReader inner types define
    struct State {
    public:
        // State inner types define
        using ConstRef = ::std::reference_wrapper<::cereal::DynamicValue const>;

        using MemberIt = ::std::_List_const_iterator<
            ::std::_List_val<::std::_List_simple_types<::std::pair<::std::string const, ::cereal::DynamicValue>>>>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::cereal::DynamicValue const>> mRef;
        ::ll::TypedStorage<
            8,
            8,
            ::std::_List_const_iterator<
                ::std::_List_val<::std::_List_simple_types<::std::pair<::std::string const, ::cereal::DynamicValue>>>>>
            mIt;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::cereal::DynamicValueSchemaReader::State>> mState;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicValueSchemaReader();

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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DynamicValueSchemaReader(::std::reference_wrapper<::cereal::DynamicValue const> ref);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::reference_wrapper<::cereal::DynamicValue const> ref);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isValid() const;

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

    MCAPI uint64 $members();

    MCAPI uint64 $length(uint64);

    MCAPI bool $pushMember(::std::string_view const name);

    MCAPI ::std::string_view $pushNextMember();

    MCAPI void $pushElement(uint64 index);

    MCFOLD void $pop();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
