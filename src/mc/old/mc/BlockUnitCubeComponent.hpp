/**
 * @file  BlockUnitCubeComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockUnitCubeComponent.
 *
 */
struct BlockUnitCubeComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKUNITCUBECOMPONENT
public:
    struct BlockUnitCubeComponent& operator=(struct BlockUnitCubeComponent const &) = delete;
    BlockUnitCubeComponent(struct BlockUnitCubeComponent const &) = delete;
    BlockUnitCubeComponent() = delete;
#endif

public:
    /**
     * @symbol  ?mBlockSchematic\@BlockUnitCubeComponent\@\@2V?$shared_ptr\@UBlockSchematic\@ClientBlockPipeline\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<struct ClientBlockPipeline::BlockSchematic> mBlockSchematic;

};