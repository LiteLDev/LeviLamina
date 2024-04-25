#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/FertilizerItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class BoneMealItem : public ::FertilizerItem {
public:
    // prevent constructor by default
    BoneMealItem& operator=(BoneMealItem const&);
    BoneMealItem(BoneMealItem const&);
    BoneMealItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BoneMealItem@@UEAA@XZ
    virtual ~BoneMealItem() = default;

    // vIndex: 15, symbol: ?isDye@BoneMealItem@@UEBA_NXZ
    virtual bool isDye() const;

    // vIndex: 16, symbol: ?getItemColor@BoneMealItem@@UEBA?AW4ItemColor@@XZ
    virtual ::ItemColor getItemColor() const;

    // vIndex: 56, symbol: ?isValidAuxValue@BoneMealItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@BoneMealItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 103, symbol:
    // ?setIconInfo@BoneMealItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const&, int);

    // symbol: ??0BoneMealItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCAPI BoneMealItem(std::string const&, int, bool);

    // NOLINTEND
};
