#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/enums/WoodType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class PlanksBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    PlanksBlock& operator=(PlanksBlock const&);
    PlanksBlock(PlanksBlock const&);
    PlanksBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PlanksBlock@@UEAA@XZ
    virtual ~PlanksBlock() = default;

    // vIndex: 118, symbol:
    // ?buildDescriptionId@PlanksBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 141, symbol: ?_addHardCodedBlockComponents@PlanksBlock@@UEAAXAEBVExperiments@@@Z
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    // symbol: ??0PlanksBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4WoodType@@@Z
    MCAPI PlanksBlock(std::string const&, int, ::WoodType);

    // symbol:
    // ?WOOD_NAMES@PlanksBlock@@2V?$array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$08@std@@B
    MCAPI static std::array<std::string, 9> const WOOD_NAMES;

    // NOLINTEND
};
