#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaReaderState.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class PropertyReader; }
// clang-format on

namespace cereal {

struct SchemaReader {
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
        ::ll::UntypedStorage<8, 8> mUnk50fc12;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScopedPop& operator=(ScopedPop const&);
        ScopedPop(ScopedPop const&);
        ScopedPop();

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
    // vIndex: 0
    virtual ~SchemaReader() = default;

    // vIndex: 1
    virtual bool isValid() const = 0;

    // vIndex: 2
    virtual ::cereal::SchemaReaderState isObject() const = 0;

    // vIndex: 3
    virtual ::cereal::SchemaReaderState isArray() const = 0;

    // vIndex: 4
    virtual ::Bedrock::Result<bool> asBool(::cereal::PropertyReader const&) = 0;

    // vIndex: 5
    virtual ::Bedrock::Result<schar> asInt8(::cereal::PropertyReader const&) = 0;

    // vIndex: 6
    virtual ::Bedrock::Result<uchar> asUInt8(::cereal::PropertyReader const&) = 0;

    // vIndex: 7
    virtual ::Bedrock::Result<short> asInt16(::cereal::PropertyReader const&) = 0;

    // vIndex: 8
    virtual ::Bedrock::Result<ushort> asUInt16(::cereal::PropertyReader const&) = 0;

    // vIndex: 9
    virtual ::Bedrock::Result<int> asInt32(::cereal::PropertyReader const&) = 0;

    // vIndex: 10
    virtual ::Bedrock::Result<uint> asUInt32(::cereal::PropertyReader const&) = 0;

    // vIndex: 11
    virtual ::Bedrock::Result<int64> asInt64(::cereal::PropertyReader const&) = 0;

    // vIndex: 12
    virtual ::Bedrock::Result<uint64> asUInt64(::cereal::PropertyReader const&) = 0;

    // vIndex: 13
    virtual ::Bedrock::Result<float> asFloat(::cereal::PropertyReader const&) = 0;

    // vIndex: 14
    virtual ::Bedrock::Result<double> asDouble(::cereal::PropertyReader const&) = 0;

    // vIndex: 15
    virtual ::Bedrock::Result<::std::string> asString(::cereal::PropertyReader const&) = 0;

    // vIndex: 16
    virtual uint64 members() = 0;

    // vIndex: 17
    virtual uint64 length() = 0;

    // vIndex: 18
    virtual bool pushMember(::std::string_view const, ::cereal::PropertyReader const&) = 0;

    // vIndex: 19
    virtual ::std::string_view pushNextMember(::cereal::PropertyReader const&) = 0;

    // vIndex: 20
    virtual void pushElement(uint64, ::cereal::PropertyReader const&) = 0;

    // vIndex: 21
    virtual void pop() = 0;

    // vIndex: 22
    virtual bool isSequenceReader() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::cereal::SchemaReader::ScopedPop scopedPop();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isSequenceReader() const;
    // NOLINTEND
};

} // namespace cereal
