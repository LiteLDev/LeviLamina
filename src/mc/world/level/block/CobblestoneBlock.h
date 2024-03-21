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

class CobblestoneBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    CobblestoneBlock& operator=(CobblestoneBlock const&);
    CobblestoneBlock(CobblestoneBlock const&);
    CobblestoneBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CobblestoneBlock@@UEAA@XZ
    virtual ~CobblestoneBlock() = default;

    // vIndex: 139, symbol: ?tryGetInfested@CobblestoneBlock@@UEBAPEBVBlock@@AEBV2@@Z
    virtual class Block const* tryGetInfested(class Block const& block) const;

    // symbol:
    // ??0CobblestoneBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI CobblestoneBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
