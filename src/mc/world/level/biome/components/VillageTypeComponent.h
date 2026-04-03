#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/VillageType.h"
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct VillageTypeComponent : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::VillageType> mVillageType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VillageTypeComponent() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
