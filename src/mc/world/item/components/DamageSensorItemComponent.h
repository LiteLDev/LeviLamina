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
    // vIndex: 0, symbol: __gen_??1DamageSensorItemComponent@@UEAA@XZ
    virtual ~DamageSensorItemComponent() = default;

    // symbol:
    // ??0DamageSensorItemComponent@@QEAA@AEBV?$vector@HV?$allocator@H@std@@@std@@W4LevelSoundEvent@Legacy@Puv@@W4ParticleType@@@Z
    MCAPI DamageSensorItemComponent(std::vector<int> const&, ::Puv::Legacy::LevelSoundEvent, ::ParticleType);

    // symbol: ?getIdentifier@DamageSensorItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
