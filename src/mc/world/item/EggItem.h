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

class EggItem : public ::Item {
public:
    // prevent constructor by default
    EggItem& operator=(EggItem const&);
    EggItem(EggItem const&);
    EggItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EggItem() = default;

    // vIndex: 19
    virtual bool isThrowable() const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 73
    virtual class Actor* createProjectileActor(
        class BlockSource& region,
        class ItemStack const&,
        class Vec3 const& pos,
        class Vec3 const& direction
    ) const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI class Actor* createProjectileActor$(
        class BlockSource& region,
        class ItemStack const&,
        class Vec3 const& pos,
        class Vec3 const& direction
    ) const;

    MCAPI bool
    dispense$(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    MCAPI bool isThrowable$() const;

    MCAPI class ItemStack& use$(class ItemStack& instance, class Player& player) const;

    // NOLINTEND
};
