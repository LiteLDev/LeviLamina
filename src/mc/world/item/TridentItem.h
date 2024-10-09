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

class TridentItem : public ::Item {
public:
    // prevent constructor by default
    TridentItem& operator=(TridentItem const&);
    TridentItem(TridentItem const&);
    TridentItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TridentItem() = default;

    // vIndex: 19
    virtual bool isThrowable() const;

    // vIndex: 34
    virtual short getMaxDamage() const;

    // vIndex: 35
    virtual int getAttackDamage() const;

    // vIndex: 43
    virtual bool canDestroyInCreative() const;

    // vIndex: 48
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 51
    virtual int getEnchantValue() const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 76
    virtual void releaseUsing(class ItemStack& item, class Player* player, int durationLeft) const;

    // vIndex: 78
    virtual void hurtActor(class ItemStack& item, class Actor& actor, class Mob& attacker) const;

    MCAPI static int const CHARGE_THRESHOLD_TIME;

    MCAPI static int const THROW_THRESHOLD_TIME;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Actor* _setupProjectile(class Actor* trident, class ItemStack item, bool creative) const;

    // NOLINTEND
};
