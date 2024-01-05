#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/DividedPos2d.h"
#include "mc/world/level/levelgen/v1/IPreliminarySurfaceProvider.h"

class SurfaceLevelCache : public ::IPreliminarySurfaceProvider {
public:
    // prevent constructor by default
    SurfaceLevelCache& operator=(SurfaceLevelCache const&);
    SurfaceLevelCache(SurfaceLevelCache const&);
    SurfaceLevelCache();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SurfaceLevelCache@@UEAA@XZ
    virtual ~SurfaceLevelCache();

    // vIndex: 1, symbol:
    // ?getPreliminarySurfaceLevel@SurfaceLevelCache@@UEBA?AV?$optional@F@std@@V?$DividedPos2d@$03@@@Z
    virtual std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4>) const;

    // symbol: ??0SurfaceLevelCache@@QEAA@V?$DividedPos2d@$03@@AEBVIPreliminarySurfaceProvider@@_K@Z
    MCAPI SurfaceLevelCache(class DividedPos2d<4> startPos, class IPreliminarySurfaceProvider const&, uint64);

    // NOLINTEND
};
