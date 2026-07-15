#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on

class ParticleTrackingSystem : public ::ITickingSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk50d5a6;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleTrackingSystem& operator=(ParticleTrackingSystem const&);
    ParticleTrackingSystem(ParticleTrackingSystem const&);
    ParticleTrackingSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::EntityRegistry& registry) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::EntityRegistry& registry);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
