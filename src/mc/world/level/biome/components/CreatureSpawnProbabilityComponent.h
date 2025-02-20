#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct CreatureSpawnProbabilityComponent : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk9241bf;
    // NOLINTEND

public:
    // prevent constructor by default
    CreatureSpawnProbabilityComponent& operator=(CreatureSpawnProbabilityComponent const&);
    CreatureSpawnProbabilityComponent(CreatureSpawnProbabilityComponent const&);
    CreatureSpawnProbabilityComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CreatureSpawnProbabilityComponent() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
