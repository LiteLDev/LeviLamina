#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/item/HandSlot.h"
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
    virtual bool inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int, bool selected) const
        /*override*/;

    virtual int getEnchantSlot() const /*override*/;

    virtual bool isValidRepairItem(
        ::ItemStackBase const&   source,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const /*override*/;

    virtual bool isHandEquipped() const /*override*/;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const /*override*/;

    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;

    virtual ::InHandUpdateType getInHandUpdateType(
        ::Player const&    player,
        ::ItemStack const& oldItem,
        ::ItemStack const& newItem,
        bool const,
        bool const slotChanged
    ) const /*override*/;

    virtual ::ItemStack& use(::ItemStack& item, ::Player& player, ::HandSlot handSlot) const /*override*/;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const
        /*override*/;

    virtual void
    readUserData(::ItemStackBase& stack, ::IDataInput& input, ::ReadOnlyBinaryStream& underlyingStream) const
        /*override*/;

    virtual void writeUserData(::ItemStackBase const& stack, ::IDataOutput& output) const /*override*/;

    virtual ::HashedString const& getCooldownCategory() const /*override*/;

    virtual int getCooldownDuration() const /*override*/;

    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const* userData) const /*override*/;

    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void playBlockSound(::Player* player) const;

    MCNAPI void playBreakSound(::Player* player) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static int getBaseColor(::CompoundTag const* data);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& TIMESTAMP_TAG();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int, bool selected) const;

    MCNAPI int $getEnchantSlot() const;

    MCAPI bool $isValidRepairItem(
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
        bool const,
        bool const slotChanged
    ) const;

    MCNAPI ::ItemStack& $use(::ItemStack& item, ::Player& player, ::HandSlot handSlot) const;

    MCNAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const;

    MCNAPI void
    $readUserData(::ItemStackBase& stack, ::IDataInput& input, ::ReadOnlyBinaryStream& underlyingStream) const;

    MCNAPI void $writeUserData(::ItemStackBase const& stack, ::IDataOutput& output) const;

    MCNAPI ::HashedString const& $getCooldownCategory() const;

    MCNAPI int $getCooldownDuration() const;

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
