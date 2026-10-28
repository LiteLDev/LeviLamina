#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
struct LegacyGoalDefinition;
namespace SharedTypes::v1_26_60 { struct AmphibiousMoveControlComponentDefinition; }
namespace SharedTypes::v1_26_60 { struct FloatTemptGoalDefinition; }
namespace SharedTypes::v1_26_60 { struct GenericMoveControlComponentDefinition; }
namespace SharedTypes::v1_26_60 { struct GlideMoveControlComponentDefinition; }
namespace SharedTypes::v1_26_60 { struct MoveControlBasicComponentDefinition; }
namespace SharedTypes::v1_26_60 { struct MoveControlFlyComponentDefinition; }
namespace SharedTypes::v1_26_60 { struct MoveControlHoverComponentDefinition; }
namespace SharedTypes::v1_26_60 { struct MoveControlSkipComponentDefinition; }
namespace SharedTypes::v1_26_60 { struct MoveControlSwayComponentDefinition; }
namespace SharedTypes::v1_26_60 { struct SendEventGoalDefinition; }
namespace SharedTypes::v1_26_60 { struct SlimeMoveControlComponentDefinition; }
namespace SharedTypes::v1_26_60 { struct TemptGoalDefinition; }
namespace SharedTypes::v1_26_60 { struct TrailComponentDefinition; }
namespace SharedTypes::v1_26_60 { struct TransformationComponentDefinition; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_60 {
// functions
// NOLINTBEGIN
MCAPI void bindAll(::cereal::ReflectionCtx& ctx);

MCFOLD void deserializeLegacyDescription(
    ::SharedTypes::v1_26_60::AmphibiousMoveControlComponentDefinition& desc,
    ::DeserializeDataParams                                            deserializeDataParams
);

MCFOLD void deserializeLegacyDescription(
    ::SharedTypes::v1_26_60::GenericMoveControlComponentDefinition& desc,
    ::DeserializeDataParams                                         deserializeDataParams
);

MCAPI void deserializeLegacyDescription(
    ::SharedTypes::v1_26_60::GlideMoveControlComponentDefinition& desc,
    ::DeserializeDataParams                                       deserializeDataParams
);

MCFOLD void deserializeLegacyDescription(
    ::SharedTypes::v1_26_60::MoveControlBasicComponentDefinition& desc,
    ::DeserializeDataParams                                       deserializeDataParams
);

MCFOLD void deserializeLegacyDescription(
    ::SharedTypes::v1_26_60::MoveControlFlyComponentDefinition& desc,
    ::DeserializeDataParams                                     deserializeDataParams
);

MCFOLD void deserializeLegacyDescription(
    ::SharedTypes::v1_26_60::MoveControlHoverComponentDefinition& desc,
    ::DeserializeDataParams                                       deserializeDataParams
);

MCFOLD void deserializeLegacyDescription(
    ::SharedTypes::v1_26_60::MoveControlSkipComponentDefinition& desc,
    ::DeserializeDataParams                                      deserializeDataParams
);

MCAPI void deserializeLegacyDescription(
    ::SharedTypes::v1_26_60::MoveControlSwayComponentDefinition& desc,
    ::DeserializeDataParams                                      deserializeDataParams
);

MCAPI void deserializeLegacyDescription(
    ::SharedTypes::v1_26_60::SlimeMoveControlComponentDefinition& desc,
    ::DeserializeDataParams                                       deserializeDataParams
);

MCAPI void deserializeLegacyDescription(
    ::SharedTypes::v1_26_60::TrailComponentDefinition& desc,
    ::DeserializeDataParams                            deserializeDataParams
);

MCAPI void deserializeLegacyDescription(
    ::SharedTypes::v1_26_60::TransformationComponentDefinition& desc,
    ::DeserializeDataParams                                     deserializeDataParams
);

MCFOLD void transformToVersioned(
    ::LegacyGoalDefinition&&                           legacyGoal,
    ::SharedTypes::v1_26_60::FloatTemptGoalDefinition& sharedGoal
);

MCAPI void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_60::SendEventGoalDefinition& sharedGoal);

MCFOLD void
transformToVersioned(::LegacyGoalDefinition&& legacyGoal, ::SharedTypes::v1_26_60::TemptGoalDefinition& sharedGoal);
// NOLINTEND

} // namespace SharedTypes::v1_26_60
