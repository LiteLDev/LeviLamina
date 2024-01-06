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

class HorseArmorItem : public ::Item {
public:
    // HorseArmorItem inner types define
    enum class Tier {};

public:
    // prevent constructor by default
    HorseArmorItem& operator=(HorseArmorItem const&);
    HorseArmorItem(HorseArmorItem const&);
    HorseArmorItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HorseArmorItem@@UEAA@XZ
    virtual ~HorseArmorItem() = default;

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 14, symbol: ?isDyeable@HorseArmorItem@@UEBA_NXZ
    virtual bool isDyeable() const;

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 46, symbol:
    // ?appendFormattedHovertext@HorseArmorItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 50, symbol: ?getArmorValue@HorseArmorItem@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 57, symbol: __unk_vfn_57
    virtual void __unk_vfn_57();

    // vIndex: 58, symbol: __unk_vfn_58
    virtual void __unk_vfn_58();

    // vIndex: 59, symbol: ?getColor@HorseArmorItem@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
    virtual class mce::Color getColor(class CompoundTag const* userData, class ItemDescriptor const&) const;

    // vIndex: 60, symbol: ?hasCustomColor@HorseArmorItem@@UEBA_NPEBVCompoundTag@@@Z
    virtual bool hasCustomColor(class CompoundTag const* userData) const;

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 63, symbol: ?clearColor@HorseArmorItem@@UEBAXPEAVCompoundTag@@@Z
    virtual void clearColor(class CompoundTag* userData) const;

    // vIndex: 64, symbol: ?setColor@HorseArmorItem@@UEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
    virtual void setColor(class ItemStackBase& itemStack, class mce::Color const& color) const;

    // vIndex: 65, symbol: __unk_vfn_65
    virtual void __unk_vfn_65();

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 71, symbol: ?dispense@HorseArmorItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar) const;

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 99, symbol: __unk_vfn_99
    virtual void __unk_vfn_99();

    // symbol: ??0HorseArmorItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHW4Tier@0@@Z
    MCAPI HorseArmorItem(std::string const& name, int id, int icon, ::HorseArmorItem::Tier tier);

    // symbol: ?getTier@HorseArmorItem@@QEBA?AW4Tier@1@XZ
    MCAPI ::HorseArmorItem::Tier getTier() const;

    // symbol: ?mHealthPerTier@HorseArmorItem@@2QBHB
    MCAPI static int const mHealthPerTier[];

    // NOLINTEND
};
