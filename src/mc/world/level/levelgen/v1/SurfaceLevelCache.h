#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/levelgen/v1/IPreliminarySurfaceProvider.h"

class SurfaceLevelCache : public ::IPreliminarySurfaceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk85e53a;
    ::ll::UntypedStorage<4, 8>  mUnk3dc6be;
    ::ll::UntypedStorage<8, 8>  mUnkc9b411;
    ::ll::UntypedStorage<8, 24> mUnk64de65;
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
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::optional<short> $getPreliminarySurfaceLevel(::DividedPos2d<4> worldQuartPos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
