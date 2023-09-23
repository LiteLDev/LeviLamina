#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/enums/UseAnimation.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/AuxDataBlockItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ShulkerBoxBlockItem : public ::AuxDataBlockItem {
public:
    // prevent constructor by default
    ShulkerBoxBlockItem& operator=(ShulkerBoxBlockItem const&);
    ShulkerBoxBlockItem(ShulkerBoxBlockItem const&);
    ShulkerBoxBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 45, symbol: ?getLevelDataForAuxValue@ShulkerBoxBlockItem@@UEBAHH@Z
    virtual int getLevelDataForAuxValue(int) const;

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53();

    // vIndex: 60, symbol:
    // ?appendFormattedHovertext@ShulkerBoxBlockItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;

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

    // vIndex: 96, symbol:
    // ?buildEffectDescriptionName@ShulkerBoxBlockItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
    virtual std::string buildEffectDescriptionName(class ItemStackBase const&) const;

    // vIndex: 115, symbol: __unk_vfn_115
    virtual void __unk_vfn_115();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // symbol:
    // ??0ShulkerBoxBlockItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HPEBVBlock@@@Z
    MCAPI ShulkerBoxBlockItem(std::string const&, int, class Block const*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_buildContainedItemList@ShulkerBoxBlockItem@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVCompoundTag@@@Z
    MCAPI std::string _buildContainedItemList(class CompoundTag const*) const;

    // NOLINTEND
};
