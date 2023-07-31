#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockMaterialInstancesComponent {

public:
    // prevent constructor by default
    BlockMaterialInstancesComponent& operator=(BlockMaterialInstancesComponent const&) = delete;
    BlockMaterialInstancesComponent(BlockMaterialInstancesComponent const&)            = delete;
    BlockMaterialInstancesComponent()                                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0BlockMaterialInstancesComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI BlockMaterialInstancesComponent(struct BlockMaterialInstancesComponent&&);
    /**
     * @symbol ?getRenderLayer\@BlockMaterialInstancesComponent\@\@QEBA?AW4BlockRenderLayer\@\@XZ
     */
    MCAPI enum class BlockRenderLayer getRenderLayer() const;
    /**
     * @symbol ??4BlockMaterialInstancesComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct BlockMaterialInstancesComponent& operator=(struct BlockMaterialInstancesComponent&&);
    // NOLINTEND
};
