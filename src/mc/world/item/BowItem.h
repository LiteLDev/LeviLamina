#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/RangedWeaponItem.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class BowItem : public ::RangedWeaponItem {
public:
    // prevent constructor by default
    BowItem& operator=(BowItem const&);
    BowItem(BowItem const&);
    BowItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BowItem() = default;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 96
    virtual void enchantProjectile(class ItemStackBase const& weapon, class Actor& projectile) const;

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104
    virtual struct ResolvedItemIconInfo
    getIconInfo(class ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCAPI BowItem(std::string const& name, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& name, int id);

    MCAPI void enchantProjectile$(class ItemStackBase const& weapon, class Actor& projectile) const;

    MCAPI int getEnchantSlot$() const;

    MCAPI struct ResolvedItemIconInfo
    getIconInfo$(class ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCAPI class Item& setIconInfo$(std::string const& name, int id);

    // NOLINTEND
};
