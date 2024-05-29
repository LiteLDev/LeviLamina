#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/ChemistryItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class IceBombItem : public ::ChemistryItem {
public:
    // prevent constructor by default
    IceBombItem& operator=(IceBombItem const&);
    IceBombItem(IceBombItem const&);
    IceBombItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IceBombItem@@UEAA@XZ
    virtual ~IceBombItem() = default;

    // vIndex: 19, symbol: ?isThrowable@IceBombItem@@UEBA_NXZ
    virtual bool isThrowable() const;

    // vIndex: 72, symbol: ?use@IceBombItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 73, symbol: ?dispense@IceBombItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 89, symbol: ?getCooldownType@IceBombItem@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& getCooldownType() const;

    // vIndex: 90, symbol: ?getCooldownTime@IceBombItem@@UEBAHXZ
    virtual int getCooldownTime() const;

    // symbol: ??0IceBombItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI IceBombItem(std::string const& nameId, int id);

    // symbol: ?ICE_BOMB_COOLDOWN@IceBombItem@@2VHashedString@@B
    MCAPI static class HashedString const ICE_BOMB_COOLDOWN;

    // NOLINTEND
};
