#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

class WorldGenMultiNoiseClimateAttributes : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk150470;
    ::ll::UntypedStorage<4, 4> mUnk31b00e;
    ::ll::UntypedStorage<4, 4> mUnk61ec4b;
    ::ll::UntypedStorage<4, 4> mUnkbe0ade;
    ::ll::UntypedStorage<4, 4> mUnk76c988;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldGenMultiNoiseClimateAttributes& operator=(WorldGenMultiNoiseClimateAttributes const&);
    WorldGenMultiNoiseClimateAttributes(WorldGenMultiNoiseClimateAttributes const&);
    WorldGenMultiNoiseClimateAttributes();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorldGenMultiNoiseClimateAttributes() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
