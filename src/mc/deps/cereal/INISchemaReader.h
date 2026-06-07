#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/INISection.h"
#include "mc/deps/cereal/schema/SchemaRWType.h"
#include "mc/deps/cereal/schema/SchemaReader.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class INIProperty; }
// clang-format on

namespace cereal {

class INISchemaReader : public ::cereal::SchemaReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::cereal::INISection>  mData;
    ::ll::TypedStorage<8, 8, ::cereal::INIProperty*> mCurrentProp;
    ::ll::TypedStorage<
        8,
        8,
        ::std::_List_iterator<
            ::std::_List_val<::std::_List_simple_types<::std::pair<::std::string const, ::cereal::INIProperty>>>>>
        mIt;
    // NOLINTEND

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

    virtual ::Bedrock::Result<::std::string> asString(uint64) /*override*/;

    virtual ::Bedrock::Result<void> asRawBytes(::std::function<::gsl::span<uchar>(uint64)>, uint64) /*override*/;

    virtual ::std::optional<bool> additionalDataAsBool() /*override*/;

    virtual ::std::optional<uint> additionalDataAsUInt32() /*override*/;

    virtual ::std::optional<::std::string> additionalDataAsString(uint64) /*override*/;

    virtual uint64 members() /*override*/;

    virtual uint64 length(uint64) /*override*/;

    virtual bool pushMember(::std::string_view const) /*override*/;

    virtual ::std::string_view pushNextMember() /*override*/;

    virtual void pushElement(uint64) /*override*/;

    virtual void pop() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cereal
