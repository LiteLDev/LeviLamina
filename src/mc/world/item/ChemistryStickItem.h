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

class ChemistryStickItem : public ::ChemistryItem {
public:
    // prevent constructor by default
    ChemistryStickItem& operator=(ChemistryStickItem const&);
    ChemistryStickItem(ChemistryStickItem const&);
    ChemistryStickItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChemistryStickItem();

    // vIndex: 24
    virtual class Item& setMaxDamage(int maxDamage);

    // vIndex: 41
    virtual bool showsDurabilityInCreative() const;

    // vIndex: 49
    virtual bool isValidRepairItem(
        class ItemStackBase const&   source,
        class ItemStackBase const&   repairItem,
        class BaseGameVersion const& baseGameVersion
    ) const;

    // vIndex: 59
    virtual bool uniqueAuxValues() const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 75
    virtual ::ItemUseMethod
    useTimeDepleted(class ItemStack& inoutInstance, class Level* level, class Player* player) const;

    // vIndex: 78
    virtual void hurtActor(class ItemStack& instance, class Actor& actor, class Mob& attacker) const;

    // vIndex: 88
    virtual bool
    inventoryTick(class ItemStack& item, class Level& level, class Actor& owner, int slot, bool selected) const;

    // vIndex: 92
    virtual void fixupCommon(class ItemStackBase& stack) const;

    MCAPI ChemistryStickItem(std::string const& name, short id);

    MCAPI static ::ItemColor getColorType(int data);

    MCAPI static bool isActive(int data);

    MCAPI static bool isChemistryStick(class ItemStackBase const& item);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI std::string _getColorName(int data) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _storeActivationTimestamp(class ItemStack& item, uint64 curTime, int desiredPercent) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::string const ACTIVATION_TIMESTAMP_TAG;

    MCAPI static int const ACTIVE_BIT;

    MCAPI static int const COLOR_BITS;

    MCAPI static int const COLOR_MASK;

    MCAPI static int const DAMAGE_BITS;

    MCAPI static int const DAMAGE_MASK;

    MCAPI static int const DAMAGE_START_BIT;

    // NOLINTEND
};
