#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ParticleType.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DamageSensorItemComponent : public ::ItemComponent {
public:
    // prevent constructor by default
    DamageSensorItemComponent& operator=(DamageSensorItemComponent const&);
    DamageSensorItemComponent(DamageSensorItemComponent const&);
    DamageSensorItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DamageSensorItemComponent() = default;

    MCAPI DamageSensorItemComponent(
        std::vector<int> const&        damageThresholds,
        ::Puv::Legacy::LevelSoundEvent onDamageSound,
        ::ParticleType                 onDamageParticle
    );

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
