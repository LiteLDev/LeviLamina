#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/RandomizableBlockActorContainer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class Container;
class DataLoadHelper;
class ILevel;
class Random;
class SaveContext;
// clang-format on

class DispenserBlockActor : public ::RandomizableBlockActorContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1368, ::ItemStack[9]> mItems;
    // NOLINTEND

public:
    // prevent constructor by default
    DispenserBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getContainerSize() const /*override*/;

    virtual ::Container* getContainer() /*override*/;

    virtual ::Container const* getContainer() const /*override*/;

    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/;

    virtual int getMaxStackSize() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void startOpen(::Actor& actor) /*override*/;

    virtual void stopOpen(::Actor& actor) /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual void onMove() /*override*/;

    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    virtual ~DispenserBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DispenserBlockActor(::BlockPos pos);

    MCAPI DispenserBlockActor(::BlockPos pos, ::BlockActorType type);

    MCAPI int getRandomSlot(::Random& random);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos pos);

    MCAPI void* $ctor(::BlockPos pos, ::BlockActorType type);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getContainerSize() const;

    MCFOLD ::Container* $getContainer();

    MCFOLD ::Container const* $getContainer() const;

    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI void $setItem(int modelSlot, ::ItemStack const& item);

    MCFOLD int $getMaxStackSize() const;

    MCAPI ::std::string $getName() const;

    MCFOLD void $startOpen(::Actor& actor);

    MCFOLD void $stopOpen(::Actor& actor);

    MCAPI void $load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCFOLD void $onMove();

    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForContainer();

    MCNAPI static void** $vftableForRandomizableBlockActorContainerBase();
    // NOLINTEND
};
