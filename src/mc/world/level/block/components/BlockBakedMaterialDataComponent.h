#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BlockComponentBase.h"

struct BlockBakedMaterialDataComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockBakedMaterialDataComponent& operator=(BlockBakedMaterialDataComponent const&);
    BlockBakedMaterialDataComponent(BlockBakedMaterialDataComponent const&);
    BlockBakedMaterialDataComponent();

public:
    // NOLINTBEGIN
    // symbol: ?isSolidOpaque@BlockBakedMaterialDataComponent@@QEBA_NXZ
    MCAPI bool isSolidOpaque() const;

    // symbol: ??4BlockBakedMaterialDataComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct BlockBakedMaterialDataComponent& operator=(struct BlockBakedMaterialDataComponent&&);

    // NOLINTEND
};
