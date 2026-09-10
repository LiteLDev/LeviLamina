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
// clang-format on

namespace SharedTypes::v1_26_40 {
// functions
// NOLINTBEGIN
MCFOLD void
deserializeLegacyDescription(::SharedTypes::v1_26_40::BucketableComponentDefinition&, ::DeserializeDataParams);

MCFOLD void deserializeLegacyDescription(::SharedTypes::v1_26_40::HideComponentDefinition&, ::DeserializeDataParams);

MCFOLD void deserializeLegacyDescription(
    ::SharedTypes::v1_26_40::ManagedWanderingTraderComponentDefinition&,
    ::DeserializeDataParams
);

MCFOLD void
deserializeLegacyDescription(::SharedTypes::v1_26_40::OpenDoorAnnotationComponentDefinition&, ::DeserializeDataParams);

MCFOLD void
deserializeLegacyDescription(::SharedTypes::v1_26_40::PersistentComponentDefinition&, ::DeserializeDataParams);

MCFOLD void
deserializeLegacyDescription(::SharedTypes::v1_26_40::TradeResupplyComponentDefinition&, ::DeserializeDataParams);

MCFOLD void deserializeLegacyDescription(::SharedTypes::v1_26_40::TrustComponentDefinition&, ::DeserializeDataParams);

MCAPI void deserializeLegacyDescription(
    ::SharedTypes::v1_26_40::DynamicJumpControlComponentDefinition& desc,
    ::DeserializeDataParams                                         deserializeDataParams
);

MCAPI void deserializeLegacyDescription(
    ::SharedTypes::v1_26_40::JumpControlComponentDefinition& desc,
    ::DeserializeDataParams                                  deserializeDataParams
);

MCAPI void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_40::BegGoalDefinition& sharedGoal);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                            legacyGoal,
    ::SharedTypes::v1_26_40::DrinkPotionGoalDefinition& sharedGoal
);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                            legacyGoal,
    ::SharedTypes::v1_26_40::MoveToBlockGoalDefinition& sharedGoal
);

MCAPI void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_40::SnackGoalDefinition& sharedGoal);

MCAPI void transformToVersioned(
    ::LegacyGoalDefinition&&                            legacyGoal,
    ::SharedTypes::v1_26_40::SummonActorGoalDefinition& sharedGoal
);
// NOLINTEND

} // namespace SharedTypes::v1_26_40
