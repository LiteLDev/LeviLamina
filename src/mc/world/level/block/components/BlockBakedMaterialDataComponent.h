#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockBakedMaterialDataComponent {

public:
    // prevent constructor by default
    BlockBakedMaterialDataComponent& operator=(BlockBakedMaterialDataComponent const&) = delete;
    BlockBakedMaterialDataComponent()                                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0BlockBakedMaterialDataComponent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI BlockBakedMaterialDataComponent(struct BlockBakedMaterialDataComponent const&);
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
