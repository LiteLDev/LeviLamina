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

class PumpkinBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    PumpkinBlock& operator=(PumpkinBlock const&);
    PumpkinBlock(PumpkinBlock const&);
    PumpkinBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PumpkinBlock@@UEAA@XZ
    virtual ~PumpkinBlock() = default;

    // vIndex: 25, symbol: ?canConnect@PumpkinBlock@@UEBA_NAEBVBlock@@E0@Z
    virtual bool canConnect(class Block const&, uchar, class Block const&) const;

    // vIndex: 63, symbol: ?dispense@PumpkinBlock@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 85, symbol: ?mayPlace@PumpkinBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 95, symbol: ?asItemInstance@PumpkinBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 128, symbol: ?getVariant@PumpkinBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 131, symbol: ?getMappedFace@PumpkinBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 145, symbol: ?onPlace@PumpkinBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0PumpkinBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N1@Z
    MCAPI PumpkinBlock(std::string const& nameId, int id, bool lit, bool carved);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canDispense@PumpkinBlock@@AEBA_NAEAVBlockSource@@AEBVVec3@@E@Z
    MCAPI bool _canDispense(class BlockSource& region, class Vec3 const& pos, uchar face) const;

    // symbol: ?_canSpawnGolem@PumpkinBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _canSpawnGolem(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
