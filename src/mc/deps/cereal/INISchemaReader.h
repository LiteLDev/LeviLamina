#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaRWType.h"
#include "mc/deps/cereal/schema/SchemaReader.h"
#include "mc/platform/Result.h"

namespace cereal {

class INISchemaReader : public ::cereal::SchemaReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnk21bb5f;
    ::ll::UntypedStorage<8, 8>  mUnke11cc5;
    ::ll::UntypedStorage<8, 8>  mUnk1a7f3a;
    // NOLINTEND

public:
    // prevent constructor by default
    INISchemaReader& operator=(INISchemaReader const&);
    INISchemaReader(INISchemaReader const&);
    INISchemaReader();

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

    virtual ::std::optional<bool> readValidityFlag() /*override*/;

    virtual ::std::optional<uint> readControlValue() /*override*/;

    virtual uint64 members() /*override*/;

    virtual uint64 length(uint64) /*override*/;

    virtual bool pushMember(::std::string_view const) /*override*/;

    virtual ::std::string_view pushNextMember() /*override*/;

    virtual void pushElement(uint64) /*override*/;

    virtual void pop() /*override*/;

    virtual ~INISchemaReader() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cereal
