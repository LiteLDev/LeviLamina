#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/BlockItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class LeavesBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    LeavesBlockItem& operator=(LeavesBlockItem const&);
    LeavesBlockItem(LeavesBlockItem const&);
    LeavesBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LeavesBlockItem@@UEAA@XZ
    virtual ~LeavesBlockItem() = default;

    // vIndex: 32, symbol: ?getLevelDataForAuxValue@LeavesBlockItem@@UEBAHH@Z
    virtual int getLevelDataForAuxValue(int auxValue) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@LeavesBlockItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 91, symbol: ?fixupCommon@LeavesBlockItem@@UEBAXAEAVItemStackBase@@@Z
    virtual void fixupCommon(class ItemStackBase& stack) const;

    // vIndex: 92, symbol: ?fixupCommon@LeavesBlockItem@@UEBAXAEAVItemStackBase@@AEAVLevel@@@Z
    virtual void fixupCommon(class ItemStackBase& stack, class Level& level) const;

    // NOLINTEND
};
