#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/MultifaceBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class SculkVeinBlock : public ::MultifaceBlock {
public:
    // prevent constructor by default
    SculkVeinBlock& operator=(SculkVeinBlock const&);
    SculkVeinBlock(SculkVeinBlock const&);
    SculkVeinBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SculkVeinBlock@@UEAA@XZ
    virtual ~SculkVeinBlock() = default;

    // vIndex: 61, symbol: ?checkIsPathable@SculkVeinBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 95, symbol: ?asItemInstance@SculkVeinBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 163, symbol: ?getMultifaceBlock@SculkVeinBlock@@UEBAAEBVBlock@@XZ
    virtual class Block const& getMultifaceBlock() const;

    // vIndex: 164, symbol: ?getMultifaceSpreader@SculkVeinBlock@@UEBAAEBVMultifaceSpreader@@XZ
    virtual class MultifaceSpreader const& getMultifaceSpreader() const;

    // symbol:
    // ??0SculkVeinBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI SculkVeinBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
