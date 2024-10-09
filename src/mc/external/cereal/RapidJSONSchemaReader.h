#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cereal/SchemaReader.h"
#include "mc/external/cereal/SchemaReaderState.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class PropertyReader; }
namespace cereal { struct SchemaReader; }
// clang-format on

namespace cereal {

class RapidJSONSchemaReader : public ::cereal::SchemaReader {
public:
    // prevent constructor by default
    RapidJSONSchemaReader& operator=(RapidJSONSchemaReader const&);
    RapidJSONSchemaReader(RapidJSONSchemaReader const&);
    RapidJSONSchemaReader();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RapidJSONSchemaReader();

    // vIndex: 1
    virtual bool isValid() const;

    // vIndex: 2
    virtual ::cereal::SchemaReaderState isObject() const;

    // vIndex: 3
    virtual ::cereal::SchemaReaderState isArray() const;

    // vIndex: 4
    virtual class Bedrock::Result<bool> asBool(class cereal::PropertyReader const&);

    // vIndex: 5
    virtual class Bedrock::Result<schar> asInt8(class cereal::PropertyReader const&);

    // vIndex: 6
    virtual class Bedrock::Result<uchar> asUInt8(class cereal::PropertyReader const&);

    // vIndex: 7
    virtual class Bedrock::Result<short> asInt16(class cereal::PropertyReader const&);

    // vIndex: 8
    virtual class Bedrock::Result<ushort> asUInt16(class cereal::PropertyReader const&);

    // vIndex: 9
    virtual class Bedrock::Result<int> asInt32(class cereal::PropertyReader const&);

    // vIndex: 10
    virtual class Bedrock::Result<uint> asUInt32(class cereal::PropertyReader const&);

    // vIndex: 11
    virtual class Bedrock::Result<int64> asInt64(class cereal::PropertyReader const&);

    // vIndex: 12
    virtual class Bedrock::Result<uint64> asUInt64(class cereal::PropertyReader const&);

    // vIndex: 13
    virtual class Bedrock::Result<float> asFloat(class cereal::PropertyReader const&);

    // vIndex: 14
    virtual class Bedrock::Result<double> asDouble(class cereal::PropertyReader const&);

    // vIndex: 15
    virtual class Bedrock::Result<std::string> asString(class cereal::PropertyReader const&);

    // vIndex: 16
    virtual uint64 members();

    // vIndex: 17
    virtual uint64 length();

    // vIndex: 18
    virtual bool pushMember(std::string_view name, class cereal::PropertyReader const&);

    // vIndex: 19
    virtual std::string_view pushNextMember(class cereal::PropertyReader const&);

    // vIndex: 20
    virtual void pushElement(uint64 index, class cereal::PropertyReader const&);

    // vIndex: 21
    virtual void pop();

    // vIndex: 22
    virtual bool isSequenceReader() const;

    MCAPI explicit RapidJSONSchemaReader(
        rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
            value
    );

    MCAPI explicit RapidJSONSchemaReader(std::string const& data);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool isArithmeticType() const;

    // NOLINTEND
};

}; // namespace cereal
