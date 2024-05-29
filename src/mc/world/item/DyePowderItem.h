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

class DyePowderItem : public ::Item {
public:
    // prevent constructor by default
    DyePowderItem& operator=(DyePowderItem const&);
    DyePowderItem(DyePowderItem const&);
    DyePowderItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DyePowderItem@@UEAA@XZ
    virtual ~DyePowderItem() = default;

    // vIndex: 15, symbol: ?isDye@DyePowderItem@@UEBA_NXZ
    virtual bool isDye() const;

    // vIndex: 16, symbol: ?getItemColor@DyePowderItem@@UEBA?AW4ItemColor@@XZ
    virtual ::ItemColor getItemColor() const;

    // vIndex: 56, symbol: ?isValidAuxValue@DyePowderItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@DyePowderItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 103, symbol:
    // ?setIconInfo@DyePowderItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const& name, int id);

    // symbol: ??0DyePowderItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4ItemColor@@@Z
    MCAPI DyePowderItem(std::string const&, int, ::ItemColor);

    // NOLINTEND
};
