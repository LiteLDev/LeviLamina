/**
 * @file  BlockMaterialInstancesComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockMaterialInstancesComponent.
 *
 */
struct BlockMaterialInstancesComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKMATERIALINSTANCESCOMPONENT
public:
    struct BlockMaterialInstancesComponent& operator=(struct BlockMaterialInstancesComponent const &) = delete;
    BlockMaterialInstancesComponent(struct BlockMaterialInstancesComponent const &) = delete;
    BlockMaterialInstancesComponent() = delete;
#endif

public:
    /**
     * @symbol  ??0BlockMaterialInstancesComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI BlockMaterialInstancesComponent(struct BlockMaterialInstancesComponent &&);
    /**
     * @symbol  ?getRenderLayer\@BlockMaterialInstancesComponent\@\@QEBA?AW4BlockRenderLayer\@\@XZ
     */
    MCAPI enum class BlockRenderLayer getRenderLayer() const;
    /**
     * @symbol  ??4BlockMaterialInstancesComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct BlockMaterialInstancesComponent & operator=(struct BlockMaterialInstancesComponent &&);
    /**
     * @symbol  ??1BlockMaterialInstancesComponent\@\@QEAA\@XZ
     */
    MCAPI ~BlockMaterialInstancesComponent();

};