#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/level/block/actor/ChestBlockActor.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class ItemStack;
class ItemStackBase;
class SaveContext;
class Vec3;
// clang-format on

class ShulkerBoxBlockActor : public ::ChestBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> mFacing;
    ::ll::TypedStorage<1, 1, bool>  mFacingChanged;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShulkerBoxBlockActor() /*override*/ = default;

    virtual ::std::string getName() const /*override*/;

    virtual int getMaxStackSize() const /*override*/;

    virtual void onPlace(::BlockSource& region) /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual bool canPushInItem(int slot, int face, ::ItemStack const& item) const /*override*/;

    virtual void startOpen(::Actor& actor) /*override*/;

    virtual void stopOpen(::Actor& actor) /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getOpenSound() const /*override*/;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getCloseSound() const /*override*/;

    virtual ::AABB getObstructionAABB() const /*override*/;

    virtual bool _detectEntityObstruction(::BlockSource& region) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Vec3 _calculateActorMovementIntoShulker(
        ::std::vector<::AABB> const& intersectingAABBs,
        ::AABB const&                actorAabbAfterMovement
    ) const;

    MCAPI ::Vec3 _calculateMovementWithCollisions(::BlockSource& region, ::Actor* actor) const;

    MCAPI void _moveCollidedEntities(::BlockSource& region) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::std::unique_ptr<::ShulkerBoxBlockActor> createShulkerBoxBlockEntity(::BlockPos const& pos);

    MCAPI static bool itemAllowed(::ItemStackBase const& item);

    MCAPI_C static bool itemAllowedInSlot(int, ::ItemStackBase const& item, int);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $getName() const;

    MCFOLD int $getMaxStackSize() const;

    MCAPI void $onPlace(::BlockSource& region);

    MCAPI void $load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $tick(::BlockSource& region);

    MCAPI bool $canPushInItem(int slot, int face, ::ItemStack const& item) const;

    MCAPI void $startOpen(::Actor& actor);

    MCAPI void $stopOpen(::Actor& actor);

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);

    MCFOLD ::SharedTypes::Legacy::LevelSoundEvent $getOpenSound() const;

    MCFOLD ::SharedTypes::Legacy::LevelSoundEvent $getCloseSound() const;

    MCAPI ::AABB $getObstructionAABB() const;

    MCFOLD bool $_detectEntityObstruction(::BlockSource& region) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForFillingContainer();

    MCNAPI static void** $vftableForRandomizableBlockActorContainerBase();
    // NOLINTEND
};
