#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/ContainerCloseListener.h"
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/ContainerType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class Dimension;
class FillingContainer;
class ItemActor;
class ItemStack;
class Level;
class Player;
class Vec3;
struct ContainerDescription;
// clang-format on

class ContainerComponent : public ::ContainerContentChangeListener, public ::ContainerCloseListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 480> mUnk1c3237;
    ::ll::UntypedStorage<8, 8>   mUnkc1711d;
    ::ll::UntypedStorage<1, 1>   mUnk28f48e;
    ::ll::UntypedStorage<1, 1>   mUnk233069;
    ::ll::UntypedStorage<1, 1>   mUnkc98536;
    ::ll::UntypedStorage<8, 32>  mUnk84bbac;
    ::ll::UntypedStorage<4, 4>   mUnk7aba8e;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerComponent& operator=(ContainerComponent const&);
    ContainerComponent(ContainerComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void containerContentChanged(int iSlot) /*override*/;

    // vIndex: 0
    virtual void containerClosed(::Player& player) /*override*/;

    // vIndex: 1
    virtual ~ContainerComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContainerComponent();

    MCAPI ContainerComponent(::ContainerComponent&& other);

    MCAPI ::FillingContainer* _getRawContainerPtr();

    MCAPI bool _tryMoveInItem(::ItemStack& item, int slot, int face, int itemCount);

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI bool addItem(::ItemActor& entity);

    MCAPI bool addItem(::ItemStack& item);

    MCAPI bool addItem(::ItemStack& item, int face, int itemCount);

    MCAPI bool canBeSiphonedFrom() const;

    MCAPI bool canOpenContainer(::Actor const& containerActor, ::Player& player) const;

    MCAPI int countItemsOfType(::ItemStack const& item) const;

    MCAPI void dropContents(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop);

    MCAPI void dropSlotContent(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop, int slot);

    MCAPI int findFirstSlotForItem(::ItemStack const& item) const;

    MCAPI int getContainerSize() const;

    MCAPI int getEmptySlotsCount() const;

    MCAPI ::ItemStack const& getItem(int slot) const;

    MCAPI ::std::vector<::ItemStack const*> const getSlots() const;

    MCAPI bool hasRoomForItem(::ItemActor const& entity);

    MCAPI bool hasRoomForItem(::ItemStack const& item);

    MCAPI void initFromDefinition(::Actor& actor);

    MCAPI void initFromDefinition(::Actor& actor, ::ContainerDescription const& desc);

    MCAPI bool isEmpty() const;

    MCAPI bool isPrivate() const;

    MCAPI bool openContainer(::Actor& containerActor, ::Player& player);

    MCAPI ::ContainerComponent& operator=(::ContainerComponent&& other);

    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);

    MCAPI void
    rebuildContainer(::Actor& owner, ::ContainerType type, int size, bool canBesiphonedFrom, int, bool isPrivate);

    MCAPI void removeItem(int slot, int count);

    MCAPI void removeItemsOfType(::ItemStack const& item, int count);

    MCAPI void
    serverInitItemStackIds(int containerSlot, int count, ::std::function<void(int, ::ItemStack const&)> onNetIdChanged);

    MCAPI void setCustomName(::std::string const& name);

    MCAPI bool setItem(int slot, ::ItemStack const& item);

    MCAPI void setLootTable(::std::string const& lootTable, int lootTableSeed);

    MCAPI void unpackLootTable(::Level& level, ::DimensionType dimensionId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ContainerComponent&& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $containerContentChanged(int iSlot);

    MCAPI void $containerClosed(::Player& player);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForContainerContentChangeListener();

    MCAPI static void** $vftableForContainerCloseListener();
    // NOLINTEND
};
