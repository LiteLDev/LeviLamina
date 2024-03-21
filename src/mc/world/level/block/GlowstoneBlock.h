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

class GlowstoneBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    GlowstoneBlock& operator=(GlowstoneBlock const&);
    GlowstoneBlock(GlowstoneBlock const&);
    GlowstoneBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GlowstoneBlock@@UEAA@XZ
    virtual ~GlowstoneBlock() = default;

    // vIndex: 63, symbol: ?dispense@GlowstoneBlock@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // symbol:
    // ??0GlowstoneBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI GlowstoneBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
