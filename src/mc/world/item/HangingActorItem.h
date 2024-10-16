#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/actor/ActorType.h"
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

class HangingActorItem : public ::Item {
public:
    // prevent constructor by default
    HangingActorItem& operator=(HangingActorItem const&);
    HangingActorItem(HangingActorItem const&);
    HangingActorItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HangingActorItem() = default;

    // vIndex: 118
    virtual class InteractionResult _useOn(
        class ItemStack&  instance,
        class Actor&      spawningActor,
        class BlockPos    pos,
        uchar             face,
        class Vec3 const& clickPos
    ) const;

    MCAPI HangingActorItem(std::string const& name, int id, ::ActorType type);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& name, int id, ::ActorType type);

    MCAPI class InteractionResult _useOn$(
        class ItemStack&  instance,
        class Actor&      spawningActor,
        class BlockPos    pos,
        uchar             face,
        class Vec3 const& clickPos
    ) const;

    // NOLINTEND
};
