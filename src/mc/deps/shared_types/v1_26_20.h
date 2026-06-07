#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct LegacyGoalDefinition;
namespace SharedTypes::v1_26_20 { struct ActorDocument; }
namespace SharedTypes::v1_26_20 { struct AdmireItemGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct BarterGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct EatCarriedItemGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct FindCoverGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct FindMountGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct FindUnderwaterTreasureGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct FleeSunGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct FloatGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct FollowOwnerGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct FollowParentGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct HideGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct HoldGroundGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct HoverGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct LayDownGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct MingleGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct MountPathingGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct MoveThroughVillageGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct MoveToPOIGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct MoveToRandomBlockGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct MoveToVillageGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct MoveTowardsTargetGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct PetSleepWithOwnerGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct PickupItemsGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct PlayerVehicleTamedGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct RandomHoverGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct RandomSitGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct RandomStrollGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct SleepGoalDefinition; }
namespace SharedTypes::v1_26_20 { struct SpawnOnDeathComponentDefinition; }
namespace SharedTypes::v1_26_20 { struct StrollTowardsVillageGoalDefinition; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {
// functions
// NOLINTBEGIN
MCAPI void bindAll(::cereal::ReflectionCtx& ctx);

MCAPI bool operator==(::SharedTypes::v1_26_20::ActorDocument const&, ::SharedTypes::v1_26_20::ActorDocument const&);

MCAPI bool operator==(
    ::SharedTypes::v1_26_20::SpawnOnDeathComponentDefinition const&,
    ::SharedTypes::v1_26_20::SpawnOnDeathComponentDefinition const&
);

MCFOLD void transformToVersioned(::LegacyGoalDefinition&&, ::SharedTypes::v1_26_20::BarterGoalDefinition&);

MCFOLD void transformToVersioned(::LegacyGoalDefinition&&, ::SharedTypes::v1_26_20::HoverGoalDefinition&);

MCFOLD void transformToVersioned(::LegacyGoalDefinition&&, ::SharedTypes::v1_26_20::PlayerVehicleTamedGoalDefinition&);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                           legacyGoal,
    ::SharedTypes::v1_26_20::AdmireItemGoalDefinition& sharedGoal
);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                               legacyGoal,
    ::SharedTypes::v1_26_20::EatCarriedItemGoalDefinition& sharedGoal
);

MCAPI void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_20::FindCoverGoalDefinition& sharedGoal);

MCAPI void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_20::FindMountGoalDefinition& sharedGoal);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                                       legacyGoal,
    ::SharedTypes::v1_26_20::FindUnderwaterTreasureGoalDefinition& sharedGoal
);

MCAPI void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_20::FleeSunGoalDefinition& sharedGoal);

MCAPI void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_20::FloatGoalDefinition& sharedGoal);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                            legacyGoal,
    ::SharedTypes::v1_26_20::FollowOwnerGoalDefinition& sharedGoal
);

MCFOLD void transformToVersioned(
    ::LegacyGoalDefinition&&                             legacyGoal,
    ::SharedTypes::v1_26_20::FollowParentGoalDefinition& sharedGoal
);

MCAPI void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_20::HideGoalDefinition& sharedGoal);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                           legacyGoal,
    ::SharedTypes::v1_26_20::HoldGroundGoalDefinition& sharedGoal
);

MCAPI void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_20::LayDownGoalDefinition& sharedGoal);

MCAPI void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_20::MingleGoalDefinition& sharedGoal);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                             legacyGoal,
    ::SharedTypes::v1_26_20::MountPathingGoalDefinition& sharedGoal
);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                                   legacyGoal,
    ::SharedTypes::v1_26_20::MoveThroughVillageGoalDefinition& sharedGoal
);

MCFOLD void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_20::MoveToPOIGoalDefinition& sharedGoal);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                                  legacyGoal,
    ::SharedTypes::v1_26_20::MoveToRandomBlockGoalDefinition& sharedGoal
);

MCFOLD void transformToVersioned(
    ::LegacyGoalDefinition&&                              legacyGoal,
    ::SharedTypes::v1_26_20::MoveToVillageGoalDefinition& sharedGoal
);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                                  legacyGoal,
    ::SharedTypes::v1_26_20::MoveTowardsTargetGoalDefinition& sharedGoal
);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                                  legacyGoal,
    ::SharedTypes::v1_26_20::PetSleepWithOwnerGoalDefinition& sharedGoal
);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                            legacyGoal,
    ::SharedTypes::v1_26_20::PickupItemsGoalDefinition& sharedGoal
);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                            legacyGoal,
    ::SharedTypes::v1_26_20::RandomHoverGoalDefinition& sharedGoal
);

MCAPI void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_20::RandomSitGoalDefinition& sharedGoal);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                             legacyGoal,
    ::SharedTypes::v1_26_20::RandomStrollGoalDefinition& sharedGoal
);

MCAPI void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_20::SleepGoalDefinition& sharedGoal);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                                     legacyGoal,
    ::SharedTypes::v1_26_20::StrollTowardsVillageGoalDefinition& sharedGoal
);
// NOLINTEND

} // namespace SharedTypes::v1_26_20
