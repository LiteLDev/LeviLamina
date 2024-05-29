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

class FlintAndSteelItem : public ::Item {
public:
    // prevent constructor by default
    FlintAndSteelItem& operator=(FlintAndSteelItem const&);
    FlintAndSteelItem(FlintAndSteelItem const&);
    FlintAndSteelItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FlintAndSteelItem@@UEAA@XZ
    virtual ~FlintAndSteelItem() = default;

    // vIndex: 44, symbol: ?isDestructive@FlintAndSteelItem@@UEBA_NH@Z
    virtual bool isDestructive(int auxValue) const;

    // vIndex: 50, symbol: ?getEnchantSlot@FlintAndSteelItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 73, symbol: ?dispense@FlintAndSteelItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 77, symbol: ?hurtActor@FlintAndSteelItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack& item, class Actor& actor, class Mob& attacker) const;

    // vIndex: 116, symbol:
    // ?_calculatePlacePos@FlintAndSteelItem@@MEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    virtual bool
    _calculatePlacePos(class ItemStackBase& instance, class Actor& entity, uchar& face, class BlockPos& pos) const;

    // vIndex: 118, symbol:
    // ?_useOn@FlintAndSteelItem@@MEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // symbol: ??0FlintAndSteelItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI FlintAndSteelItem(std::string const& name, int id);

    // NOLINTEND
};
