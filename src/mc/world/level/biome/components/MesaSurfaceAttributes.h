#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
// clang-format on

struct MesaSurfaceAttributes : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 184, ::BlockDescriptor> mClayMaterial;
    ::ll::TypedStorage<8, 184, ::BlockDescriptor> mHardClayMaterial;
    ::ll::TypedStorage<1, 1, bool>                mBrycePillars;
    ::ll::TypedStorage<1, 1, bool>                mHasForest;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MesaSurfaceAttributes() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MesaSurfaceAttributes();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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
