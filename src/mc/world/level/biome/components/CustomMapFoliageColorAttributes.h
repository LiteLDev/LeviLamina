#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct CustomMapFoliageColorAttributes : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd1743e;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomMapFoliageColorAttributes& operator=(CustomMapFoliageColorAttributes const&);
    CustomMapFoliageColorAttributes(CustomMapFoliageColorAttributes const&);
    CustomMapFoliageColorAttributes();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CustomMapFoliageColorAttributes() /*override*/ = default;
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
