#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerCloseListener.h"
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/inventory/FillingContainer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class Dimension;
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
    ::ll::TypedStorage<8, 520, ::FillingContainer> mContainer;
    ::ll::TypedStorage<8, 8, ::Actor*>             mListenerShim;
    ::ll::TypedStorage<1, 1, bool>                 mCanBeSiphonedFrom;
    ::ll::TypedStorage<1, 1, bool>                 mPrivate;
    ::ll::TypedStorage<1, 1, bool>                 mRestrictToOwner;
    ::ll::TypedStorage<8, 32, ::std::string>       mLootTable;
    ::ll::TypedStorage<4, 4, int>                  mLootTableSeed;
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
    MCNAPI ContainerComponent(::ContainerComponent&& other);

    MCNAPI bool _tryMoveInItem(::ItemStack& item, int slot, int face, int itemCount);

    MCNAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI bool addItem(::ItemActor& entity);

    MCNAPI bool canOpenContainer(::Actor const& containerActor, ::Player& player) const;

    MCNAPI int countItemsOfType(::ItemStack const& item) const;

    MCNAPI void dropContents(::BlockSource& region, ::Vec3 const& pos, bool randomizeDrop);

    MCNAPI void initFromDefinition(::Actor& actor, ::ContainerDescription const& desc);

    MCNAPI bool isEmpty() const;

    MCNAPI bool openContainer(::Actor& containerActor, ::Player& player);

    MCNAPI ::ContainerComponent& operator=(::ContainerComponent&& other);

    MCNAPI void readAdditionalSaveData(::Actor& tag, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void rebuildContainer(
        ::Actor&                             owner,
        ::SharedTypes::Legacy::ContainerType type,
        int                                  size,
        bool                                 canBesiphonedFrom,
        int                                  isPrivate,
        bool
    );

    MCNAPI void removeItemsOfType(::ItemStack const& item, int count);

    MCNAPI void setCustomName(::std::string const& name);

    MCNAPI bool setItem(int slot, ::ItemStack const& item);

    MCNAPI void unpackLootTable(::Level& level, ::DimensionType dimensionId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerComponent&& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $containerContentChanged(int iSlot);

    MCNAPI void $containerClosed(::Player& player);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForContainerContentChangeListener();

    MCNAPI static void** $vftableForContainerCloseListener();
    // NOLINTEND
};
