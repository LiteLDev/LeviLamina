/**
 * @file  BlockMaterialInstancesComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -90297987
     * @symbol  ??0BlockMaterialInstancesComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI BlockMaterialInstancesComponent(struct BlockMaterialInstancesComponent &&);
    /**
     * @hash   -1069077754
     * @symbol  ?getRenderLayer\@BlockMaterialInstancesComponent\@\@QEBA?AW4BlockRenderLayer\@\@XZ
     */
    MCAPI enum class BlockRenderLayer getRenderLayer() const;
    /**
     * @hash   -931985242
     * @symbol  ??4BlockMaterialInstancesComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct BlockMaterialInstancesComponent & operator=(struct BlockMaterialInstancesComponent &&);
    /**
     * @hash   -1132103313
     * @symbol  ??1BlockMaterialInstancesComponent\@\@QEAA\@XZ
     */
    MCAPI ~BlockMaterialInstancesComponent();

};