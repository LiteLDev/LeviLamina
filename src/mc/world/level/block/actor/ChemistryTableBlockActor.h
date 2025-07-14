#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/Container.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CompoundTag;
class CraftableCompounds;
class DataLoadHelper;
class ILevel;
class LabTablePacket;
class LabTableReaction;
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
    // prevent constructor by default
    ChemistryTableBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChemistryTableBlockActor() /*override*/;

    // vIndex: 35
    virtual ::Container* getContainer() /*override*/;

    // vIndex: 34
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
    virtual void stopOpen(::Player& player) /*override*/;

    // vIndex: 15
    virtual void onRemoved(::BlockSource& region) /*override*/;

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 9
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
    MCNAPI explicit ChemistryTableBlockActor(::BlockPos const& pos);

    MCNAPI ::std::unique_ptr<::LabTableReaction>
    _createReaction(::Random& random, ::std::vector<::ItemStack> const& consumedInput);

    MCNAPI void _popPendingReactionOutput(::BlockSource& region);

    MCNAPI ::HashedString const& _updateType(::BlockSource& region);

    MCNAPI void playerOpenLabTable(::Player& player);

    MCNAPI void reset(::BlockSource& region);

    MCNAPI void serverCombine(::BlockSource& region, ::std::vector<::ItemStack> const& consumedInput);

    MCNAPI void serverLabTablePacket_DEPRECATED(::LabTablePacket const& packet, ::BlockSource& region);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Container* $getContainer();

    MCNAPI ::Container const* $getContainer() const;

    MCNAPI ::ItemStack const& $getItem(int slot) const;

    MCNAPI void $setItem(int slot, ::ItemStack const& item);

    MCNAPI int $getMaxStackSize() const;

    MCNAPI int $getContainerSize() const;

    MCNAPI void $startOpen(::Player& p);

    MCNAPI void $stopOpen(::Player& player);

    MCNAPI void $onRemoved(::BlockSource& region);

    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $tick(::BlockSource& region);

    MCNAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForContainer();

    MCNAPI static void** $vftableForBlockActor();
    // NOLINTEND
};
