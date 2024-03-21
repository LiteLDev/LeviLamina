#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/item/FallingBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class GravelBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    GravelBlock& operator=(GravelBlock const&);
    GravelBlock(GravelBlock const&);
    GravelBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GravelBlock@@UEAA@XZ
    virtual ~GravelBlock() = default;

    // vIndex: 47, symbol: ?canBeOriginalSurface@GravelBlock@@UEBA_NXZ
    virtual bool canBeOriginalSurface() const;

    // vIndex: 79, symbol:
    // ?onFertilized@GravelBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* entity, ::FertilizerType fType)
        const;

    // vIndex: 80, symbol: ?mayConsumeFertilizer@GravelBlock@@UEBA_NAEAVBlockSource@@@Z
    virtual bool mayConsumeFertilizer(class BlockSource& region) const;

    // vIndex: 81, symbol: ?canBeFertilized@GravelBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool
    canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    // vIndex: 163, symbol: ?getDustColor@GravelBlock@@UEBA?AVColor@mce@@AEBVBlock@@@Z
    virtual class mce::Color getDustColor(class Block const& block) const;

    // vIndex: 164, symbol:
    // ?getDustParticleName@GravelBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string getDustParticleName(class Block const&) const;

    // symbol: ??0GravelBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI GravelBlock(std::string const& nameId, int type);

    // NOLINTEND
};
