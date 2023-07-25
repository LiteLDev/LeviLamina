#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { struct BlockSchematic; }
// clang-format on

struct BlockUnitCubeComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKUNITCUBECOMPONENT
public:
    BlockUnitCubeComponent& operator=(BlockUnitCubeComponent const&) = delete;
    BlockUnitCubeComponent(BlockUnitCubeComponent const&)            = delete;
    BlockUnitCubeComponent()                                         = delete;
#endif

public:
    /**
     * @symbol
     * ?mBlockSchematic\@BlockUnitCubeComponent\@\@2V?$shared_ptr\@UBlockSchematic\@ClientBlockPipeline\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<struct ClientBlockPipeline::BlockSchematic> mBlockSchematic;
};
