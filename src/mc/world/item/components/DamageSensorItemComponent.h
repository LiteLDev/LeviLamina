#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ParticleType.h"
#include "mc/events/LevelSoundEvent.h"
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

    MCAPI DamageSensorItemComponent(std::vector<int> const&, ::Puv::Legacy::LevelSoundEvent, ::ParticleType);

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
