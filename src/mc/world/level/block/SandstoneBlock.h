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

class SandstoneBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    SandstoneBlock& operator=(SandstoneBlock const&);
    SandstoneBlock(SandstoneBlock const&);
    SandstoneBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SandstoneBlock@@UEAA@XZ
    virtual ~SandstoneBlock() = default;

    // vIndex: 47, symbol: ?canBeOriginalSurface@SandstoneBlock@@UEBA_NXZ
    virtual bool canBeOriginalSurface() const;

    // vIndex: 95, symbol: ?asItemInstance@SandstoneBlock@@MEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 118, symbol:
    // ?buildDescriptionId@SandstoneBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 119, symbol: ?isAuxValueRelevantForPicking@SandstoneBlock@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // symbol:
    // ??0SandstoneBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI SandstoneBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
