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

class ShearsItem : public ::Item {
public:
    // prevent constructor by default
    ShearsItem& operator=(ShearsItem const&);
    ShearsItem(ShearsItem const&);
    ShearsItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ShearsItem@@UEAA@XZ
    virtual ~ShearsItem() = default;

    // vIndex: 31, symbol: ?canDestroySpecial@ShearsItem@@UEBA_NAEBVBlock@@@Z
    virtual bool canDestroySpecial(class Block const& block) const;

    // vIndex: 50, symbol: ?getEnchantSlot@ShearsItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 73, symbol: ?dispense@ShearsItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar) const;

    // vIndex: 76, symbol: ?getDestroySpeed@ShearsItem@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
    virtual float getDestroySpeed(class ItemStackBase const& item, class Block const& block) const;

    // vIndex: 77, symbol: ?hurtActor@ShearsItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 80, symbol: ?mineBlock@ShearsItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool mineBlock(class ItemStack& item, class Block const& block, int, int, int, class Actor* owner) const;

    // vIndex: 118, symbol:
    // ?_useOn@ShearsItem@@UEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const&) const;

    // symbol: ??0ShearsItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ShearsItem(std::string const& name, int itemId);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tryShearActor@ShearsItem@@CA_NAEAVBlockSource@@AEAVActor@@@Z
    MCAPI static bool _tryShearActor(class BlockSource&, class Actor&);

    // NOLINTEND
};
