#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"
#include "mc/world/level/block/utils/DeprecatedSlabBlockItem.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class WoodSlabBlockItem : public ::DeprecatedSlabBlockItem {
public:
    // prevent constructor by default
    WoodSlabBlockItem& operator=(WoodSlabBlockItem const&);
    WoodSlabBlockItem(WoodSlabBlockItem const&);
    WoodSlabBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WoodSlabBlockItem@@UEAA@XZ
    virtual ~WoodSlabBlockItem() = default;

    // vIndex: 32, symbol: ?getLevelDataForAuxValue@WoodSlabBlockItem@@UEBAHH@Z
    virtual int getLevelDataForAuxValue(int auxValue) const;

    // NOLINTEND
};
