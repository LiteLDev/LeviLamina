#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/ChemistryItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

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
    virtual class Actor*
    createProjectileActor(class BlockSource&, class ItemStack const&, class Vec3 const&, class Vec3 const&) const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 90
    virtual class HashedString const& getCooldownType() const;

    // vIndex: 91
    virtual int getCooldownTime() const;

    MCAPI IceBombItem(std::string const& nameId, int id);

    MCAPI static class HashedString const ICE_BOMB_COOLDOWN;

    // NOLINTEND
};
