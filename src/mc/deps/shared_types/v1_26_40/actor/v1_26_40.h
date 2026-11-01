#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
struct LegacyGoalDefinition;
namespace SharedTypes::v1_26_40 { struct BegGoalDefinition; }
namespace SharedTypes::v1_26_40 { struct BucketableComponentDefinition; }
namespace SharedTypes::v1_26_40 { struct DrinkPotionGoalDefinition; }
namespace SharedTypes::v1_26_40 { struct DynamicJumpControlComponentDefinition; }
namespace SharedTypes::v1_26_40 { struct HideComponentDefinition; }
namespace SharedTypes::v1_26_40 { struct JumpControlComponentDefinition; }
namespace SharedTypes::v1_26_40 { struct ManagedWanderingTraderComponentDefinition; }
namespace SharedTypes::v1_26_40 { struct MoveToBlockGoalDefinition; }
namespace SharedTypes::v1_26_40 { struct OpenDoorAnnotationComponentDefinition; }
namespace SharedTypes::v1_26_40 { struct PersistentComponentDefinition; }
namespace SharedTypes::v1_26_40 { struct SnackGoalDefinition; }
namespace SharedTypes::v1_26_40 { struct SummonActorGoalDefinition; }
namespace SharedTypes::v1_26_40 { struct TradeResupplyComponentDefinition; }
namespace SharedTypes::v1_26_40 { struct TrustComponentDefinition; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_40 {
// functions
// NOLINTBEGIN
MCNAPI void bindAll(::cereal::ReflectionCtx& ctx);

MCNAPI void
deserializeLegacyDescription(::SharedTypes::v1_26_40::BucketableComponentDefinition&, ::DeserializeDataParams);

MCNAPI void deserializeLegacyDescription(::SharedTypes::v1_26_40::HideComponentDefinition&, ::DeserializeDataParams);

MCNAPI void deserializeLegacyDescription(
    ::SharedTypes::v1_26_40::ManagedWanderingTraderComponentDefinition&,
    ::DeserializeDataParams
);

MCNAPI void
deserializeLegacyDescription(::SharedTypes::v1_26_40::OpenDoorAnnotationComponentDefinition&, ::DeserializeDataParams);

MCNAPI void
deserializeLegacyDescription(::SharedTypes::v1_26_40::PersistentComponentDefinition&, ::DeserializeDataParams);

MCNAPI void
deserializeLegacyDescription(::SharedTypes::v1_26_40::TradeResupplyComponentDefinition&, ::DeserializeDataParams);

MCNAPI void deserializeLegacyDescription(::SharedTypes::v1_26_40::TrustComponentDefinition&, ::DeserializeDataParams);

MCNAPI void deserializeLegacyDescription(
    ::SharedTypes::v1_26_40::DynamicJumpControlComponentDefinition& desc,
    ::DeserializeDataParams                                         deserializeDataParams
);

MCNAPI void deserializeLegacyDescription(
    ::SharedTypes::v1_26_40::JumpControlComponentDefinition& desc,
    ::DeserializeDataParams                                  deserializeDataParams
);

MCNAPI void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_40::BegGoalDefinition& sharedGoal);

MCNAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                            legacyGoal,
    ::SharedTypes::v1_26_40::DrinkPotionGoalDefinition& sharedGoal
);

MCNAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                            legacyGoal,
    ::SharedTypes::v1_26_40::MoveToBlockGoalDefinition& sharedGoal
);

MCNAPI void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_40::SnackGoalDefinition& sharedGoal);

MCNAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                            legacyGoal,
    ::SharedTypes::v1_26_40::SummonActorGoalDefinition& sharedGoal
);
// NOLINTEND

} // namespace SharedTypes::v1_26_40
