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

class StoneBricksBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    StoneBricksBlock& operator=(StoneBricksBlock const&);
    StoneBricksBlock(StoneBricksBlock const&);
    StoneBricksBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StoneBricksBlock@@UEAA@XZ
    virtual ~StoneBricksBlock() = default;

    // vIndex: 95, symbol: ?asItemInstance@StoneBricksBlock@@MEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 118, symbol:
    // ?buildDescriptionId@StoneBricksBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 119, symbol: ?isAuxValueRelevantForPicking@StoneBricksBlock@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 139, symbol: ?tryGetInfested@StoneBricksBlock@@UEBAPEBVBlock@@AEBV2@@Z
    virtual class Block const* tryGetInfested(class Block const& block) const;

    // symbol:
    // ??0StoneBricksBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI StoneBricksBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
