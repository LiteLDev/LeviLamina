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

class NBTSchemaReader : public ::cereal::SchemaReader {
public:
    // prevent constructor by default
    NBTSchemaReader& operator=(NBTSchemaReader const&);
    NBTSchemaReader(NBTSchemaReader const&);
    NBTSchemaReader();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NBTSchemaReader();

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

    MCAPI explicit NBTSchemaReader(gsl::not_null<class Tag const*> tag);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<bool> asBool$(class cereal::PropertyReader const&);

    MCAPI class Bedrock::Result<double> asDouble$(class cereal::PropertyReader const&);

    MCAPI class Bedrock::Result<float> asFloat$(class cereal::PropertyReader const&);

    MCAPI class Bedrock::Result<short> asInt16$(class cereal::PropertyReader const&);

    MCAPI class Bedrock::Result<int> asInt32$(class cereal::PropertyReader const&);

    MCAPI class Bedrock::Result<int64> asInt64$(class cereal::PropertyReader const&);

    MCAPI class Bedrock::Result<schar> asInt8$(class cereal::PropertyReader const&);

    MCAPI class Bedrock::Result<std::string> asString$(class cereal::PropertyReader const&);

    MCAPI class Bedrock::Result<ushort> asUInt16$(class cereal::PropertyReader const&);

    MCAPI class Bedrock::Result<uint> asUInt32$(class cereal::PropertyReader const&);

    MCAPI class Bedrock::Result<uint64> asUInt64$(class cereal::PropertyReader const&);

    MCAPI class Bedrock::Result<uchar> asUInt8$(class cereal::PropertyReader const&);

    MCAPI ::cereal::SchemaReaderState isArray$() const;

    MCAPI ::cereal::SchemaReaderState isObject$() const;

    MCAPI bool isSequenceReader$() const;

    MCAPI bool isValid$() const;

    MCAPI uint64 length$();

    MCAPI uint64 members$();

    MCAPI void pop$();

    MCAPI void pushElement$(uint64 index, class cereal::PropertyReader const&);

    MCAPI bool pushMember$(std::string_view name, class cereal::PropertyReader const&);

    MCAPI std::string_view pushNextMember$(class cereal::PropertyReader const&);

    // NOLINTEND
};
