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
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
namespace JsonUtil { class JsonSchemaNodeBase; }
namespace SharedTypes::v1_21_100 { struct DragonFlamingGoalDefinition; }
namespace SharedTypes::v1_21_100 { struct EatMobGoalDefinition; }
namespace SharedTypes::v1_21_110 { struct ExperienceRewardComponentDefinition; }
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
namespace SharedTypes::v1_21_120 { struct DigGoalDefinition; }
namespace SharedTypes::v1_21_120 { struct DrinkMilkGoalDefinition; }
namespace SharedTypes::v1_21_130 { struct ExploreOutskirtsGoalDefinition; }
namespace SharedTypes::v1_21_130 { struct InvestigateSuspiciousLocationGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct DragonStrafePlayerGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct GuardianAttackGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct MeleeAttackGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct MeleeBoxAttackGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct MoveTowardsDwellingRestrictionGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct MoveTowardsHomeRestrictionGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct NearestAttackableTargetGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct StompAttackGoalDefinition; }
namespace SharedTypes::v1_26_0 { struct TimerActorFlag1GoalDefinition; }
namespace SharedTypes::v1_26_0 { struct TimerActorFlag2GoalDefinition; }
namespace SharedTypes::v1_26_0 { struct TimerActorFlag3GoalDefinition; }
namespace SharedTypes::v1_26_10 { struct DropItemForGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct FertilizeFarmBlockGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct HarvestFarmBlockGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct OcelotAttackGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct OfferFlowerGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct PlayDeadGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct PlayGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct RaiderCelebrationGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct RamAttackGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct RandomSearchAndDigGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct SwimWithEntityGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct TakeFlowerGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct TeleportToOwnerGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct TradeWithPlayerGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct VillagerCelebrationGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct WorkComposterGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct EquipItemGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct GoAndGiveItemsToNoteblockGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct GoAndGiveItemsToOwnerGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct GoHomeGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct JumpAroundTargetGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct JumpToBlockGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct MoveAroundTargetGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct MoveIndoorsGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct MoveOutdoorsGoalDefinition; }
namespace SharedTypes::v1_26_30 { struct EmergeGoalDefinition; }
namespace SharedTypes::v1_26_30 { struct FireAtTargetGoalDefinition; }
namespace SharedTypes::v1_26_30 { struct PlaceBlockGoalDefinition; }
namespace SharedTypes::v1_26_30 { struct TakeBlockGoalDefinition; }
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

MCNAPI void buildActorDefinitionSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition>>& root
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
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_26_20::EquipItemGoalDefinition>>&
        root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_26_20::GoAndGiveItemsToNoteblockGoalDefinition>>& root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_26_20::GoAndGiveItemsToOwnerGoalDefinition>>& root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_26_20::GoHomeGoalDefinition>>& root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_26_20::JumpAroundTargetGoalDefinition>>& root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_26_20::JumpToBlockGoalDefinition>>&
        root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_26_0::MeleeAttackGoalDefinition>>&
        root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_26_20::MoveIndoorsGoalDefinition>>&
        root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_26_20::MoveOutdoorsGoalDefinition>>&
        root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_26_0::MoveTowardsDwellingRestrictionGoalDefinition>>& root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_26_0::MoveTowardsHomeRestrictionGoalDefinition>>& root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_26_30::PlaceBlockGoalDefinition>>&
        root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_26_10::PlayDeadGoalDefinition>>&
        root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_26_10::RaiderCelebrationGoalDefinition>>& root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_26_10::RamAttackGoalDefinition>>&
        root,
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
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_26_30::TakeBlockGoalDefinition>>&
        root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_26_0::TimerActorFlag1GoalDefinition>>& root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_26_0::TimerActorFlag2GoalDefinition>>& root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_26_0::TimerActorFlag3GoalDefinition>>& root,
    ::std::string const&
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_26_10::VillagerCelebrationGoalDefinition>>& root,
    ::std::string const&
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
        ::SharedTypes::v1_26_0::DragonStrafePlayerGoalDefinition>>& root,
    ::std::string const&                                            name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_26_10::DropItemForGoalDefinition>>&
                         root,
    ::std::string const& name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_26_30::EmergeGoalDefinition>>& root,
    ::std::string const&                                                                                          name
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
        ::SharedTypes::v1_26_10::FertilizeFarmBlockGoalDefinition>>& root,
    ::std::string const&                                             name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_26_30::FireAtTargetGoalDefinition>>&
                         root,
    ::std::string const& name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_26_0::GuardianAttackGoalDefinition>>&
                         root,
    ::std::string const& name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_26_10::HarvestFarmBlockGoalDefinition>>& root,
    ::std::string const&                                           name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_21_130::InvestigateSuspiciousLocationGoalDefinition>>& root,
    ::std::string const&                                                         name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_26_0::MeleeBoxAttackGoalDefinition>>&
                         root,
    ::std::string const& name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_26_20::MoveAroundTargetGoalDefinition>>& root,
    ::std::string const&                                           name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_26_0::NearestAttackableTargetGoalDefinition>>& root,
    ::std::string const&                                                 name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_26_10::OcelotAttackGoalDefinition>>&
                         root,
    ::std::string const& name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_26_10::OfferFlowerGoalDefinition>>&
                         root,
    ::std::string const& name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_26_10::PlayGoalDefinition>>& root,
    ::std::string const&                                                                                        name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_26_10::RandomSearchAndDigGoalDefinition>>& root,
    ::std::string const&                                             name
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
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_26_0::StompAttackGoalDefinition>>&
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
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_26_10::SwimWithEntityGoalDefinition>>& root,
    ::std::string const&                                         name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_21_110::SwoopAttackGoalDefinition>>&
                         root,
    ::std::string const& name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_26_10::TakeFlowerGoalDefinition>>&
                         root,
    ::std::string const& name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_26_10::TeleportToOwnerGoalDefinition>>& root,
    ::std::string const&                                          name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::EmptyClass,
        ::SharedTypes::v1_26_10::TradeWithPlayerGoalDefinition>>& root,
    ::std::string const&                                          name
);

MCNAPI void buildActorGoalSchema(
    ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SharedTypes::v1_26_10::WorkComposterGoalDefinition>>&
                         root,
    ::std::string const& name
);

MCNAPI void eraseSchema(::HashedString const& name, ::SemVersion const& version);

MCNAPI ::Json::Value& getMemberByCaseInsensitiveName(::Json::Value& node, ::std::string_view memberName);

MCNAPI ::Json::Value const&
getMemberByCaseInsensitiveNameConst(::Json::Value const& node, ::std::string_view memberName);

MCNAPI ::std::map<::HashedString, ::std::map<::SemVersion, ::std::shared_ptr<::JsonUtil::JsonSchemaNodeBase>>>&
getSchemaMap();

MCNAPI bool parseBannerBlockType(::BannerBlockType& outType, ::Json::Value const& root);

MCNAPI bool
parseItem(::std::string& outItemName, ::std::string& outItemNamespace, int& inoutItemAux, ::std::string_view inString);

MCNAPI bool parseItemColor(::ItemColor& outColor, ::Json::Value const& root);

MCNAPI bool parseRange(::Json::Value const& root, int& outMin, int& outMax);

#ifdef LL_PLAT_C
MCNAPI bool parseRange(::Json::Value const& root, float& outMin, float& outMax);
#endif

MCNAPI bool parseVec2(::Vec2& outVec, ::Json::Value const& root);

MCNAPI bool parseVec3(::Vec3& outVec, ::Json::Value const& root);

#ifdef LL_PLAT_C
MCNAPI bool parseVec4(::Vec4& outVec, ::Json::Value const& root);

MCNAPI ::Json::Value patchJson(::Json::Value const& base, ::Json::Value const& patch, char terminator);
#endif

MCNAPI void setDefaultPrettyName(::std::string& destPrettyName, ::HashedString const& sourceName);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::HashedString const& ACTOR_DAMAGE_CAUSE();

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
