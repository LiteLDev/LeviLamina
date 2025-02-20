#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
// clang-format on

struct SurfaceMaterialAttributes : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 184, ::BlockDescriptor> mTop;
    ::ll::TypedStorage<8, 184, ::BlockDescriptor> mMid;
    ::ll::TypedStorage<8, 184, ::BlockDescriptor> mSeaFloor;
    ::ll::TypedStorage<8, 184, ::BlockDescriptor> mFoundation;
    ::ll::TypedStorage<8, 184, ::BlockDescriptor> mSea;
    ::ll::TypedStorage<4, 4, int>                 mSeaFloorDepth;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SurfaceMaterialAttributes() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SurfaceMaterialAttributes();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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
