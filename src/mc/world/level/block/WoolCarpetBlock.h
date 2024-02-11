#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/CarpetBlock.h"
#include "mc/world/level/block/utils/BlockColor.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class WoolCarpetBlock : public ::CarpetBlock {
public:
    // prevent constructor by default
    WoolCarpetBlock& operator=(WoolCarpetBlock const&);
    WoolCarpetBlock(WoolCarpetBlock const&);
    WoolCarpetBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WoolCarpetBlock@@UEAA@XZ
    virtual ~WoolCarpetBlock() = default;

    // vIndex: 27, symbol: ?canDamperVibrations@WoolCarpetBlock@@UEBA_NXZ
    virtual bool canDamperVibrations() const;

    // vIndex: 63, symbol: ?dispense@WoolCarpetBlock@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar) const;

    // symbol:
    // ??0WoolCarpetBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4BlockColor@@@Z
    MCAPI WoolCarpetBlock(std::string const& nameId, int id, ::BlockColor color);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tryEquipCarpet@WoolCarpetBlock@@CA_NPEAVActor@@AEBVItemStack@@@Z
    MCAPI static bool _tryEquipCarpet(class Actor* actor, class ItemStack const&);

    // NOLINTEND
};
