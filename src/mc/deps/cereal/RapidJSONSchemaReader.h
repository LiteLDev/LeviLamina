#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaReader.h"
#include "mc/deps/cereal/schema/SchemaReaderState.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class PropertyReader; }
// clang-format on

namespace cereal {

class RapidJSONSchemaReader : public ::cereal::SchemaReader {
public:
    // RapidJSONSchemaReader inner types declare
    // clang-format off
    struct State;
    // clang-format on

    // RapidJSONSchemaReader inner types define
    struct State {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk616037;
        ::ll::UntypedStorage<8, 8> mUnkc13d3e;
        // NOLINTEND

    public:
        // prevent constructor by default
        State& operator=(State const&);
        State(State const&);
        State();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkf588d0;
    ::ll::UntypedStorage<8, 96> mUnk54d3b2;
    // NOLINTEND

public:
    // prevent constructor by default
    RapidJSONSchemaReader& operator=(RapidJSONSchemaReader const&);
    RapidJSONSchemaReader(RapidJSONSchemaReader const&);
    RapidJSONSchemaReader();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool isValid() const /*override*/;

    // vIndex: 2
    virtual ::cereal::SchemaReaderState isObject() const /*override*/;

    // vIndex: 3
    virtual ::cereal::SchemaReaderState isArray() const /*override*/;

    // vIndex: 4
    virtual ::Bedrock::Result<bool> asBool(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 5
    virtual ::Bedrock::Result<schar> asInt8(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 6
    virtual ::Bedrock::Result<uchar> asUInt8(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 7
    virtual ::Bedrock::Result<short> asInt16(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<ushort> asUInt16(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 9
    virtual ::Bedrock::Result<int> asInt32(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 10
    virtual ::Bedrock::Result<uint> asUInt32(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 11
    virtual ::Bedrock::Result<int64> asInt64(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 12
    virtual ::Bedrock::Result<uint64> asUInt64(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 13
    virtual ::Bedrock::Result<float> asFloat(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 14
    virtual ::Bedrock::Result<double> asDouble(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 15
    virtual ::Bedrock::Result<::std::string> asString(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 16
    virtual uint64 members() /*override*/;

    // vIndex: 17
    virtual uint64 length() /*override*/;

    // vIndex: 18
    virtual bool pushMember(::std::string_view const name, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 19
    virtual ::std::string_view pushNextMember(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 20
    virtual void pushElement(uint64 index, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 21
    virtual void pop() /*override*/;

    // vIndex: 0
    virtual ~RapidJSONSchemaReader() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RapidJSONSchemaReader(::std::string const& data);

    MCAPI explicit RapidJSONSchemaReader(::rapidjson::GenericValue<
                                         ::rapidjson::UTF8<char>,
                                         ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value);

    MCAPI bool isArithmeticType() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& data);

    MCAPI void* $ctor(::rapidjson::GenericValue<
                      ::rapidjson::UTF8<char>,
                      ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isValid() const;

    MCFOLD ::cereal::SchemaReaderState $isObject() const;

    MCFOLD ::cereal::SchemaReaderState $isArray() const;

    MCAPI ::Bedrock::Result<bool> $asBool(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<schar> $asInt8(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<uchar> $asUInt8(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<short> $asInt16(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<ushort> $asUInt16(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<int> $asInt32(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<uint> $asUInt32(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<int64> $asInt64(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<uint64> $asUInt64(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<float> $asFloat(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<double> $asDouble(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<::std::string> $asString(::cereal::PropertyReader const&);

    MCFOLD uint64 $members();

    MCFOLD uint64 $length();

    MCFOLD bool $pushMember(::std::string_view const name, ::cereal::PropertyReader const&);

    MCFOLD ::std::string_view $pushNextMember(::cereal::PropertyReader const&);

    MCFOLD void $pushElement(uint64 index, ::cereal::PropertyReader const&);

    MCFOLD void $pop();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
