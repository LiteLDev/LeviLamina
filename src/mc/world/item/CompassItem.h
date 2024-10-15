#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/AbstractCompassItem.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class CompassItem : public ::AbstractCompassItem {
public:
    // prevent constructor by default
    CompassItem& operator=(CompassItem const&);
    CompassItem(CompassItem const&);
    CompassItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompassItem() = default;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& item, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos) const;

    MCAPI CompassItem(std::string const& name, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& name, int id);

    MCAPI class InteractionResult
    _useOn$(class ItemStack& item, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // NOLINTEND
};
