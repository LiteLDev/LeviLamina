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

class FireworkChargeItem : public ::Item {
public:
    // FireworkChargeItem inner types define
    enum class Shape {};

public:
    // prevent constructor by default
    FireworkChargeItem& operator=(FireworkChargeItem const&) = delete;
    FireworkChargeItem(FireworkChargeItem const&)            = delete;
    FireworkChargeItem()                                     = delete;

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

    // vIndex: 18, symbol: ?isDyeable@FireworkChargeItem@@UEBA_NXZ
    virtual bool isDyeable() const;

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53();

    // vIndex: 60, symbol:
    // ?appendFormattedHovertext@FireworkChargeItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 67, symbol: ?isValidAuxValue@FireworkChargeItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int) const;

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 72, symbol: __unk_vfn_72
    virtual void __unk_vfn_72();

    // vIndex: 73, symbol: ?getColor@FireworkChargeItem@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
    virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;

    // vIndex: 75, symbol: __unk_vfn_75
    virtual void __unk_vfn_75();

    // vIndex: 79, symbol: __unk_vfn_79
    virtual void __unk_vfn_79();

    // vIndex: 80, symbol: __unk_vfn_80
    virtual void __unk_vfn_80();

    // vIndex: 115, symbol: __unk_vfn_115
    virtual void __unk_vfn_115();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // vIndex: 117, symbol: ?hasSameRelevantUserData@FireworkChargeItem@@UEBA_NAEBVItemStackBase@@0@Z
    virtual bool hasSameRelevantUserData(class ItemStackBase const&, class ItemStackBase const&) const;

    // symbol: ??0FireworkChargeItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI FireworkChargeItem(std::string const&, int);

    // symbol:
    // ?getFormattedHoverText@FireworkChargeItem@@SAXAEBVCompoundTag@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV34@@Z
    MCAPI static void getFormattedHoverText(class CompoundTag const&, std::string&, std::string const&);

    // symbol:
    // ?initFireworkChargeItem@FireworkChargeItem@@SAAEBVItemInstance@@AEAV2@W4Shape@1@V?$vector@EV?$allocator@E@std@@@std@@2_N3@Z
    MCAPI static class ItemInstance const& initFireworkChargeItem(
        class ItemInstance&,
        ::FireworkChargeItem::Shape,
        std::vector<uchar>,
        std::vector<uchar>,
        bool,
        bool
    );

    // symbol:
    // ?initFireworkChargeItem@FireworkChargeItem@@SAAEBVItemStack@@AEAV2@W4Shape@1@V?$vector@EV?$allocator@E@std@@@std@@2_N3@Z
    MCAPI static class ItemStack const& initFireworkChargeItem(
        class ItemStack&,
        ::FireworkChargeItem::Shape,
        std::vector<uchar>,
        std::vector<uchar>,
        bool,
        bool
    );

    // symbol: ?setColor@FireworkChargeItem@@SAXAEAVItemStackBase@@@Z
    MCAPI static void setColor(class ItemStackBase&);

    // symbol: ?TAG_EXPLOSION@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_EXPLOSION;

    // symbol: ?TAG_E_COLORS@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_E_COLORS;

    // symbol: ?TAG_E_FADECOLORS@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_E_FADECOLORS;

    // symbol: ?TAG_E_FLICKER@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_E_FLICKER;

    // symbol: ?TAG_E_TRAIL@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_E_TRAIL;

    // symbol: ?TAG_E_TYPE@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_E_TYPE;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_initFireworkChargeItem@FireworkChargeItem@@CAXAEAVItemStackBase@@W4Shape@1@V?$vector@EV?$allocator@E@std@@@std@@2_N3@Z
    MCAPI static void _initFireworkChargeItem(
        class ItemStackBase&,
        ::FireworkChargeItem::Shape,
        std::vector<uchar>,
        std::vector<uchar>,
        bool,
        bool
    );

    // symbol:
    // ?appendColors@FireworkChargeItem@@CAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@EV?$allocator@E@std@@@3@@Z
    MCAPI static void appendColors(std::string&, std::vector<uchar>);

    // NOLINTEND
};
