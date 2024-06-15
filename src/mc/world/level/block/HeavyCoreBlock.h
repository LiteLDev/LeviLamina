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

class HeavyCoreBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    HeavyCoreBlock& operator=(HeavyCoreBlock const&);
    HeavyCoreBlock(HeavyCoreBlock const&);
    HeavyCoreBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HeavyCoreBlock@@UEAA@XZ
    virtual ~HeavyCoreBlock() = default;

    // vIndex: 19, symbol:
    // ?liquidCanFlowIntoFromDirection@HeavyCoreBlock@@UEBA_NEAEBV?$function@$$A6AAEBVBlock@@AEBVBlockPos@@@Z@std@@AEBVBlockPos@@@Z
    virtual bool
    liquidCanFlowIntoFromDirection(uchar, std::function<class Block const&(class BlockPos const&)> const&, class BlockPos const&)
        const;

    // vIndex: 23, symbol: ?canProvideSupport@HeavyCoreBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar, ::BlockSupportType) const;

    // vIndex: 57, symbol: ?canContainLiquid@HeavyCoreBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // symbol: ??0HeavyCoreBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI HeavyCoreBlock(std::string const&, int);

    // NOLINTEND
};
