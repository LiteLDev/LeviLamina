#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CappedSurfaceAttributes {
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

    // NOLINTEND
};
