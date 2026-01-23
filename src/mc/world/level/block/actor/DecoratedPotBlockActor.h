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
    enum class PotFace : uint64 {
        Back  = 0,
        Left  = 1,
        Right = 2,
        Front = 3,
    };

    using SherdList = ::std::array<::std::string, 4>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::std::array<::std::string, 4>> mSherdItemNames;
    ::ll::TypedStorage<8, 152, ::ItemStack>                    mContainedItem;
    ::ll::TypedStorage<1, 1, ::DecoratedPotAnimation>          mAnimation;
    ::ll::TypedStorage<4, 4, int>                              mAnimationTick;
    // NOLINTEND

public:
    // prevent constructor by default
    DecoratedPotBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual void serverInitItemStackIds(
        int containerSlot,
        int,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    virtual int getContainerSize() const /*override*/;

    virtual int getMaxStackSize() const /*override*/;

    virtual ::ItemStack const& getItem(int index) const /*override*/;

    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    virtual ~DecoratedPotBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DecoratedPotBlockActor(::BlockPos const& pos);

    MCAPI void _onInsertFailFeedback(::BlockSource& region, ::Player& player);

    MCAPI void _onInsertFeedback(::BlockSource& region, ::ItemStack const& newContainedItem, ::Player& player);

    MCAPI void _setContainedItem(::ItemStack const& item);

    MCAPI_C void fromItem(::ItemStack const& item);

    MCAPI void tryAddItem(::Player& player);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::std::array<::std::string, 4>> _tryGetSherdsFromItem(::ItemStackBase const& item);

    MCAPI_C static ::std::string getDelimitedConcatenatedSherdNames(::CompoundTag const* userData);

    MCAPI static void removeDefaultSherdsFromUserData(::ItemStackBase& itemInstance);

    MCAPI_C static void
    saveSherdsToItemForInventoryRendering(::ItemStack& itemInstance, ::std::string const& screenSherdNames);

    MCAPI static void
    saveSherdsToTag(::CompoundTag& tag, ::std::array<::std::string, 4> const& sherds, bool forceSaveDefaultSherds);

    MCAPI static ::std::optional<::std::array<::std::string, 4>> tryGetSherdsFromTag(::CompoundTag const& tag);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::array<::std::string, 4> const& DEFAULT_SHERD_LIST();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $tick(::BlockSource& region);

    MCAPI void
    $serverInitItemStackIds(int containerSlot, int, ::std::function<void(int, ::ItemStack const&)> onNetIdChanged);

    MCFOLD int $getContainerSize() const;

    MCFOLD int $getMaxStackSize() const;

    MCFOLD ::ItemStack const& $getItem(int index) const;

    MCAPI void $setItem(int modelSlot, ::ItemStack const& item);

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForContainer();

    MCNAPI static void** $vftableForRandomizableBlockActorContainerBase();
    // NOLINTEND
};
