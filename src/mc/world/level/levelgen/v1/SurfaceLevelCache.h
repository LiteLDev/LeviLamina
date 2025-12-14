#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/levelgen/v1/IPreliminarySurfaceProvider.h"

class SurfaceLevelCache : public ::IPreliminarySurfaceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                               mBufferSizeXZ;
    ::ll::TypedStorage<4, 8, ::DividedPos2d<4> const>              mMinPos;
    ::ll::TypedStorage<8, 8, ::IPreliminarySurfaceProvider const&> mPreliminarySurfaceProvider;
    ::ll::TypedStorage<8, 24, ::std::vector<short>>                mSurfaceLevelBuffer;
    // NOLINTEND

public:
    // prevent constructor by default
    SurfaceLevelCache& operator=(SurfaceLevelCache const&);
    SurfaceLevelCache(SurfaceLevelCache const&);
    SurfaceLevelCache();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4> worldQuartPos) const /*override*/;

    virtual ~SurfaceLevelCache() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<short> $getPreliminarySurfaceLevel(::DividedPos2d<4> worldQuartPos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
