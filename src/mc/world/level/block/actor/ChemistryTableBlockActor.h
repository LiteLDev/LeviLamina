#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class HashedString;
class ItemStack;
class LabTablePacket;
class LabTableReaction;
class Level;
class Player;
class Random;
class SaveContext;
// clang-format on

class ChemistryTableBlockActor : public ::BlockActor, public ::Container {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>    mUnk2e18b8;
    ::ll::UntypedStorage<8, 8>    mUnkf3e8c0;
    ::ll::UntypedStorage<8, 8>    mUnkc2f502;
    ::ll::UntypedStorage<8, 1368> mUnk132ced;
    ::ll::UntypedStorage<8, 152>  mUnke8961b;
    ::ll::UntypedStorage<1, 1>    mUnk4c0c1d;
    ::ll::UntypedStorage<8, 48>   mUnk1d03e1;
    // NOLINTEND

public:
    // prevent constructor by default
    ChemistryTableBlockActor& operator=(ChemistryTableBlockActor const&);
    ChemistryTableBlockActor(ChemistryTableBlockActor const&);
    ChemistryTableBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChemistryTableBlockActor() /*override*/;

    // vIndex: 33
    virtual ::Container* getContainer() /*override*/;

    // vIndex: 32
    virtual ::Container const* getContainer() const /*override*/;

    // vIndex: 7
    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    // vIndex: 12
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    // vIndex: 21
    virtual int getMaxStackSize() const /*override*/;

    // vIndex: 20
    virtual int getContainerSize() const /*override*/;

    // vIndex: 22
    virtual void startOpen(::Player& p) /*override*/;

    // vIndex: 23
    virtual void stopOpen(::Player& p) /*override*/;

    // vIndex: 13
    virtual void onRemoved(::BlockSource& region) /*override*/;

    // vIndex: 1
    virtual void load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 7
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ChemistryTableBlockActor(::BlockPos const& pos);

    MCAPI ::std::unique_ptr<::LabTableReaction>
    _createReaction(::Random& random, ::std::vector<::ItemStack> const& consumedInput);

    MCAPI void _popPendingReactionOutput(::BlockSource& region);

    MCAPI ::HashedString const& _updateType(::BlockSource& region);

    MCAPI bool isSameType(::HashedString const& type) const;

    MCAPI void playerOpenLabTable(::Player& player);

    MCAPI void reset(::BlockSource& region);

    MCAPI void serverCombine(::BlockSource& region, ::std::vector<::ItemStack> const& consumedInput);

    MCAPI void serverLabTablePacket_DEPRECATED(::LabTablePacket const& packet, ::BlockSource& region);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Container* $getContainer();

    MCAPI ::Container const* $getContainer() const;

    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI void $setItem(int slot, ::ItemStack const& item);

    MCAPI int $getMaxStackSize() const;

    MCAPI int $getContainerSize() const;

    MCAPI void $startOpen(::Player& p);

    MCAPI void $stopOpen(::Player& p);

    MCAPI void $onRemoved(::BlockSource& region);

    MCAPI void $load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $tick(::BlockSource& region);

    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForContainer();

    MCAPI static void** $vftableForBlockActor();
    // NOLINTEND
};
