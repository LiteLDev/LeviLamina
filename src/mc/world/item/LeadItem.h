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

class LeadItem : public ::Item {
public:
    // prevent constructor by default
    LeadItem& operator=(LeadItem const&);
    LeadItem(LeadItem const&);
    LeadItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LeadItem() = default;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar, class Vec3 const&) const;

    MCAPI LeadItem(std::string const& name, int id);

    MCAPI static bool bindPlayerMobs(class Actor& holderActor, int x, int y, int z, class ItemInstance* itemUsed);

    MCAPI static bool canBindPlayerMobs(class Actor const& entity, class BlockPos const& blockPos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& name, int id);

    MCAPI class InteractionResult
    _useOn$(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar, class Vec3 const&) const;

    // NOLINTEND
};
