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
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {
// functions
// NOLINTBEGIN
MCNAPI void bindAll(::cereal::ReflectionCtx& ctx);

MCNAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                                    legacyGoal,
    ::SharedTypes::v1_26_30::DefendTrustedTargetGoalDefinition& sharedGoal
);

MCNAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                              legacyGoal,
    ::SharedTypes::v1_26_30::FollowCaravanGoalDefinition& sharedGoal
);

MCNAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                             legacyGoal,
    ::SharedTypes::v1_26_30::HurtByTargetGoalDefinition& sharedGoal
);

MCNAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                                                   legacyGoal,
    ::SharedTypes::v1_26_30::NearestPrioritizedAttackableTargetGoalDefinition& sharedGoal
);

MCNAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                                  legacyGoal,
    ::SharedTypes::v1_26_30::OwnerHurtByTargetGoalDefinition& sharedGoal
);

MCNAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                                legacyGoal,
    ::SharedTypes::v1_26_30::OwnerHurtTargetGoalDefinition& sharedGoal
);

MCNAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                           legacyGoal,
    ::SharedTypes::v1_26_30::ShareItemsGoalDefinition& sharedGoal
);

MCNAPI void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_30::SneezeGoalDefinition& sharedGoal);

MCNAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                                 legacyGoal,
    ::SharedTypes::v1_26_30::TargetWhenPushedGoalDefinition& sharedGoal
);
// NOLINTEND

} // namespace SharedTypes::v1_26_30
