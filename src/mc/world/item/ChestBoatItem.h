#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/item/BoatItem.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ChestBoatItem : public ::BoatItem {
public:
    // prevent constructor by default
    ChestBoatItem& operator=(ChestBoatItem const&);
    ChestBoatItem(ChestBoatItem const&);
    ChestBoatItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChestBoatItem() = default;

    // vIndex: 83
    virtual std::string
    buildDescriptionId(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    // vIndex: 119
    virtual ::ActorType _getActorType() const;

    MCAPI ChestBoatItem(std::string const& name, int id, int woodType);

    // NOLINTEND
};
