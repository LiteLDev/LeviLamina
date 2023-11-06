#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BlockComponentBase.h"

struct BlockGeometryComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockGeometryComponent& operator=(BlockGeometryComponent const&);
    BlockGeometryComponent(BlockGeometryComponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockGeometryComponent@@UEAA@XZ
    virtual ~BlockGeometryComponent();

    // symbol: ??0BlockGeometryComponent@@QEAA@XZ
    MCAPI BlockGeometryComponent();

    // symbol: ??0BlockGeometryComponent@@QEAA@$$QEAU0@@Z
    MCAPI BlockGeometryComponent(struct BlockGeometryComponent&&);

    // symbol: ??4BlockGeometryComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct BlockGeometryComponent& operator=(struct BlockGeometryComponent&&);

    // NOLINTEND
};
