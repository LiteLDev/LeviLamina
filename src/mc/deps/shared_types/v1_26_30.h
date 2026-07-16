#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct LegacyGoalDefinition;
namespace SharedTypes::v1_26_30 { struct DefendTrustedTargetGoalDefinition; }
namespace SharedTypes::v1_26_30 { struct FollowCaravanGoalDefinition; }
namespace SharedTypes::v1_26_30 { struct HurtByTargetGoalDefinition; }
namespace SharedTypes::v1_26_30 { struct NearestPrioritizedAttackableTargetGoalDefinition; }
namespace SharedTypes::v1_26_30 { struct OwnerHurtByTargetGoalDefinition; }
namespace SharedTypes::v1_26_30 { struct OwnerHurtTargetGoalDefinition; }
namespace SharedTypes::v1_26_30 { struct ShareItemsGoalDefinition; }
namespace SharedTypes::v1_26_30 { struct SneezeGoalDefinition; }
namespace SharedTypes::v1_26_30 { struct TargetWhenPushedGoalDefinition; }
// clang-format on

namespace SharedTypes::v1_26_30 {
// functions
// NOLINTBEGIN
MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                                    legacyGoal,
    ::SharedTypes::v1_26_30::DefendTrustedTargetGoalDefinition& sharedGoal
);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                              legacyGoal,
    ::SharedTypes::v1_26_30::FollowCaravanGoalDefinition& sharedGoal
);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                             legacyGoal,
    ::SharedTypes::v1_26_30::HurtByTargetGoalDefinition& sharedGoal
);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                                                   legacyGoal,
    ::SharedTypes::v1_26_30::NearestPrioritizedAttackableTargetGoalDefinition& sharedGoal
);

MCFOLD void transformToVersioned(
    ::LegacyGoalDefinition&&                                  legacyGoal,
    ::SharedTypes::v1_26_30::OwnerHurtByTargetGoalDefinition& sharedGoal
);

MCFOLD void transformToVersioned(
    ::LegacyGoalDefinition&&                                legacyGoal,
    ::SharedTypes::v1_26_30::OwnerHurtTargetGoalDefinition& sharedGoal
);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                           legacyGoal,
    ::SharedTypes::v1_26_30::ShareItemsGoalDefinition& sharedGoal
);

MCAPI void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_30::SneezeGoalDefinition& sharedGoal);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                                 legacyGoal,
    ::SharedTypes::v1_26_30::TargetWhenPushedGoalDefinition& sharedGoal
);
// NOLINTEND

} // namespace SharedTypes::v1_26_30
