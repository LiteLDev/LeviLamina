#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

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
        MCNAPI ~ScopedPop();
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
    ::ll::UntypedStorage<4, 4> mUnkfa0ec0;
    // NOLINTEND

public:
    // prevent constructor by default
    SchemaReader& operator=(SchemaReader const&);
    SchemaReader(SchemaReader const&);
    SchemaReader();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SchemaReader() = default;

    // vIndex: 1
    virtual bool isValid() const = 0;

    // vIndex: 2
    virtual bool isObject() const = 0;

    // vIndex: 3
    virtual bool isArray() const = 0;

    // vIndex: 4
    virtual bool isNull() const = 0;

    // vIndex: 5
    virtual ::Bedrock::Result<bool> asBool() = 0;

    // vIndex: 6
    virtual ::Bedrock::Result<schar> asInt8() = 0;

    // vIndex: 7
    virtual ::Bedrock::Result<uchar> asUInt8() = 0;

    // vIndex: 8
    virtual ::Bedrock::Result<short> asInt16() = 0;

    // vIndex: 9
    virtual ::Bedrock::Result<ushort> asUInt16() = 0;

    // vIndex: 10
    virtual ::Bedrock::Result<int> asInt32() = 0;

    // vIndex: 11
    virtual ::Bedrock::Result<uint> asUInt32() = 0;

    // vIndex: 12
    virtual ::Bedrock::Result<int64> asInt64() = 0;

    // vIndex: 13
    virtual ::Bedrock::Result<uint64> asUInt64() = 0;

    // vIndex: 14
    virtual ::Bedrock::Result<float> asFloat() = 0;

    // vIndex: 15
    virtual ::Bedrock::Result<double> asDouble() = 0;

    // vIndex: 16
    virtual ::Bedrock::Result<::std::string> asString() = 0;

    // vIndex: 17
    virtual uint64 members() = 0;

    // vIndex: 18
    virtual uint64 length() = 0;

    // vIndex: 19
    virtual bool pushMember(::std::string_view const) = 0;

    // vIndex: 20
    virtual ::std::string_view pushNextMember() = 0;

    // vIndex: 21
    virtual void pushElement(uint64) = 0;

    // vIndex: 22
    virtual void pop() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cereal
