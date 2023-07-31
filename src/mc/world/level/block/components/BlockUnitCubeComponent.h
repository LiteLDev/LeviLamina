#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { struct BlockSchematic; }
// clang-format on

struct BlockUnitCubeComponent {

public:
    // prevent constructor by default
    BlockUnitCubeComponent& operator=(BlockUnitCubeComponent const&) = delete;
    BlockUnitCubeComponent(BlockUnitCubeComponent const&)            = delete;
    BlockUnitCubeComponent()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?mBlockSchematic\@BlockUnitCubeComponent\@\@2V?$shared_ptr\@UBlockSchematic\@ClientBlockPipeline\@\@\@std\@\@A
     */
    MCAPI static std::shared_ptr<struct ClientBlockPipeline::BlockSchematic> mBlockSchematic;
    // NOLINTEND
};
