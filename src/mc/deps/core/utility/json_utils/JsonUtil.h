#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/level/block/BannerBlockType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
class Vec2;
class Vec3;
class Vec4;
namespace Core { class Path; }
namespace Core { class Result; }
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
namespace SharedTypes::v1_21_100 { struct ChargeAttackGoalDefinition; }
namespace SharedTypes::v1_21_100 { struct CircleAroundAnchorGoalDefinition; }
namespace SharedTypes::v1_21_100 { struct ControlledByPlayerGoalDefinition; }
namespace SharedTypes::v1_21_100 { struct DragonFlamingGoalDefinition; }
namespace SharedTypes::v1_21_100 { struct EatMobGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct RoarGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SlimeAttackGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SlimeFloatGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SlimeKeepOnJumpingGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SlimeRandomDirectionGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SniffGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SonicBoomGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct StayNearNoteblockGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SwimIdleGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SwimUpForBreathGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SwimWanderGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct SwoopAttackGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct AvoidBlockGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct AvoidMobTypeGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct DigGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct DrinkMilkGoalDefinition; }
namespace SharedTypes::v1_21_130 { struct ExploreOutskirtsGoalDefinition; }
namespace SharedTypes::v1_21_130 { struct InvestigateSuspiciousLocationGoalDefinition; }
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

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_21_120::AvoidBlockGoalDefinition>>&
        root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_21_120::AvoidMobTypeGoalDefinition>>&
        root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_21_120::DigGoalDefinition>>& root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_21_120::DrinkMilkGoalDefinition>>&
        root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_21_100::EatMobGoalDefinition>>& root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_21_110::StayNearNoteblockGoalDefinition>>& root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_21_100::ChargeAttackGoalDefinition>>&
                         root,
    ::std::string const& name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_21_100::CircleAroundAnchorGoalDefinition>>& root,
    ::std::string const&                                              name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_21_100::ControlledByPlayerGoalDefinition>>& root,
    ::std::string const&                                              name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_21_100::DragonFlamingGoalDefinition>>& root,
    ::std::string const&                                         name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_21_130::ExploreOutskirtsGoalDefinition>>& root,
    ::std::string const&                                            name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_21_130::InvestigateSuspiciousLocationGoalDefinition>>& root,
    ::std::string const&                                                         name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_21_110::RoarGoalDefinition>>& root,
    ::std::string const&                                                                                         name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_21_110::SlimeAttackGoalDefinition>>&
                         root,
    ::std::string const& name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_21_110::SlimeFloatGoalDefinition>>&
                         root,
    ::std::string const& name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_21_110::SlimeKeepOnJumpingGoalDefinition>>& root,
    ::std::string const&                                              name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_21_110::SlimeRandomDirectionGoalDefinition>>& root,
    ::std::string const&                                                name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_21_110::SniffGoalDefinition>>& root,
    ::std::string const&                                                                                          name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_21_110::SonicBoomGoalDefinition>>&
                         root,
    ::std::string const& name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_21_110::SwimIdleGoalDefinition>>&
                         root,
    ::std::string const& name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_21_110::SwimUpForBreathGoalDefinition>>& root,
    ::std::string const&                                           name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_21_110::SwimWanderGoalDefinition>>&
                         root,
    ::std::string const& name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_21_110::SwoopAttackGoalDefinition>>&
                         root,
    ::std::string const& name
);

MCNAPI_C ::Core::Result deserializeFromFile(::Json::Value& json, ::Core::Path const& path);

MCNAPI void eraseSchema(::HashedString const& name, ::SemVersion const& version);

MCNAPI ::Json::Value& getMemberByCaseInsensitiveName(::Json::Value& node, ::std::string_view memberName);

MCNAPI ::Json::Value const&
getMemberByCaseInsensitiveNameConst(::Json::Value const& node, ::std::string_view memberName);

MCNAPI bool parseBannerBlockType(::BannerBlockType& outType, ::Json::Value const& root);

MCNAPI bool
parseItem(::std::string& outItemName, ::std::string& outItemNamespace, int& inoutItemAux, ::std::string_view inString);

MCNAPI bool parseItemColor(::ItemColor& outColor, ::Json::Value const& root);

MCNAPI bool parseRange(::Json::Value const& root, int& outMin, int& outMax);

MCNAPI_C bool parseRange(::Json::Value const& root, float& outMin, float& outMax);

MCNAPI bool parseVec2(::Vec2& outVec, ::Json::Value const& root);

MCNAPI bool parseVec3(::Vec3& outVec, ::Json::Value const& root);

MCNAPI_C bool parseVec4(::Vec4& outVec, ::Json::Value const& root);

MCNAPI_C ::Json::Value patchJson(::Json::Value const& base, ::Json::Value const& patch, char terminator);

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
