#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SchemaReader.h"
#include "mc/deps/cereal/SchemaReaderState.h"
#include "mc/deps/core/common/bedrock/Result.h"

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
    // vIndex: 0, symbol: ??1NBTSchemaReader@@UEAA@XZ
    virtual ~NBTSchemaReader();

    // vIndex: 1, symbol: ?isValid@NBTSchemaReader@@UEBA_NXZ
    virtual bool isValid() const;

    // vIndex: 2, symbol: ?isObject@NBTSchemaReader@@UEBA?AW4SchemaReaderState@cereal@@XZ
    virtual ::cereal::SchemaReaderState isObject() const;

    // vIndex: 3, symbol: ?isArray@NBTSchemaReader@@UEBA?AW4SchemaReaderState@cereal@@XZ
    virtual ::cereal::SchemaReaderState isArray() const;

    // vIndex: 4, symbol:
    // ?asBool@NBTSchemaReader@@UEAA?AV?$Result@_NVerror_code@std@@@Bedrock@@AEBVPropertyReader@cereal@@@Z
    virtual class Bedrock::Result<bool> asBool(class cereal::PropertyReader const&);

    // vIndex: 5, symbol:
    // ?asInt8@NBTSchemaReader@@UEAA?AV?$Result@CVerror_code@std@@@Bedrock@@AEBVPropertyReader@cereal@@@Z
    virtual class Bedrock::Result<schar> asInt8(class cereal::PropertyReader const&);

    // vIndex: 6, symbol:
    // ?asUInt8@NBTSchemaReader@@UEAA?AV?$Result@EVerror_code@std@@@Bedrock@@AEBVPropertyReader@cereal@@@Z
    virtual class Bedrock::Result<uchar> asUInt8(class cereal::PropertyReader const&);

    // vIndex: 7, symbol:
    // ?asInt16@NBTSchemaReader@@UEAA?AV?$Result@FVerror_code@std@@@Bedrock@@AEBVPropertyReader@cereal@@@Z
    virtual class Bedrock::Result<short> asInt16(class cereal::PropertyReader const&);

    // vIndex: 8, symbol:
    // ?asUInt16@NBTSchemaReader@@UEAA?AV?$Result@GVerror_code@std@@@Bedrock@@AEBVPropertyReader@cereal@@@Z
    virtual class Bedrock::Result<ushort> asUInt16(class cereal::PropertyReader const&);

    // vIndex: 9, symbol:
    // ?asInt32@NBTSchemaReader@@UEAA?AV?$Result@HVerror_code@std@@@Bedrock@@AEBVPropertyReader@cereal@@@Z
    virtual class Bedrock::Result<int> asInt32(class cereal::PropertyReader const&);

    // vIndex: 10, symbol:
    // ?asUInt32@NBTSchemaReader@@UEAA?AV?$Result@IVerror_code@std@@@Bedrock@@AEBVPropertyReader@cereal@@@Z
    virtual class Bedrock::Result<uint> asUInt32(class cereal::PropertyReader const&);

    // vIndex: 11, symbol:
    // ?asInt64@NBTSchemaReader@@UEAA?AV?$Result@_JVerror_code@std@@@Bedrock@@AEBVPropertyReader@cereal@@@Z
    virtual class Bedrock::Result<int64> asInt64(class cereal::PropertyReader const&);

    // vIndex: 12, symbol:
    // ?asUInt64@NBTSchemaReader@@UEAA?AV?$Result@_KVerror_code@std@@@Bedrock@@AEBVPropertyReader@cereal@@@Z
    virtual class Bedrock::Result<uint64> asUInt64(class cereal::PropertyReader const&);

    // vIndex: 13, symbol:
    // ?asFloat@NBTSchemaReader@@UEAA?AV?$Result@MVerror_code@std@@@Bedrock@@AEBVPropertyReader@cereal@@@Z
    virtual class Bedrock::Result<float> asFloat(class cereal::PropertyReader const&);

    // vIndex: 14, symbol:
    // ?asDouble@NBTSchemaReader@@UEAA?AV?$Result@NVerror_code@std@@@Bedrock@@AEBVPropertyReader@cereal@@@Z
    virtual class Bedrock::Result<double> asDouble(class cereal::PropertyReader const&);

    // vIndex: 15, symbol:
    // ?asString@NBTSchemaReader@@UEAA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Verror_code@2@@Bedrock@@AEBVPropertyReader@cereal@@@Z
    virtual class Bedrock::Result<std::string> asString(class cereal::PropertyReader const&);

    // vIndex: 16, symbol: ?members@NBTSchemaReader@@UEAA_KXZ
    virtual uint64 members();

    // vIndex: 17, symbol: ?length@NBTSchemaReader@@UEAA_KXZ
    virtual uint64 length();

    // vIndex: 18, symbol:
    // ?pushMember@NBTSchemaReader@@UEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBVPropertyReader@cereal@@@Z
    virtual bool pushMember(std::string_view, class cereal::PropertyReader const&);

    // vIndex: 19, symbol:
    // ?pushNextMember@NBTSchemaReader@@UEAA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBVPropertyReader@cereal@@@Z
    virtual std::string_view pushNextMember(class cereal::PropertyReader const&);

    // vIndex: 20, symbol: ?pushElement@NBTSchemaReader@@UEAAX_KAEBVPropertyReader@cereal@@@Z
    virtual void pushElement(uint64, class cereal::PropertyReader const&);

    // vIndex: 21, symbol: ?pop@NBTSchemaReader@@UEAAXXZ
    virtual void pop();

    // vIndex: 22, symbol: ?isSequenceReader@SchemaReader@cereal@@UEBA_NXZ
    virtual bool isSequenceReader() const;

    // symbol: ??0NBTSchemaReader@@QEAA@V?$not_null@PEBVTag@@@gsl@@@Z
    MCAPI explicit NBTSchemaReader(gsl::not_null<class Tag const*> tag);

    // NOLINTEND
};
