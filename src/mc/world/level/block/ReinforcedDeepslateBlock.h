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

class ReinforcedDeepslateBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ReinforcedDeepslateBlock& operator=(ReinforcedDeepslateBlock const&);
    ReinforcedDeepslateBlock(ReinforcedDeepslateBlock const&);
    ReinforcedDeepslateBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ReinforcedDeepslateBlock@@UEAA@XZ
    virtual ~ReinforcedDeepslateBlock() = default;

    // vIndex: 47, symbol: ?canBeOriginalSurface@ReinforcedDeepslateBlock@@UEBA_NXZ
    virtual bool canBeOriginalSurface() const;

    // symbol: ??0ReinforcedDeepslateBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ReinforcedDeepslateBlock(std::string const& nameId, int id);

    // NOLINTEND
};
