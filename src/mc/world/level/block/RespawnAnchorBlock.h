#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class RespawnAnchorBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    RespawnAnchorBlock& operator=(RespawnAnchorBlock const&);
    RespawnAnchorBlock(RespawnAnchorBlock const&);
    RespawnAnchorBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RespawnAnchorBlock@@UEAA@XZ
    virtual ~RespawnAnchorBlock() = default;

    // vIndex: 110, symbol: ?hasComparatorSignal@RespawnAnchorBlock@@UEBA_NXZ
    virtual bool hasComparatorSignal() const;

    // vIndex: 111, symbol: ?getComparatorSignal@RespawnAnchorBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 114, symbol: ?canSpawnAt@RespawnAnchorBlock@@UEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSpawnAt(class BlockSource const& region, class BlockPos const& pos) const;

    // vIndex: 115, symbol: ?notifySpawnedAt@RespawnAnchorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void notifySpawnedAt(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 128, symbol: ?getVariant@RespawnAnchorBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 133, symbol:
    // ?animateTickBedrockLegacy@RespawnAnchorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 136, symbol: ?getLightEmission@RespawnAnchorBlock@@UEBA?AUBrightness@@AEBVBlock@@@Z
    virtual struct Brightness getLightEmission(class Block const& block) const;

    // vIndex: 145, symbol: ?onPlace@RespawnAnchorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@RespawnAnchorBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@RespawnAnchorBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& anchorBlockPos, uchar face) const;

    // symbol: ??0RespawnAnchorBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI RespawnAnchorBlock(std::string const& nameId, int id);

    // symbol:
    // ?addItem@RespawnAnchorBlock@@SA_NAEAVContainer@@HAEAVItemStack@@AEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
    MCAPI static bool addItem(
        class Container&      fromContainer,
        int                   slot,
        class ItemStack&      item,
        class BlockSource&    region,
        class Block const&    block,
        class BlockPos const& pos
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_bumpCharge@RespawnAnchorBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@PEAVPlayer@@F@Z
    MCAPI static void _bumpCharge(class BlockSource&, class BlockPos const&, class Player*, short);

    // symbol: ?_explode@RespawnAnchorBlock@@CAXAEAVPlayer@@AEBVBlockPos@@AEAVBlockSource@@AEAVLevel@@@Z
    MCAPI static void _explode(class Player&, class BlockPos const&, class BlockSource&, class Level&);

    // symbol: ?_trySetSpawn@RespawnAnchorBlock@@CA_NAEAVPlayer@@AEBVBlockPos@@AEAVBlockSource@@AEAVLevel@@@Z
    MCAPI static bool _trySetSpawn(class Player&, class BlockPos const&, class BlockSource&, class Level&);

    // NOLINTEND
};
