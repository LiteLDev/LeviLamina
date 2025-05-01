#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"
#include "mc/world/level/block/BlockDescriptor.h"

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
    MCNAPI SurfaceMaterialAttributes();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
