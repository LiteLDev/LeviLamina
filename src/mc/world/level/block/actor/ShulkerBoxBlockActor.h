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

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getOpenSound() const /*override*/;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getCloseSound() const /*override*/;

    virtual ::AABB getObstructionAABB() const /*override*/;

    virtual bool _detectEntityObstruction(::BlockSource& region) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::ShulkerBoxBlockActor> createShulkerBoxBlockEntity(::BlockPos const& pos);

#ifdef LL_PLAT_C
    MCNAPI static bool itemAllowedInSlot(int, ::ItemStackBase const& item, int);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $getName() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI void $onPlace(::BlockSource& region);

    MCNAPI void $load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $tick(::BlockSource& region);

    MCNAPI bool $canPushInItem(int slot, int face, ::ItemStack const& item) const;

    MCNAPI void $startOpen(::Actor& actor);

    MCNAPI void $stopOpen(::Actor& actor);

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCNAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getOpenSound() const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getCloseSound() const;

    MCNAPI ::AABB $getObstructionAABB() const;

    MCNAPI bool $_detectEntityObstruction(::BlockSource& region) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();
    // NOLINTEND
};
