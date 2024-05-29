#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/SlabBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class StoneSlabBlock2 : public ::SlabBlock {
public:
    // prevent constructor by default
    StoneSlabBlock2& operator=(StoneSlabBlock2 const&);
    StoneSlabBlock2(StoneSlabBlock2 const&);
    StoneSlabBlock2();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StoneSlabBlock2@@UEAA@XZ
    virtual ~StoneSlabBlock2() = default;

    // vIndex: 49, symbol: ?isValidAuxValue@StoneSlabBlock2@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 95, symbol: ?asItemInstance@StoneSlabBlock2@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 118, symbol:
    // ?buildDescriptionId@StoneSlabBlock2@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 119, symbol: ?isAuxValueRelevantForPicking@StoneSlabBlock2@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 128, symbol: ?getVariant@StoneSlabBlock2@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 159, symbol: ?getMapColor@StoneSlabBlock2@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const& block) const;

    // symbol:
    // ??0StoneSlabBlock2@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_NV?$WeakPtr@$$CBVBlockLegacy@@@@@Z
    MCAPI
    StoneSlabBlock2(std::string const& nameId, int id, bool fullSize, class WeakPtr<class BlockLegacy const> baseSlab);

    // symbol:
    // ?SLAB_NAMES@StoneSlabBlock2@@2V?$array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$07@std@@B
    MCAPI static std::array<std::string, 8> const SLAB_NAMES;

    // NOLINTEND
};
