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

class SpyglassItem : public ::Item {
public:
    // prevent constructor by default
    SpyglassItem& operator=(SpyglassItem const&);
    SpyglassItem(SpyglassItem const&);
    SpyglassItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SpyglassItem() = default;

    // vIndex: 58
    virtual float getViewDamping() const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 75
    virtual ::ItemUseMethod useTimeDepleted(class ItemStack& inoutInstance, class Level*, class Player* player) const;

    // vIndex: 76
    virtual void releaseUsing(class ItemStack& inoutInstance, class Player* player, int) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI float getViewDamping$() const;

    MCAPI void releaseUsing$(class ItemStack& inoutInstance, class Player* player, int) const;

    MCAPI class ItemStack& use$(class ItemStack& instance, class Player& player) const;

    MCAPI ::ItemUseMethod useTimeDepleted$(class ItemStack& inoutInstance, class Level*, class Player* player) const;

    // NOLINTEND
};
