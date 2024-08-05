#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/DoorBlock.h"
#include "mc/world/level/block/utils/BlockShape.h"

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
};
