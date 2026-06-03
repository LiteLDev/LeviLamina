#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaRWType.h"
#include "mc/deps/cereal/schema/SerializationTraitsSupport.h"
#include "mc/platform/Result.h"

namespace cereal {

struct SchemaReader : public ::cereal::SerializationTraitsSupport {
public:
    // SchemaReader inner types declare
    // clang-format off
    struct ScopedPop;
    // clang-format on

    // SchemaReader inner types define
    struct ScopedPop {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::cereal::SchemaReader*> mAdaptor;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ScopedPop();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isValid() const = 0;

    virtual ::cereal::SchemaRWType expectedType() const = 0;

    virtual ::Bedrock::Result<void> asNull() = 0;

    virtual ::Bedrock::Result<bool> asBool() = 0;

    virtual ::Bedrock::Result<schar> asInt8() = 0;

    virtual ::Bedrock::Result<uchar> asUInt8() = 0;

    virtual ::Bedrock::Result<short> asInt16() = 0;

    virtual ::Bedrock::Result<ushort> asUInt16() = 0;

    virtual ::Bedrock::Result<int> asInt32() = 0;

    virtual ::Bedrock::Result<uint> asUInt32() = 0;

    virtual ::Bedrock::Result<int64> asInt64() = 0;

    virtual ::Bedrock::Result<uint64> asUInt64() = 0;

    virtual ::Bedrock::Result<float> asFloat() = 0;

    virtual ::Bedrock::Result<double> asDouble() = 0;

    virtual ::Bedrock::Result<::std::string> asString(uint64 maxInputLength) = 0;

    virtual ::Bedrock::Result<void>
    asRawBytes(::std::function<::gsl::span<uchar>(uint64)> storage, uint64 maxInputLength) = 0;

    virtual ::std::optional<bool> additionalDataAsBool() = 0;

    virtual ::std::optional<uint> additionalDataAsUInt32() = 0;

    virtual ::std::optional<::std::string> additionalDataAsString(uint64 maxInputLength) = 0;

    virtual uint64 members() = 0;

    virtual uint64 length(uint64 expectedSize) = 0;

    virtual bool pushMember(::std::string_view const name) = 0;

    virtual ::std::string_view pushNextMember() = 0;

    virtual void pushElement(uint64 index) = 0;

    virtual void pop() = 0;

    virtual ~SchemaReader() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cereal
