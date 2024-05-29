#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class SaddleItem : public ::Item {
public:
    // prevent constructor by default
    SaddleItem& operator=(SaddleItem const&);
    SaddleItem(SaddleItem const&);
    SaddleItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SaddleItem@@UEAA@XZ
    virtual ~SaddleItem() = default;

    // vIndex: 73, symbol: ?dispense@SaddleItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar) const;

    // symbol: ??0SaddleItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
    MCAPI SaddleItem(std::string const& nameId, short id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tryEquipSaddleViaComponents@SaddleItem@@CA_NAEAVActor@@AEBVItemStack@@@Z
    MCAPI static bool _tryEquipSaddleViaComponents(class Actor& actor, class ItemStack const&);

    // NOLINTEND
};
