#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/events/LevelEvent.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class SnifferEggBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    SnifferEggBlock& operator=(SnifferEggBlock const&);
    SnifferEggBlock(SnifferEggBlock const&);
    SnifferEggBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SnifferEggBlock@@UEAA@XZ
    virtual ~SnifferEggBlock() = default;

    // vIndex: 55, symbol: ?waterSpreadCausesSpawn@SnifferEggBlock@@UEBA_NXZ
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 61, symbol: ?checkIsPathable@SnifferEggBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 85, symbol: ?mayPlace@SnifferEggBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 118, symbol:
    // ?buildDescriptionId@SnifferEggBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 128, symbol: ?getVariant@SnifferEggBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 145, symbol: ?onPlace@SnifferEggBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@SnifferEggBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // symbol: ??0SnifferEggBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI SnifferEggBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addToRandomTickingQueue@SnifferEggBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static void _addToRandomTickingQueue(class BlockSource& region, class BlockPos const& pos);

    // symbol: ?_shouldHatchFaster@SnifferEggBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool _shouldHatchFaster(class BlockSource& region, class BlockPos const& pos);

    // symbol: ?_spawnParticles@SnifferEggBlock@@CAXW4LevelEvent@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static void _spawnParticles(::LevelEvent, class BlockSource&, class BlockPos const&);

    // NOLINTEND
};
