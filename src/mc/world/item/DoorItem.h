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
#include "mc/world/level/block/DoorBlock.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class DoorItem : public ::Item {
public:
    // prevent constructor by default
    DoorItem& operator=(DoorItem const&);
    DoorItem(DoorItem const&);
    DoorItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DoorItem() = default;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    MCAPI DoorItem(std::string const& name, int id, ::DoorBlock::DoorType type);

    MCAPI class Block const* getDoorBlock() const;

    MCAPI static bool place(class BlockSource* source, int x, int y, int z, int dir, class Block const* block);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI class InteractionResult
    _useOn$(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // NOLINTEND
};
