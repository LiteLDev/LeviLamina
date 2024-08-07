#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ShieldItem : public ::Item {
public:
    // prevent constructor by default
    ShieldItem& operator=(ShieldItem const&);
    ShieldItem(ShieldItem const&);
    ShieldItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShieldItem() = default;

    // vIndex: 37
    virtual bool isHandEquipped() const;

    // vIndex: 48
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 49
    virtual bool isValidRepairItem(
        class ItemStackBase const&   source,
        class ItemStackBase const&   repairItem,
        class BaseGameVersion const& baseGameVersion
    ) const;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& item, class Player&) const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 78
    virtual void hurtActor(class ItemStack& item, class Actor& actor, class Mob& attacker) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 85
    virtual void
    readUserData(class ItemStackBase& stack, class IDataInput& input, class ReadOnlyBinaryStream& underlyingStream)
        const;

    // vIndex: 86
    virtual void writeUserData(class ItemStackBase const& stack, class IDataOutput& output) const;

    // vIndex: 88
    virtual bool
    inventoryTick(class ItemStack& item, class Level& level, class Actor& owner, int slot, bool selected) const;

    // vIndex: 90
    virtual class HashedString const& getCooldownType() const;

    // vIndex: 91
    virtual int getCooldownTime() const;

    // vIndex: 94
    virtual ::InHandUpdateType getInHandUpdateType(
        class Player const&    player,
        class ItemStack const& oldItem,
        class ItemStack const& newItem,
        bool                   isMainHand,
        bool                   slotChanged
    ) const;

    // vIndex: 98
    virtual ::Puv::Legacy::LevelSoundEvent getEquipSound() const;

    MCAPI void playBlockSound(class Player* player) const;

    MCAPI void playBreakSound(class Player* player) const;

    MCAPI static int const EFFECTIVE_BLOCK_DELAY;

    MCAPI static int const IN_HAND_BLOCK_DURATION;

    MCAPI static int const NO_SHIELD_PATTERN;

    MCAPI static std::string const TIMESTAMP_TAG;

    // NOLINTEND
};
