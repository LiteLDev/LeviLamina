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

class SaplingBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    SaplingBlockItem& operator=(SaplingBlockItem const&);
    SaplingBlockItem(SaplingBlockItem const&);
    SaplingBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SaplingBlockItem@@UEAA@XZ
    virtual ~SaplingBlockItem() = default;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@SaplingBlockItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // symbol: ??0SaplingBlockItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI SaplingBlockItem(std::string const&, int);

    // NOLINTEND
};
