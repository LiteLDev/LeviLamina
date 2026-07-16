#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/Container.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundTag;
class CraftableCompounds;
class DataLoadHelper;
class ILevel;
class LabTablePacket;
class LabTableReaction;
class Player;
class SaveContext;
struct ActorUniqueID;
// clang-format on

class ChemistryTableBlockActor : public ::VanillaBlockActor, public ::Container {
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
    virtual ~ChemistryTableBlockActor() /*override*/ = default;

    virtual ::Container* getContainer() /*override*/;

    virtual ::Container const* getContainer() const /*override*/;

    virtual ::ItemStack const& getItem(int) const /*override*/;

    virtual void setItem(int, ::ItemStack const&) /*override*/;

    virtual int getMaxStackSize() const /*override*/;

    virtual int getContainerSize() const /*override*/;

    virtual void startOpen(::Actor&) /*override*/;

    virtual void stopOpen(::Actor& actor) /*override*/;

    virtual void onRemoved(::BlockSource&) /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& helper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& context) const /*override*/;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual void serverInitItemStackIds(int, int, ::std::function<void(int, ::ItemStack const&)>) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ChemistryTableBlockActor(::BlockPos const& pos);

#ifdef LL_PLAT_C
    MCAPI ::HashedString const& _getType(::BlockSource& region);

    MCAPI void clientLabTablePacket(::LabTablePacket const& packet, ::BlockSource& region);
#endif

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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
