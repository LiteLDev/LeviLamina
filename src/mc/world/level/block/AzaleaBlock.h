#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BushBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class AzaleaBlock : public ::BushBlock {
public:
    // prevent constructor by default
    AzaleaBlock& operator=(AzaleaBlock const&);
    AzaleaBlock(AzaleaBlock const&);
    AzaleaBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AzaleaBlock@@UEAA@XZ
    virtual ~AzaleaBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@AzaleaBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 24, symbol: ?canProvideMultifaceSupport@AzaleaBlock@@UEBA_NAEBVBlock@@E@Z
    virtual bool canProvideMultifaceSupport(class Block const& block, uchar face) const;

    // vIndex: 32, symbol: ?isWaterBlocking@AzaleaBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 79, symbol:
    // ?onFertilized@AzaleaBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* actor, ::FertilizerType fType)
        const;

    // vIndex: 81, symbol: ?canBeFertilized@AzaleaBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool
    canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    // vIndex: 86, symbol: ?mayPlaceOn@AzaleaBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0AzaleaBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI AzaleaBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_growTree@AzaleaBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI bool _growTree(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
