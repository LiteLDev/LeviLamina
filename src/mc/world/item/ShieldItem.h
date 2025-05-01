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
    // vIndex: 92
    virtual bool inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int, bool selected) const
        /*override*/;

    // vIndex: 54
    virtual int getEnchantSlot() const /*override*/;

    // vIndex: 53
    virtual bool isValidRepairItem(
        ::ItemStackBase const&   source,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const /*override*/;

    // vIndex: 38
    virtual bool isHandEquipped() const /*override*/;

    // vIndex: 102
    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const /*override*/;

    // vIndex: 82
    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;

    // vIndex: 98
    virtual ::InHandUpdateType getInHandUpdateType(
        ::Player const&    player,
        ::ItemStack const& oldItem,
        ::ItemStack const& newItem,
        bool const         isMainHand,
        bool const         slotChanged
    ) const /*override*/;

    // vIndex: 76
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    // vIndex: 78
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const
        /*override*/;

    // vIndex: 89
    virtual void
    readUserData(::ItemStackBase& stack, ::IDataInput& input, ::ReadOnlyBinaryStream& underlyingStream) const
        /*override*/;

    // vIndex: 90
    virtual void writeUserData(::ItemStackBase const& stack, ::IDataOutput& output) const /*override*/;

    // vIndex: 94
    virtual ::HashedString const& getCooldownType() const /*override*/;

    // vIndex: 95
    virtual int getCooldownTime() const /*override*/;

    // vIndex: 87
    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const* userData) const /*override*/;

    // vIndex: 52
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int, bool selected) const;

    MCNAPI int $getEnchantSlot() const;

    MCNAPI bool $isValidRepairItem(
        ::ItemStackBase const&   source,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const;

    MCNAPI bool $isHandEquipped() const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;

    MCNAPI void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    MCNAPI ::InHandUpdateType $getInHandUpdateType(
        ::Player const&    player,
        ::ItemStack const& oldItem,
        ::ItemStack const& newItem,
        bool const         isMainHand,
        bool const         slotChanged
    ) const;

    MCNAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCNAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const;

    MCNAPI void
    $readUserData(::ItemStackBase& stack, ::IDataInput& input, ::ReadOnlyBinaryStream& underlyingStream) const;

    MCNAPI void $writeUserData(::ItemStackBase const& stack, ::IDataOutput& output) const;

    MCNAPI ::HashedString const& $getCooldownType() const;

    MCNAPI int $getCooldownTime() const;

    MCNAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const* userData) const;

    MCNAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
