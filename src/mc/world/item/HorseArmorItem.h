#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/enums/UseAnimation.h"
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

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 18, symbol: ?isDyeable@HorseArmorItem@@UEBA_NXZ
    virtual bool isDyeable() const;

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53();

    // vIndex: 60, symbol:
    // ?appendFormattedHovertext@HorseArmorItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;

    // vIndex: 64, symbol: ?getArmorValue@HorseArmorItem@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 72, symbol: __unk_vfn_72
    virtual void __unk_vfn_72();

    // vIndex: 73, symbol: ?getColor@HorseArmorItem@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
    virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;

    // vIndex: 74, symbol: ?hasCustomColor@HorseArmorItem@@UEBA_NPEBVCompoundTag@@@Z
    virtual bool hasCustomColor(class CompoundTag const*) const;

    // vIndex: 75, symbol: __unk_vfn_75
    virtual void __unk_vfn_75();

    // vIndex: 77, symbol: ?clearColor@HorseArmorItem@@UEBAXPEAVCompoundTag@@@Z
    virtual void clearColor(class CompoundTag*) const;

    // vIndex: 78, symbol: ?setColor@HorseArmorItem@@UEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
    virtual void setColor(class ItemStackBase&, class mce::Color const&) const;

    // vIndex: 79, symbol: __unk_vfn_79
    virtual void __unk_vfn_79();

    // vIndex: 80, symbol: __unk_vfn_80
    virtual void __unk_vfn_80();

    // vIndex: 85, symbol: ?dispense@HorseArmorItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, uchar) const;

    // vIndex: 115, symbol: __unk_vfn_115
    virtual void __unk_vfn_115();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // vIndex: 128, symbol: __unk_vfn_128
    virtual void __unk_vfn_128();

    // symbol: ??0HorseArmorItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHW4Tier@0@@Z
    MCAPI HorseArmorItem(std::string const&, int, int, ::HorseArmorItem::Tier);

    // symbol: ?getTier@HorseArmorItem@@QEBA?AW4Tier@1@XZ
    MCAPI ::HorseArmorItem::Tier getTier() const;

    // symbol: ?mHealthPerTier@HorseArmorItem@@2QBHB
    MCAPI static int const mHealthPerTier[];

    // NOLINTEND
};
