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

class EndCrystalItem : public ::Item {
public:
    // prevent constructor by default
    EndCrystalItem& operator=(EndCrystalItem const&);
    EndCrystalItem(EndCrystalItem const&);
    EndCrystalItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EndCrystalItem() = default;

    // vIndex: 38
    virtual bool isGlint(class ItemStackBase const& stack) const;

    // vIndex: 44
    virtual bool isDestructive(int auxValue) const;

    // vIndex: 118
    virtual class InteractionResult _useOn(
        class ItemStack&  instance,
        class Actor&      usingActor,
        class BlockPos    pos,
        uchar             face,
        class Vec3 const& clickPos
    ) const;

    MCAPI EndCrystalItem(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI class InteractionResult _useOn$(
        class ItemStack&  instance,
        class Actor&      usingActor,
        class BlockPos    pos,
        uchar             face,
        class Vec3 const& clickPos
    ) const;

    MCAPI bool isDestructive$(int auxValue) const;

    MCAPI bool isGlint$(class ItemStackBase const& stack) const;

    // NOLINTEND
};
