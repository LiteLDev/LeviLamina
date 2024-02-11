#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockColor.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class WoolBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    WoolBlock& operator=(WoolBlock const&);
    WoolBlock(WoolBlock const&);
    WoolBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WoolBlock@@UEAA@XZ
    virtual ~WoolBlock() = default;

    // vIndex: 27, symbol: ?canDamperVibrations@WoolBlock@@UEBA_NXZ
    virtual bool canDamperVibrations() const;

    // vIndex: 28, symbol: ?canOccludeVibrations@WoolBlock@@UEBA_NXZ
    virtual bool canOccludeVibrations() const;

    // symbol: ??0WoolBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4BlockColor@@@Z
    MCAPI WoolBlock(std::string const& nameId, int id, ::BlockColor color);

    // NOLINTEND
};
