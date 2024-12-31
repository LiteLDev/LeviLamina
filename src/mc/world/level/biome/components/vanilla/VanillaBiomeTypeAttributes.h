#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct VanillaBiomeTypeAttributes : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7328e0;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaBiomeTypeAttributes& operator=(VanillaBiomeTypeAttributes const&);
    VanillaBiomeTypeAttributes(VanillaBiomeTypeAttributes const&);
    VanillaBiomeTypeAttributes();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VanillaBiomeTypeAttributes() /*override*/ = default;
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
