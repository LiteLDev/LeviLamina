#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class AirBlockItem : public ::Item {
public:
    // prevent constructor by default
    AirBlockItem& operator=(AirBlockItem const&);
    AirBlockItem(AirBlockItem const&);
    AirBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AirBlockItem() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
