#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/enums/UseAnimation.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/DiggerItem.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class PickaxeItem : public ::DiggerItem {
public:
    // prevent constructor by default
    PickaxeItem& operator=(PickaxeItem const&);
    PickaxeItem(PickaxeItem const&);
    PickaxeItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~PickaxeItem() = default;

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 44, symbol: ?canDestroySpecial@PickaxeItem@@UEBA_NAEBVBlock@@@Z
    virtual bool canDestroySpecial(class Block const&) const;

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53();

    // vIndex: 62, symbol: ?getEnchantSlot@PickaxeItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 72, symbol: __unk_vfn_72
    virtual void __unk_vfn_72();

    // vIndex: 75, symbol: __unk_vfn_75
    virtual void __unk_vfn_75();

    // vIndex: 79, symbol: __unk_vfn_79
    virtual void __unk_vfn_79();

    // vIndex: 80, symbol: __unk_vfn_80
    virtual void __unk_vfn_80();

    // vIndex: 88, symbol: ?getDestroySpeed@PickaxeItem@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
    virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;

    // vIndex: 115, symbol: __unk_vfn_115
    virtual void __unk_vfn_115();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // vIndex: 128, symbol: __unk_vfn_128
    virtual void __unk_vfn_128();

    // symbol: ??0PickaxeItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVTier@Item@@@Z
    MCAPI PickaxeItem(std::string const&, int, class Item::Tier const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isTierOneBlock@PickaxeItem@@AEBA?B_NAEBVBlockLegacy@@@Z
    MCAPI bool const _isTierOneBlock(class BlockLegacy const&) const;

    // NOLINTEND
};
