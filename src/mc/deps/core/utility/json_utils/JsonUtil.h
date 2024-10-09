#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/level/block/BannerBlockType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
namespace Json { class Value; }
namespace JsonUtil { class JsonSchemaNodeBase; }
// clang-format on

namespace JsonUtil {
// NOLINTBEGIN
MCAPI void LogMissingChildSchemaOption(
    ::LogArea                area,
    class Json::Value const& node,
    std::string const&       missingName,
    std::string const&       foundNodesStr,
    std::string const&       optionsStr
);

MCAPI void
LogUnknownChildSchemaOption(std::string const& childName, ::LogArea area, class Json::Value const& childValue);

MCAPI void eraseSchema(class HashedString const& name, class SemVersion const& version);

MCAPI class BlockLegacy const* getBlockLegacy(std::string const& name);

MCAPI class Json::Value& getMemberByCaseInsensitiveName(class Json::Value& node, std::string_view const& memberName);

MCAPI class Json::Value const&
getMemberByCaseInsensitiveNameConst(class Json::Value const& node, std::string_view const& memberName);

MCAPI std::map<class HashedString, std::map<class SemVersion, std::shared_ptr<class JsonUtil::JsonSchemaNodeBase>>>&
      getSchemaMap();

MCAPI class Bedrock::Threading::Mutex& getSchemaMapLock();

MCAPI bool parseBannerBlockType(::BannerBlockType& outType, class Json::Value const& root);

MCAPI bool
parseItem(std::string& outItemName, std::string& outItemNamespace, int& inoutItemAux, std::string_view inString);

MCAPI bool parseItemColor(::ItemColor& outColor, class Json::Value const& root);

MCAPI bool parseRange(class Json::Value const& root, int& outMin, int& outMax);

MCAPI bool parseVec2(class Vec2& outVec, class Json::Value const& root);

MCAPI bool parseVec3(class Vec3& outVec, class Json::Value const& root);

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

MCAPI void setDefaultPrettyName(std::string& destPrettyName, class HashedString const& sourceName);
// NOLINTEND

}; // namespace JsonUtil
