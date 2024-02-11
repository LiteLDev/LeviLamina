#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/LeavesBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class NewLeavesBlock : public ::LeavesBlock {
public:
    // prevent constructor by default
    NewLeavesBlock& operator=(NewLeavesBlock const&);
    NewLeavesBlock(NewLeavesBlock const&);
    NewLeavesBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NewLeavesBlock@@UEAA@XZ
    virtual ~NewLeavesBlock() = default;

    // vIndex: 96, symbol: ?asItemInstance@NewLeavesBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 119, symbol:
    // ?buildDescriptionId@NewLeavesBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 120, symbol: ?isAuxValueRelevantForPicking@NewLeavesBlock@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 129, symbol: ?getVariant@NewLeavesBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // symbol:
    // ??0NewLeavesBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HV?$WeakPtr@VBlockLegacy@@@@@Z
    MCAPI NewLeavesBlock(std::string const& nameId, int id, class WeakPtr<class BlockLegacy> sapling);

    // NOLINTEND
};
