#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockBakedMaterialDataComponent {

public:
    // prevent constructor by default
    BlockBakedMaterialDataComponent& operator=(BlockBakedMaterialDataComponent const&) = delete;
    BlockBakedMaterialDataComponent(BlockBakedMaterialDataComponent const&)            = delete;
    BlockBakedMaterialDataComponent()                                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?isSolidOpaque\@BlockBakedMaterialDataComponent\@\@QEBA_NXZ
     */
    MCAPI bool isSolidOpaque() const;
    /**
     * @symbol ??4BlockBakedMaterialDataComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct BlockBakedMaterialDataComponent& operator=(struct BlockBakedMaterialDataComponent&&);
    // NOLINTEND
};
