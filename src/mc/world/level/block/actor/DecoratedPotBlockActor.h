#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/block/actor/DecoratedPotAnimation.h"
#include "mc/world/level/block/actor/RandomizableBlockActorContainer.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class ItemStackBase;
class Player;
class SaveContext;
// clang-format on

class DecoratedPotBlockActor : public ::RandomizableBlockActorContainer {
public:
    // DecoratedPotBlockActor inner types define
    using SherdList = ::std::array<::std::string, 4>;

    enum class PotFace : uint64 {
        Back  = 0,
        Left  = 1,
        Right = 2,
        Front = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::std::array<::std::string, 4>> mSherdItemNames;
    ::ll::TypedStorage<8, 152, ::ItemStack>                    mContainedItem;
    ::ll::TypedStorage<1, 1, ::DecoratedPotAnimation>          mAnimation;
    ::ll::TypedStorage<4, 4, int>                              mAnimationTick;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 8
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int containerSlot,
        int,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    // vIndex: 20
    virtual int getContainerSize() const /*override*/;

    // vIndex: 21
    virtual int getMaxStackSize() const /*override*/;

    // vIndex: 7
    virtual ::ItemStack const& getItem(int) const /*override*/;

    // vIndex: 12
    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/;

    // vIndex: 44
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 45
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~DecoratedPotBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DecoratedPotBlockActor(::BlockPos const& pos);

    MCNAPI void _onInsertFailFeedback(::BlockSource& region, ::Player& player);

    MCNAPI void _onInsertFeedback(::BlockSource& region, ::ItemStack const& newContainedItem, ::Player& player);

    MCNAPI void _setContainedItem(::ItemStack const& item);

    MCNAPI void tryAddItem(::Player& player);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::std::array<::std::string, 4>> _tryGetSherdsFromItem(::ItemStackBase const& item);

    MCNAPI static void removeDefaultSherdsFromUserData(::ItemStackBase& itemInstance);

    MCNAPI static void
    saveSherdsToTag(::CompoundTag& tag, ::std::array<::std::string, 4> const& sherds, bool forceSaveDefaultSherds);

    MCNAPI static ::std::optional<::std::array<::std::string, 4>> tryGetSherdsFromTag(::CompoundTag const& tag);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::array<::std::string, 4> const& DEFAULT_SHERD_LIST();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $tick(::BlockSource& region);

    MCNAPI void
    $serverInitItemStackIds(int containerSlot, int, ::std::function<void(int, ::ItemStack const&)> onNetIdChanged);

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI ::ItemStack const& $getItem(int) const;

    MCNAPI void $setItem(int modelSlot, ::ItemStack const& item);

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForContainer();

    MCNAPI static void** $vftableForRandomizableBlockActorContainerBase();
    // NOLINTEND
};
