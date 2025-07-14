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

MCNAPI void setDefaultPrettyName(::std::string& destPrettyName, ::HashedString const& sourceName);

MCNAPI void unregisterSchema(::HashedString const& name, ::SemVersion const& version);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::HashedString const& ACTOR_DEFINITION_TRIGGER_TYPE_NAME();

MCNAPI ::HashedString const& ACTOR_FILTER_GROUP_TYPE_NAME();

MCNAPI ::HashedString const& ARRAY_TYPE_NAME();

MCNAPI ::HashedString const& BOOL_TYPE_NAME();

MCNAPI ::HashedString const& ENTITIES_TYPE_NAME();

MCNAPI ::HashedString const& ENUM_TYPE_NAME();

MCNAPI ::HashedString const& FLOAT_RANGE_TYPE_NAME();

MCNAPI ::HashedString const& FLOAT_TYPE_NAME();

MCNAPI ::HashedString const& INT_RANGE_TYPE_NAME();

MCNAPI ::HashedString const& INT_TYPE_NAME();

MCNAPI ::HashedString const& MOLANG_TYPE_NAME();

MCNAPI ::HashedString const& OBJECT_TYPE_NAME();

MCNAPI ::HashedString const& STRING_TYPE_NAME();

MCNAPI ::HashedString const& VEC2_TYPE_NAME();

MCNAPI ::HashedString const& VEC3_TYPE_NAME();

MCNAPI ::HashedString const& VEC4_TYPE_NAME();

MCNAPI ::HashedString const& VERSION_TYPE_NAME();
// NOLINTEND

} // namespace JsonUtil
