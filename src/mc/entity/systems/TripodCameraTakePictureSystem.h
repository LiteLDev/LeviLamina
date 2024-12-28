#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on

class TripodCameraTakePictureSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    TripodCameraTakePictureSystem& operator=(TripodCameraTakePictureSystem const&);
    TripodCameraTakePictureSystem(TripodCameraTakePictureSystem const&);
    TripodCameraTakePictureSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::EntityRegistry& registry) /*override*/;

    // vIndex: 0
    virtual ~TripodCameraTakePictureSystem() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::EntityRegistry& registry);
    // NOLINTEND
};
