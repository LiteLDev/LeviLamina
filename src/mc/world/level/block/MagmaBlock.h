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

class MagmaBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    MagmaBlock& operator=(MagmaBlock const&);
    MagmaBlock(MagmaBlock const&);
    MagmaBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MagmaBlock@@UEAA@XZ
    virtual ~MagmaBlock() = default;

    // vIndex: 92, symbol: ?neighborChanged@MagmaBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 128, symbol: ?getVariant@MagmaBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 133, symbol: ?animateTickBedrockLegacy@MagmaBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 146, symbol: ?shouldTickOnSetBlock@MagmaBlock@@UEBA_NXZ
    virtual bool shouldTickOnSetBlock() const;

    // vIndex: 147, symbol: ?tick@MagmaBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 148, symbol: ?randomTick@MagmaBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 158, symbol: ?getEmissiveBrightness@MagmaBlock@@UEBA?AUBrightness@@AEBVBlock@@@Z
    virtual struct Brightness getEmissiveBrightness(class Block const&) const;

    // symbol: ??0MagmaBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI MagmaBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?addToTickQueue@MagmaBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI void addToTickQueue(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
