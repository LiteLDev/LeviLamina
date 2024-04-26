#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
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

    // vIndex: 37, symbol: ?isHandEquipped@SparklerItem@@UEBA_NXZ
    virtual bool isHandEquipped() const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@SparklerItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 87, symbol: ?inventoryTick@SparklerItem@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
    virtual bool
    inventoryTick(class ItemStack& item, class Level& level, class Actor& owner, int slot, bool selected) const;

    // vIndex: 103, symbol:
    // ?setIconInfo@SparklerItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104, symbol: ?getIconInfo@SparklerItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool inInventoryPane) const;

    // vIndex: 108, symbol: ?getLightEmission@SparklerItem@@UEBA?AUBrightness@@H@Z
    virtual struct Brightness getLightEmission(int auxValue) const;

    // symbol: ??0SparklerItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI SparklerItem(std::string const& name, int id);

    // symbol: ?COLORS@SparklerItem@@2QBUColorInfo@1@B
    MCAPI static struct SparklerItem::ColorInfo const COLORS[];

    // symbol: ?MAX_ACTIVE_TICKS@SparklerItem@@2HB
    MCAPI static int const MAX_ACTIVE_TICKS;

    // NOLINTEND
};
