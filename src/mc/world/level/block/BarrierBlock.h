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

class BarrierBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    BarrierBlock& operator=(BarrierBlock const&);
    BarrierBlock(BarrierBlock const&);
    BarrierBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BarrierBlock@@UEAA@XZ
    virtual ~BarrierBlock() = default;

    // vIndex: 25, symbol: ?canConnect@BarrierBlock@@UEBA_NAEBVBlock@@E0@Z
    virtual bool canConnect(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    // vIndex: 56, symbol: ?canContainLiquid@BarrierBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 126, symbol: ?getShadeBrightness@BarrierBlock@@UEBAMAEBVBlock@@@Z
    virtual float getShadeBrightness(class Block const&) const;

    // symbol: ??0BarrierBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI BarrierBlock(std::string const& nameId, int id);

    // NOLINTEND
};
