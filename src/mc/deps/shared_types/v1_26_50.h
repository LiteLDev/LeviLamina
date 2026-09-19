#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
namespace Json { class Value; }
namespace SharedTypes::v1_26_50 { struct MobEffectSubcomponentDefinition; }
namespace SharedTypes::v1_26_50 { struct OnHitCommandsStorage; }
namespace SharedTypes::v1_26_50 { struct PreferredPathComponentDefinition; }
namespace SharedTypes::v1_26_50 { struct ProjectileComponentDefinition; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_50 {
// functions
// NOLINTBEGIN
MCAPI void _addEffectFromJSON(::SharedTypes::v1_26_50::MobEffectSubcomponentDefinition& def, ::Json::Value& component);

MCAPI void bindAll(::cereal::ReflectionCtx& ctx);

MCAPI void deserializeActorDefinitionEventSubcomponent(
    ::Json::Value&                                 component,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);

MCAPI void deserializeArrowEffectSubcomponent(
    ::Json::Value&                                 component,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);

MCAPI void deserializeCatchFireSubcomponent(
    ::Json::Value&                                 component,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);

MCAPI void deserializeFreezeOnHitSubcomponent(
    ::Json::Value&                                 component,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);

MCAPI void
deserializeGrantXPSubcomponent(::Json::Value& component, ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands);

MCAPI void deserializeHurtOwnerSubcomponent(
    ::Json::Value&                                 component,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);

MCAPI void deserializeImpactDamageSubcomponent(
    ::Json::Value&                                 component,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);

MCAPI void deserializeLegacyDescription(
    ::SharedTypes::v1_26_50::PreferredPathComponentDefinition& desc,
    ::DeserializeDataParams                                    deserializeDataParams
);

MCAPI void deserializeLegacyDescription(
    ::SharedTypes::v1_26_50::ProjectileComponentDefinition& desc,
    ::DeserializeDataParams                                 deserializeDataParams
);

MCAPI void deserializeMobEffectSubcomponent(
    ::Json::Value&                                 component,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);

MCAPI void deserializeParticleOnHitSubcomponent(
    ::Json::Value&                                 value,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);

MCAPI void deserializeSpawnAoECloudSubcomponent(
    ::Json::Value&                                 component,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);

MCAPI void deserializeSpawnChanceSubcomponent(
    ::Json::Value&                                 component,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);

MCAPI void deserializeStickInGroundSubcomponent(
    ::Json::Value&                                 component,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);

MCAPI void deserializeThrownPotionEffectSubcomponent(
    ::Json::Value&                                 component,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);
// NOLINTEND

} // namespace SharedTypes::v1_26_50
