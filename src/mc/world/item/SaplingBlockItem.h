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

class SaplingBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    SaplingBlockItem& operator=(SaplingBlockItem const&);
    SaplingBlockItem(SaplingBlockItem const&);
    SaplingBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SaplingBlockItem() = default;

    // vIndex: 83
    virtual std::string
    buildDescriptionId(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    MCAPI SaplingBlockItem(std::string const& name, int id);

    // NOLINTEND
};
