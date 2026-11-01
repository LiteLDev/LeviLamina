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
MCNAPI void _addEffectFromJSON(::SharedTypes::v1_26_50::MobEffectSubcomponentDefinition& def, ::Json::Value& component);

MCNAPI void bindAll(::cereal::ReflectionCtx& ctx);

MCNAPI void deserializeActorDefinitionEventSubcomponent(
    ::Json::Value&                                 component,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);

MCNAPI void deserializeArrowEffectSubcomponent(
    ::Json::Value&                                 component,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);

MCNAPI void deserializeCatchFireSubcomponent(
    ::Json::Value&                                 component,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);

MCNAPI void deserializeFreezeOnHitSubcomponent(
    ::Json::Value&                                 component,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);

MCNAPI void
deserializeGrantXPSubcomponent(::Json::Value& component, ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands);

MCNAPI void deserializeHurtOwnerSubcomponent(
    ::Json::Value&                                 component,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);

MCNAPI void deserializeImpactDamageSubcomponent(
    ::Json::Value&                                 component,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);

MCNAPI void deserializeLegacyDescription(
    ::SharedTypes::v1_26_50::PreferredPathComponentDefinition& desc,
    ::DeserializeDataParams                                    deserializeDataParams
);

MCNAPI void deserializeLegacyDescription(
    ::SharedTypes::v1_26_50::ProjectileComponentDefinition& desc,
    ::DeserializeDataParams                                 deserializeDataParams
);

MCNAPI void deserializeMobEffectSubcomponent(
    ::Json::Value&                                 component,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);

MCNAPI void deserializeParticleOnHitSubcomponent(
    ::Json::Value&                                 value,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);

MCNAPI void deserializeSpawnAoECloudSubcomponent(
    ::Json::Value&                                 component,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);

MCNAPI void deserializeSpawnChanceSubcomponent(
    ::Json::Value&                                 component,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);

MCNAPI void deserializeStickInGroundSubcomponent(
    ::Json::Value&                                 component,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);

MCNAPI void deserializeThrownPotionEffectSubcomponent(
    ::Json::Value&                                 component,
    ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
);
// NOLINTEND

} // namespace SharedTypes::v1_26_50
