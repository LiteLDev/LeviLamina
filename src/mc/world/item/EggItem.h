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

class EggItem : public ::Item {
public:
    // prevent constructor by default
    EggItem& operator=(EggItem const&);
    EggItem(EggItem const&);
    EggItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EggItem@@UEAA@XZ
    virtual ~EggItem() = default;

    // vIndex: 19, symbol: ?isThrowable@EggItem@@UEBA_NXZ
    virtual bool isThrowable() const;

    // vIndex: 72, symbol: ?use@EggItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 73, symbol: ?dispense@EggItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // NOLINTEND
};
