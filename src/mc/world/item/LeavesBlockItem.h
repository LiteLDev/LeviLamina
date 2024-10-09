#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/BlockItem.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

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
    virtual std::string
    buildDescriptionId(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    // vIndex: 92
    virtual void fixupCommon(class ItemStackBase& stack) const;

    // vIndex: 93
    virtual void fixupCommon(class ItemStackBase& stack, class Level& level) const;

    // NOLINTEND
};
