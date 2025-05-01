#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/level/block/BannerBlockType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
class Vec2;
class Vec3;
namespace Json { class Value; }
// clang-format on

namespace JsonUtil {
// functions
// NOLINTBEGIN
MCNAPI void LogMissingChildSchemaOption(
    ::LogArea            area,
    ::Json::Value const& node,
    ::std::string const& missingName,
    ::std::string const& foundNodesStr,
    ::std::string const& optionsStr
);

MCNAPI void
LogUnknownChildSchemaOption(::std::string const& childName, ::LogArea area, ::Json::Value const& childValue);

MCNAPI void eraseSchema(::HashedString const& name, ::SemVersion const& version);

MCNAPI ::Json::Value& getMemberByCaseInsensitiveName(::Json::Value& node, ::std::string_view memberName);

MCNAPI ::Json::Value const&
getMemberByCaseInsensitiveNameConst(::Json::Value const& node, ::std::string_view memberName);

MCNAPI bool parseBannerBlockType(::BannerBlockType& outType, ::Json::Value const& root);

MCNAPI bool
parseItem(::std::string& outItemName, ::std::string& outItemNamespace, int& inoutItemAux, ::std::string_view inString);

MCNAPI bool parseItemColor(::ItemColor& outColor, ::Json::Value const& root);

MCNAPI bool parseRange(::Json::Value const& root, int& outMin, int& outMax);

MCNAPI bool parseVec2(::Vec2& outVec, ::Json::Value const& root);

MCNAPI bool parseVec3(::Vec3& outVec, ::Json::Value const& root);

MCNAPI void printJsonSchema_childNode(
    ::std::string&        output,
    ::std::string const&  indent,
    ::HashedString const& typeName,
    ::std::string const&  memberName,
    bool                  isRequired,
    uint64                minChildren,
    uint64                maxChildren,
    ::std::string const&  validValuesDocumentation,
    ::std::string const&  documentation
);

MCNAPI void setDefaultPrettyName(::std::string& destPrettyName, ::HashedString const& sourceName);

MCNAPI void unregisterSchema(::HashedString const& name, ::SemVersion const& version);
// NOLINTEND

} // namespace JsonUtil
