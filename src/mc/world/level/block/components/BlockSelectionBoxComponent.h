#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockAABBComponentData.h"

struct BlockSelectionBoxComponent : public ::BlockAABBComponentData {
public:
    // prevent constructor by default
    BlockSelectionBoxComponent& operator=(BlockSelectionBoxComponent const&);
    BlockSelectionBoxComponent(BlockSelectionBoxComponent const&);
    BlockSelectionBoxComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockSelectionBoxComponent@@UEAA@XZ
    virtual ~BlockSelectionBoxComponent() = default;

    // symbol: ?usesNewComponentStorage@BlockSelectionBoxComponent@@SA_NXZ
    MCAPI static bool usesNewComponentStorage();

    // NOLINTEND
};
