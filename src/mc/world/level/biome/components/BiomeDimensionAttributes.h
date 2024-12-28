#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct BiomeDimensionAttributes : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkef4255;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeDimensionAttributes& operator=(BiomeDimensionAttributes const&);
    BiomeDimensionAttributes(BiomeDimensionAttributes const&);
    BiomeDimensionAttributes();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BiomeDimensionAttributes() /*override*/;
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
