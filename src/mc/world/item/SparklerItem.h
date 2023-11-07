#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/enums/UseAnimation.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/ChemistryStickItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class SparklerItem : public ::ChemistryStickItem {
public:
    // SparklerItem inner types declare
    // clang-format off
    struct ColorInfo;
    // clang-format on

    // SparklerItem inner types define
    struct ColorInfo {
    public:
        // prevent constructor by default
        ColorInfo& operator=(ColorInfo const&);
        ColorInfo(ColorInfo const&);
        ColorInfo();
    };

public:
    // prevent constructor by default
    SparklerItem& operator=(SparklerItem const&);
    SparklerItem(SparklerItem const&);
    SparklerItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SparklerItem@@UEAA@XZ
    virtual ~SparklerItem() = default;

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 49, symbol: ?isHandEquipped@SparklerItem@@UEBA_NXZ
    virtual bool isHandEquipped() const;

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53();

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

    // vIndex: 95, symbol:
    // ?buildDescriptionId@SparklerItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 101, symbol: ?inventoryTick@SparklerItem@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
    virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool) const;

    // vIndex: 115, symbol: __unk_vfn_115
    virtual void __unk_vfn_115();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // vIndex: 119, symbol:
    // ?setIconInfo@SparklerItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const&, int);

    // vIndex: 120, symbol: ?getIconInfo@SparklerItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 124, symbol: ?getLightEmission@SparklerItem@@UEBA?AUBrightness@@H@Z
    virtual struct Brightness getLightEmission(int) const;

    // vIndex: 128, symbol: __unk_vfn_128
    virtual void __unk_vfn_128();

    // symbol: ?COLORS@SparklerItem@@2QBUColorInfo@1@B
    MCAPI static struct SparklerItem::ColorInfo const COLORS[];

    // symbol: ?MAX_ACTIVE_TICKS@SparklerItem@@2HB
    MCAPI static int const MAX_ACTIVE_TICKS;

    // NOLINTEND
};
