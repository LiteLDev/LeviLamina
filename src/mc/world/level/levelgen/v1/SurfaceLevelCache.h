#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/levelgen/v1/IPreliminarySurfaceProvider.h"

class SurfaceLevelCache : public ::IPreliminarySurfaceProvider {
public:
    // prevent constructor by default
    SurfaceLevelCache& operator=(SurfaceLevelCache const&);
    SurfaceLevelCache(SurfaceLevelCache const&);
    SurfaceLevelCache();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SurfaceLevelCache();

    // vIndex: 1
    virtual std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4> worldQuartPos) const;

    MCAPI SurfaceLevelCache(
        class DividedPos2d<4>                    startPos,
        class IPreliminarySurfaceProvider const& preliminarySurfaceProvider,
        uint64                                   bufferSizeXZ
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        class DividedPos2d<4>                    startPos,
        class IPreliminarySurfaceProvider const& preliminarySurfaceProvider,
        uint64                                   bufferSizeXZ
    );

    MCAPI void dtor$();

    MCAPI std::optional<short> getPreliminarySurfaceLevel$(class DividedPos2d<4> worldQuartPos) const;

    // NOLINTEND
};
