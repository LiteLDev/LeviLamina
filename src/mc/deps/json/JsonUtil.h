#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/LogArea.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/level/block/utils/BannerBlockType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
namespace Json { class Value; }
namespace JsonUtil { class JsonSchemaNodeBase; }
// clang-format on

namespace JsonUtil {
// NOLINTBEGIN
// symbol:
// ?LogMissingChildSchemaOption@JsonUtil@@YAXW4LogArea@@AEBVValue@Json@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@22@Z
MCAPI void LogMissingChildSchemaOption(
    ::LogArea                area,
    class Json::Value const& node,
    std::string const&       missingName,
    std::string const&       foundNodesStr,
    std::string const&       optionsStr
);

// symbol:
// ?LogUnknownChildSchemaOption@JsonUtil@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4LogArea@@AEBVValue@Json@@@Z
MCAPI void
LogUnknownChildSchemaOption(std::string const& childName, ::LogArea area, class Json::Value const& childValue);

// symbol: ?eraseSchema@JsonUtil@@YAXAEBVHashedString@@AEBVSemVersion@@@Z
MCAPI void eraseSchema(class HashedString const& name, class SemVersion const& version);

// symbol:
// ?getBlockLegacy@JsonUtil@@YAPEBVBlockLegacy@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI class BlockLegacy const* getBlockLegacy(std::string const&);

// symbol:
// ?getMemberByCaseInsensitiveName@JsonUtil@@YAAEAVValue@Json@@AEAV23@AEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI class Json::Value& getMemberByCaseInsensitiveName(class Json::Value& node, std::string_view const& memberName);

// symbol:
// ?getMemberByCaseInsensitiveNameConst@JsonUtil@@YAAEBVValue@Json@@AEBV23@AEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI class Json::Value const&
getMemberByCaseInsensitiveNameConst(class Json::Value const& node, std::string_view const& memberName);

// symbol:
// ?getSchemaMap@JsonUtil@@YAAEAV?$map@VHashedString@@V?$map@VSemVersion@@V?$shared_ptr@VJsonSchemaNodeBase@JsonUtil@@@std@@U?$less@VSemVersion@@@3@V?$allocator@U?$pair@$$CBVSemVersion@@V?$shared_ptr@VJsonSchemaNodeBase@JsonUtil@@@std@@@std@@@3@@std@@U?$less@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$map@VSemVersion@@V?$shared_ptr@VJsonSchemaNodeBase@JsonUtil@@@std@@U?$less@VSemVersion@@@3@V?$allocator@U?$pair@$$CBVSemVersion@@V?$shared_ptr@VJsonSchemaNodeBase@JsonUtil@@@std@@@std@@@3@@std@@@std@@@3@@std@@XZ
MCAPI std::map<class HashedString, std::map<class SemVersion, std::shared_ptr<class JsonUtil::JsonSchemaNodeBase>>>&
      getSchemaMap();

// symbol: ?getSchemaMapLock@JsonUtil@@YAAEAVMutex@Threading@Bedrock@@XZ
MCAPI class Bedrock::Threading::Mutex& getSchemaMapLock();

// symbol: ?parseBannerBlockType@JsonUtil@@YA_NAEAW4BannerBlockType@@AEBVValue@Json@@@Z
MCAPI bool parseBannerBlockType(::BannerBlockType& outType, class Json::Value const& root);

// symbol:
// ?parseItem@JsonUtil@@YA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEAHV?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
MCAPI bool
parseItem(std::string& outItemName, std::string& outItemNamespace, int& inoutItemAux, std::string_view inString);

// symbol: ?parseItemColor@JsonUtil@@YA_NAEAW4ItemColor@@AEBVValue@Json@@@Z
MCAPI bool parseItemColor(::ItemColor& outColor, class Json::Value const& root);

// symbol: ?parseRange@JsonUtil@@YA_NAEBVValue@Json@@AEAH1@Z
MCAPI bool parseRange(class Json::Value const& root, int& outMin, int& outMax);

// symbol: ?parseVec2@JsonUtil@@YA_NAEAVVec2@@AEBVValue@Json@@@Z
MCAPI bool parseVec2(class Vec2&, class Json::Value const&);

// symbol: ?parseVec3@JsonUtil@@YA_NAEAVVec3@@AEBVValue@Json@@@Z
MCAPI bool parseVec3(class Vec3& outVec, class Json::Value const& root);

// symbol:
// ?printJsonSchema_childNode@JsonUtil@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@AEBVHashedString@@1_N_K411@Z
MCAPI void printJsonSchema_childNode(
    std::string&              output,
    std::string const&        indent,
    class HashedString const& typeName,
    std::string const&        memberName,
    bool                      isRequired,
    uint64                    minChildren,
    uint64                    maxChildren,
    std::string const&        validValuesDocumentation,
    std::string const&        documentation
);

// symbol:
// ?setDefaultPrettyName@JsonUtil@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVHashedString@@@Z
MCAPI void setDefaultPrettyName(std::string& destPrettyName, class HashedString const& sourceName);
// NOLINTEND

}; // namespace JsonUtil
