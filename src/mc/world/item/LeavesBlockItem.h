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
    // vIndex: 0
    virtual ~LeavesBlockItem() = default;

    // vIndex: 32
    virtual int getLevelDataForAuxValue(int auxValue) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 92
    virtual void fixupCommon(class ItemStackBase& stack) const;

    // vIndex: 93
    virtual void fixupCommon(class ItemStackBase& stack, class Level& level) const;

    // NOLINTEND
};
