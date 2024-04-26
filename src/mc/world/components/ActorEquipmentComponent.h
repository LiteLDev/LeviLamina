#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorEquipmentComponent {
public:
    // prevent constructor by default
    ActorEquipmentComponent& operator=(ActorEquipmentComponent const&);
    ActorEquipmentComponent(ActorEquipmentComponent const&);
    ActorEquipmentComponent();

public:
    // NOLINTBEGIN
    // symbol: ??4ActorEquipmentComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct ActorEquipmentComponent& operator=(struct ActorEquipmentComponent&&);

    // symbol: ??1ActorEquipmentComponent@@QEAA@XZ
    MCAPI ~ActorEquipmentComponent();

    // NOLINTEND
};
