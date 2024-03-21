#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/FaceDirectionalActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BeehiveBlock : public ::FaceDirectionalActorBlock {
public:
    // prevent constructor by default
    BeehiveBlock& operator=(BeehiveBlock const&);
    BeehiveBlock(BeehiveBlock const&);
    BeehiveBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BeehiveBlock@@UEAA@XZ
    virtual ~BeehiveBlock() = default;

    // vIndex: 2, symbol: ?getNextBlockPermutation@BeehiveBlock@@UEBAPEBVBlock@@AEBV2@@Z
    virtual class Block const* getNextBlockPermutation(class Block const& currentBlock) const;

    // vIndex: 94, symbol: ?playerWillDestroy@BeehiveBlock@@UEBAPEBVBlock@@AEAVPlayer@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 105, symbol:
    // ?executeEvent@BeehiveBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVActor@@@Z
    virtual void executeEvent(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Block const&,
        std::string const& eventName,
        class Actor&       sourceEntity
    ) const;

    // vIndex: 110, symbol: ?hasComparatorSignal@BeehiveBlock@@UEBA_NXZ
    virtual bool hasComparatorSignal() const;

    // vIndex: 111, symbol: ?getComparatorSignal@BeehiveBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 128, symbol: ?getVariant@BeehiveBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 131, symbol: ?getMappedFace@BeehiveBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 133, symbol: ?animateTickBedrockLegacy@BeehiveBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 151, symbol: ?use@BeehiveBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // symbol: ??0BeehiveBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI BeehiveBlock(std::string const& nameId, int id);

    // symbol: ?emitHoneyComb@BeehiveBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void emitHoneyComb(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?evictAll@BeehiveBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI void evictAll(class BlockSource& region, class BlockPos const& pos, bool angry) const;

    // symbol: ?onPlayerPlace@BeehiveBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void onPlayerPlace(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?deliverNectar@BeehiveBlock@@SAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
    MCAPI static void deliverNectar(class BlockSource& region, class Block const& block, class BlockPos const& pos);

    // symbol: ?getHiveItemWithOccupants@BeehiveBlock@@SA?AVItemStack@@AEBVBlock@@PEBVBeehiveBlockActor@@@Z
    MCAPI static class ItemStack getHiveItemWithOccupants(class Block const&, class BeehiveBlockActor const*);

    // symbol: ?hasHoneyToHarvest@BeehiveBlock@@SA_NAEBVBlock@@@Z
    MCAPI static bool hasHoneyToHarvest(class Block const& block);

    // symbol: ?resetHoneyLevel@BeehiveBlock@@SAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
    MCAPI static void resetHoneyLevel(class BlockSource& region, class Block const& block, class BlockPos const& pos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_fillHoneyBottle@BeehiveBlock@@AEBAXAEAVPlayer@@AEAVItemStack@@1AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _fillHoneyBottle(
        class Player&         player,
        class ItemStack&      emptyBottle,
        class ItemStack&      honeyBottle,
        class BlockSource&    region,
        class BlockPos const& pos
    ) const;

    // symbol: ?_playBottleSound@BeehiveBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _playBottleSound(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
