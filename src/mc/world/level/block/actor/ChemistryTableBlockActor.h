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
class CraftableCompounds;
class DataLoadHelper;
class HashedString;
class ItemStack;
class LabTablePacket;
class LabTableReaction;
class Level;
class Player;
class Random;
class SaveContext;
struct ActorUniqueID;
// clang-format on

class ChemistryTableBlockActor : public ::BlockActor, public ::Container {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorUniqueID>>      mOpenedPlayer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LabTableReaction>>   mCurReaction;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CraftableCompounds>> mCraftableCompounds;
    ::ll::TypedStorage<8, 1368, ::ItemStack[9]>                       mItems;
    ::ll::TypedStorage<8, 152, ::ItemStack>                           mPendingReactionOutput;
    ::ll::TypedStorage<1, 1, bool>                                    mIsTableTypeCached;
    ::ll::TypedStorage<8, 48, ::HashedString>                         mCachedTableType;
    // NOLINTEND

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
    MCFOLD ::Container* $getContainer();

    MCFOLD ::Container const* $getContainer() const;

    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI void $setItem(int slot, ::ItemStack const& item);

    MCFOLD int $getMaxStackSize() const;

    MCFOLD int $getContainerSize() const;

    MCFOLD void $startOpen(::Player& p);

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
