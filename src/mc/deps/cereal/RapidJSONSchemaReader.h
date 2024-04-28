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

namespace cereal {

class RapidJSONSchemaReader : public ::cereal::SchemaReader {
public:
    // prevent constructor by default
    RapidJSONSchemaReader& operator=(RapidJSONSchemaReader const&);
    RapidJSONSchemaReader(RapidJSONSchemaReader const&);
    RapidJSONSchemaReader();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RapidJSONSchemaReader@cereal@@UEAA@XZ
    virtual ~RapidJSONSchemaReader();

    // vIndex: 1, symbol: ?isValid@RapidJSONSchemaReader@cereal@@UEBA_NXZ
    virtual bool isValid() const;

    // vIndex: 2, symbol: ?isObject@RapidJSONSchemaReader@cereal@@UEBA?AW4SchemaReaderState@2@XZ
    virtual ::cereal::SchemaReaderState isObject() const;

    // vIndex: 3, symbol: ?isArray@RapidJSONSchemaReader@cereal@@UEBA?AW4SchemaReaderState@2@XZ
    virtual ::cereal::SchemaReaderState isArray() const;

    // vIndex: 4, symbol:
    // ?asBool@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@_NVerror_code@std@@@Bedrock@@AEBVPropertyReader@2@@Z
    virtual class Bedrock::Result<bool> asBool(class cereal::PropertyReader const&);

    // vIndex: 5, symbol:
    // ?asInt8@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@CVerror_code@std@@@Bedrock@@AEBVPropertyReader@2@@Z
    virtual class Bedrock::Result<schar> asInt8(class cereal::PropertyReader const&);

    // vIndex: 6, symbol:
    // ?asUInt8@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@EVerror_code@std@@@Bedrock@@AEBVPropertyReader@2@@Z
    virtual class Bedrock::Result<uchar> asUInt8(class cereal::PropertyReader const&);

    // vIndex: 7, symbol:
    // ?asInt16@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@FVerror_code@std@@@Bedrock@@AEBVPropertyReader@2@@Z
    virtual class Bedrock::Result<short> asInt16(class cereal::PropertyReader const&);

    // vIndex: 8, symbol:
    // ?asUInt16@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@GVerror_code@std@@@Bedrock@@AEBVPropertyReader@2@@Z
    virtual class Bedrock::Result<ushort> asUInt16(class cereal::PropertyReader const&);

    // vIndex: 9, symbol:
    // ?asInt32@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@HVerror_code@std@@@Bedrock@@AEBVPropertyReader@2@@Z
    virtual class Bedrock::Result<int> asInt32(class cereal::PropertyReader const&);

    // vIndex: 10, symbol:
    // ?asUInt32@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@IVerror_code@std@@@Bedrock@@AEBVPropertyReader@2@@Z
    virtual class Bedrock::Result<uint> asUInt32(class cereal::PropertyReader const&);

    // vIndex: 11, symbol:
    // ?asInt64@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@_JVerror_code@std@@@Bedrock@@AEBVPropertyReader@2@@Z
    virtual class Bedrock::Result<int64> asInt64(class cereal::PropertyReader const&);

    // vIndex: 12, symbol:
    // ?asUInt64@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@_KVerror_code@std@@@Bedrock@@AEBVPropertyReader@2@@Z
    virtual class Bedrock::Result<uint64> asUInt64(class cereal::PropertyReader const&);

    // vIndex: 13, symbol:
    // ?asFloat@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@MVerror_code@std@@@Bedrock@@AEBVPropertyReader@2@@Z
    virtual class Bedrock::Result<float> asFloat(class cereal::PropertyReader const&);

    // vIndex: 14, symbol:
    // ?asDouble@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@NVerror_code@std@@@Bedrock@@AEBVPropertyReader@2@@Z
    virtual class Bedrock::Result<double> asDouble(class cereal::PropertyReader const&);

    // vIndex: 15, symbol:
    // ?asString@RapidJSONSchemaReader@cereal@@UEAA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Verror_code@2@@Bedrock@@AEBVPropertyReader@2@@Z
    virtual class Bedrock::Result<std::string> asString(class cereal::PropertyReader const&);

    // vIndex: 16, symbol: ?members@RapidJSONSchemaReader@cereal@@UEAA_KXZ
    virtual uint64 members();

    // vIndex: 17, symbol: ?length@RapidJSONSchemaReader@cereal@@UEAA_KXZ
    virtual uint64 length();

    // vIndex: 18, symbol:
    // ?pushMember@RapidJSONSchemaReader@cereal@@UEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBVPropertyReader@2@@Z
    virtual bool pushMember(std::string_view, class cereal::PropertyReader const&);

    // vIndex: 19, symbol:
    // ?pushNextMember@RapidJSONSchemaReader@cereal@@UEAA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBVPropertyReader@2@@Z
    virtual std::string_view pushNextMember(class cereal::PropertyReader const&);

    // vIndex: 20, symbol: ?pushElement@RapidJSONSchemaReader@cereal@@UEAAX_KAEBVPropertyReader@2@@Z
    virtual void pushElement(uint64, class cereal::PropertyReader const&);

    // vIndex: 21, symbol: ?pop@RapidJSONSchemaReader@cereal@@UEAAXXZ
    virtual void pop();

    // vIndex: 22, symbol: ?isSequenceReader@SchemaReader@cereal@@UEBA_NXZ
    virtual bool isSequenceReader() const;

    // symbol:
    // ??0RapidJSONSchemaReader@cereal@@QEAA@AEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    MCAPI explicit RapidJSONSchemaReader(rapidjson::GenericValue<
                                         rapidjson::UTF8<char>,
                                         rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&);

    // symbol: ??0RapidJSONSchemaReader@cereal@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit RapidJSONSchemaReader(std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?isArithmeticType@RapidJSONSchemaReader@cereal@@AEBA_NXZ
    MCAPI bool isArithmeticType() const;

    // NOLINTEND
};

}; // namespace cereal
