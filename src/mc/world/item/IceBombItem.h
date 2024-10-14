#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/ChemistryItem.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class IceBombItem : public ::ChemistryItem {
public:
    // prevent constructor by default
    IceBombItem& operator=(IceBombItem const&);
    IceBombItem(IceBombItem const&);
    IceBombItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IceBombItem() = default;

    // vIndex: 19
    virtual bool isThrowable() const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

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

    // vIndex: 90
    virtual class HashedString const& getCooldownType() const;

    // vIndex: 91
    virtual int getCooldownTime() const;

    MCAPI IceBombItem(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI class Actor* createProjectileActor$(
        class BlockSource& region,
        class ItemStack const&,
        class Vec3 const& pos,
        class Vec3 const& direction
    ) const;

    MCAPI bool
    dispense$(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    MCAPI int getCooldownTime$() const;

    MCAPI class HashedString const& getCooldownType$() const;

    MCAPI bool isThrowable$() const;

    MCAPI class ItemStack& use$(class ItemStack& item, class Player& player) const;

    MCAPI static class HashedString const& ICE_BOMB_COOLDOWN();

    // NOLINTEND
};
