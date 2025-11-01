#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class BlockSource;
class CompoundTag;
class Container;
class HashedString;
class IDataInput;
class IDataOutput;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class Mob;
class Player;
class ReadOnlyBinaryStream;
class Vec3;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class ShieldItem : public ::Item {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 95
    virtual bool inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int, bool selected) const /*override*/;

    // vIndex: 55
    virtual int getEnchantSlot() const /*override*/;

    // vIndex: 54
    virtual bool isValidRepairItem(::ItemStackBase const& source, ::ItemStackBase const& repairItem, ::BaseGameVersion const& baseGameVersion) const /*override*/;

    // vIndex: 38
    virtual bool isHandEquipped() const /*override*/;

    // vIndex: 105
    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const /*override*/;

    // vIndex: 85
    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;

    // vIndex: 101
    virtual ::InHandUpdateType getInHandUpdateType(::Player const& player, ::ItemStack const& oldItem, ::ItemStack const& newItem, bool const isMainHand, bool const slotChanged) const /*override*/;

    // vIndex: 77
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    // vIndex: 81
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const /*override*/;

    // vIndex: 92
    virtual void readUserData(::ItemStackBase& stack, ::IDataInput& input, ::ReadOnlyBinaryStream& underlyingStream) const /*override*/;

    // vIndex: 93
    virtual void writeUserData(::ItemStackBase const& stack, ::IDataOutput& output) const /*override*/;

    // vIndex: 97
    virtual ::HashedString const& getCooldownCategory() const /*override*/;

    // vIndex: 98
    virtual int getCooldownDuration() const /*override*/;

    // vIndex: 90
    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const* userData) const /*override*/;

    // vIndex: 53
    virtual void appendFormattedHovertext(::ItemStackBase const& stack, ::Level& level, ::Bedrock::Safety::RedactableString& hovertext, bool const showCategory) const /*override*/;

    // vIndex: 0
    virtual ~ShieldItem() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& EFFECTIVE_BLOCK_DELAY();

    MCAPI static ::std::string const& TIMESTAMP_TAG();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int, bool selected) const;

    MCAPI int $getEnchantSlot() const;

    MCAPI bool $isValidRepairItem(::ItemStackBase const& source, ::ItemStackBase const& repairItem, ::BaseGameVersion const& baseGameVersion) const;

    MCFOLD bool $isHandEquipped() const;

    MCFOLD ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;

    MCFOLD void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    MCAPI ::InHandUpdateType $getInHandUpdateType(::Player const& player, ::ItemStack const& oldItem, ::ItemStack const& newItem, bool const isMainHand, bool const slotChanged) const;

    MCFOLD ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const;

    MCAPI void $readUserData(::ItemStackBase& stack, ::IDataInput& input, ::ReadOnlyBinaryStream& underlyingStream) const;

    MCAPI void $writeUserData(::ItemStackBase const& stack, ::IDataOutput& output) const;

    MCAPI ::HashedString const& $getCooldownCategory() const;

    MCFOLD int $getCooldownDuration() const;

    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const* userData) const;

    MCAPI void $appendFormattedHovertext(::ItemStackBase const& stack, ::Level& level, ::Bedrock::Safety::RedactableString& hovertext, bool const showCategory) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND

};
