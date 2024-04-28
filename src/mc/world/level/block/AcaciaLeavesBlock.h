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

class AcaciaLeavesBlock : public ::LeavesBlock {
public:
    // prevent constructor by default
    AcaciaLeavesBlock& operator=(AcaciaLeavesBlock const&);
    AcaciaLeavesBlock(AcaciaLeavesBlock const&);
    AcaciaLeavesBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AcaciaLeavesBlock@@UEAA@XZ
    virtual ~AcaciaLeavesBlock() = default;

    // vIndex: 128, symbol: ?getVariant@AcaciaLeavesBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

    // symbol:
    // ??0AcaciaLeavesBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HV?$WeakPtr@$$CBVBlockLegacy@@@@@Z
    MCAPI AcaciaLeavesBlock(std::string const&, int, class WeakPtr<class BlockLegacy const>);

    // NOLINTEND
};
