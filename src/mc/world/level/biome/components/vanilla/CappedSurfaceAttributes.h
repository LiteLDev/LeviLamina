#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/BiomeComponentBase.h"

struct CappedSurfaceAttributes : public ::BiomeComponentBase {
public:
    // prevent constructor by default
    CappedSurfaceAttributes& operator=(CappedSurfaceAttributes const&);
    CappedSurfaceAttributes(CappedSurfaceAttributes const&);
    CappedSurfaceAttributes();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CappedSurfaceAttributes@@UEAA@XZ
    virtual ~CappedSurfaceAttributes() = default;

    // symbol: ?initializeNoise@CappedSurfaceAttributes@@QEAAXI@Z
    MCAPI void initializeNoise(uint levelSeed);

    // symbol: ??4CappedSurfaceAttributes@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct CappedSurfaceAttributes& operator=(struct CappedSurfaceAttributes&&);

    // NOLINTEND
};
