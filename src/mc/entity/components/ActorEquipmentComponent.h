#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorEquipmentComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkfd56aa;
    ::ll::UntypedStorage<8, 8> mUnkdb8ce8;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorEquipmentComponent& operator=(ActorEquipmentComponent const&);
    ActorEquipmentComponent(ActorEquipmentComponent const&);
    ActorEquipmentComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorEquipmentComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
