#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentBase.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { struct BlockSchematic; }
// clang-format on

struct BlockUnitCubeComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockUnitCubeComponent& operator=(BlockUnitCubeComponent const&);
    BlockUnitCubeComponent(BlockUnitCubeComponent const&);
    BlockUnitCubeComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockUnitCubeComponent@@UEAA@XZ
    virtual ~BlockUnitCubeComponent() = default;

    // symbol: ?mBlockSchematic@BlockUnitCubeComponent@@2V?$shared_ptr@UBlockSchematic@ClientBlockPipeline@@@std@@A
    MCAPI static std::shared_ptr<struct ClientBlockPipeline::BlockSchematic> mBlockSchematic;

    // NOLINTEND
};
