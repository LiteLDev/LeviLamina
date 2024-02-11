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

class WoolBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    WoolBlockItem& operator=(WoolBlockItem const&);
    WoolBlockItem(WoolBlockItem const&);
    WoolBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WoolBlockItem@@UEAA@XZ
    virtual ~WoolBlockItem() = default;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@WoolBlockItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // symbol: ??0WoolBlockItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCAPI WoolBlockItem(std::string const& name, int id, bool);

    // NOLINTEND
};
