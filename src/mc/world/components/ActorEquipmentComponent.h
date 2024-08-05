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
    MCAPI struct ActorEquipmentComponent& operator=(struct ActorEquipmentComponent&&);

    MCAPI ~ActorEquipmentComponent();

    // NOLINTEND
};
