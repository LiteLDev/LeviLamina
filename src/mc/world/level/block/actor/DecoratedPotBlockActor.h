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

    virtual ::ItemStack const& getItem(int) const /*override*/;

    virtual void setItem(int, ::ItemStack const& item) /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DecoratedPotBlockActor(::BlockPos const& pos);

    MCNAPI void _setContainedItem(::ItemStack const& item);

#ifdef LL_PLAT_C
    MCNAPI void fromItem(::ItemStack const& item);
#endif

    MCNAPI void tryAddItem(::Player& player);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _areDefaultSherds(::std::array<::std::string, 4> const& sherds);

#ifdef LL_PLAT_C
    MCNAPI static ::std::string getDelimitedConcatenatedSherdNames(::CompoundTag const* userData);
#endif

    MCNAPI static void removeDefaultSherdsFromUserData(::ItemStackBase& itemInstance);

#ifdef LL_PLAT_C
    MCNAPI static void
    saveSherdsToItemForInventoryRendering(::ItemStack& itemInstance, ::std::string const& screenSherdNames);
#endif

    MCNAPI static void
    saveSherdsToTag(::CompoundTag& tag, ::std::array<::std::string, 4> const& sherds, bool forceSaveDefaultSherds);

    MCNAPI static ::std::optional<::std::array<::std::string, 4>> tryGetSherdsFromTag(::CompoundTag const& tag);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::array<::std::string, 4> const& DEFAULT_SHERD_LIST();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $tick(::BlockSource& region);

    MCAPI void
    $serverInitItemStackIds(int containerSlot, int, ::std::function<void(int, ::ItemStack const&)> onNetIdChanged);

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI ::ItemStack const& $getItem(int) const;

    MCNAPI void $setItem(int, ::ItemStack const& item);

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();
    // NOLINTEND
};
