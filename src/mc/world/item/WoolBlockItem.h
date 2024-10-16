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

class WoolBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    WoolBlockItem& operator=(WoolBlockItem const&);
    WoolBlockItem(WoolBlockItem const&);
    WoolBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WoolBlockItem() = default;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const& itemDescriptor, class CompoundTag const*) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI std::string buildDescriptionId$(class ItemDescriptor const& itemDescriptor, class CompoundTag const*) const;

    // NOLINTEND
};
