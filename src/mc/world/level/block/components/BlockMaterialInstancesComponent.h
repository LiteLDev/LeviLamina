#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockMaterialInstancesComponent {

public:
    // prevent constructor by default
    BlockMaterialInstancesComponent& operator=(BlockMaterialInstancesComponent const&) = delete;
    BlockMaterialInstancesComponent(BlockMaterialInstancesComponent const&)            = delete;
    BlockMaterialInstancesComponent()                                                  = delete;

public:
    /**
     * @symbol ??0BlockMaterialInstancesComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI BlockMaterialInstancesComponent(struct BlockMaterialInstancesComponent&&); // NOLINT
    /**
     * @symbol ?getRenderLayer\@BlockMaterialInstancesComponent\@\@QEBA?AW4BlockRenderLayer\@\@XZ
     */
    MCAPI enum class BlockRenderLayer getRenderLayer() const; // NOLINT
    /**
     * @symbol ??4BlockMaterialInstancesComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct BlockMaterialInstancesComponent& operator=(struct BlockMaterialInstancesComponent&&); // NOLINT
};
