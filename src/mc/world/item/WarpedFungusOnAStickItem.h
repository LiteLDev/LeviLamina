#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/enums/UseAnimation.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/components/ComponentItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class WarpedFungusOnAStickItem : public ::ComponentItem {
public:
    // prevent constructor by default
    WarpedFungusOnAStickItem& operator=(WarpedFungusOnAStickItem const&);
    WarpedFungusOnAStickItem(WarpedFungusOnAStickItem const&);
    WarpedFungusOnAStickItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~WarpedFungusOnAStickItem() = default;

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 49, symbol: ?isHandEquipped@WarpedFungusOnAStickItem@@UEBA_NXZ
    virtual bool isHandEquipped() const;

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53();

    // vIndex: 59, symbol: ?requiresInteract@WarpedFungusOnAStickItem@@UEBA_NXZ
    virtual bool requiresInteract() const;

    // vIndex: 62, symbol: ?getEnchantSlot@WarpedFungusOnAStickItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 63, symbol: ?getEnchantValue@WarpedFungusOnAStickItem@@UEBAHXZ
    virtual int getEnchantValue() const;

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

    // vIndex: 93, symbol: ?mineBlock@WarpedFungusOnAStickItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;

    // vIndex: 115, symbol: __unk_vfn_115
    virtual void __unk_vfn_115();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // vIndex: 128, symbol: __unk_vfn_128
    virtual void __unk_vfn_128();

    // symbol: ??0WarpedFungusOnAStickItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI WarpedFungusOnAStickItem(std::string const&, int);

    // NOLINTEND
};
