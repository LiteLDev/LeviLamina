#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct LegacyGoalDefinition;
namespace SharedTypes::v1_26_10 { struct ActorDocument; }
namespace SharedTypes::v1_26_10 { struct InspectBookshelfGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct LayEggGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct MoveToLandGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct MoveToLavaGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct MoveToLiquidGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct MoveToWaterGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct OcelotSitOnBlockGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct RaidGardenGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct RamAttackGoalDefinition; }
namespace SharedTypes::v1_26_10 { struct StompEggGoalDefinition; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10 {
// functions
// NOLINTBEGIN
MCAPI void bindAll(::cereal::ReflectionCtx& ctx);

MCFOLD bool operator==(::SharedTypes::v1_26_10::ActorDocument const&, ::SharedTypes::v1_26_10::ActorDocument const&);

MCAPI bool operator==(
    ::SharedTypes::v1_26_10::RamAttackGoalDefinition const&,
    ::SharedTypes::v1_26_10::RamAttackGoalDefinition const&
);

MCFOLD void transformToVersioned(
    ::LegacyGoalDefinition&&                                 legacyGoal,
    ::SharedTypes::v1_26_10::InspectBookshelfGoalDefinition& sharedGoal
);

MCAPI void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_10::LayEggGoalDefinition& sharedGoal);

MCFOLD void transformToVersioned(
    ::LegacyGoalDefinition&&                           legacyGoal,
    ::SharedTypes::v1_26_10::MoveToLandGoalDefinition& sharedGoal
);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                           legacyGoal,
    ::SharedTypes::v1_26_10::MoveToLavaGoalDefinition& sharedGoal
);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                             legacyGoal,
    ::SharedTypes::v1_26_10::MoveToLiquidGoalDefinition& sharedGoal
);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                            legacyGoal,
    ::SharedTypes::v1_26_10::MoveToWaterGoalDefinition& sharedGoal
);

MCFOLD void transformToVersioned(
    ::LegacyGoalDefinition&&                                 legacyGoal,
    ::SharedTypes::v1_26_10::OcelotSitOnBlockGoalDefinition& sharedGoal
);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                           legacyGoal,
    ::SharedTypes::v1_26_10::RaidGardenGoalDefinition& sharedGoal
);

MCAPI void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_10::StompEggGoalDefinition& sharedGoal);
// NOLINTEND

} // namespace SharedTypes::v1_26_10
