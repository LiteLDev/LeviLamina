#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/models/ContainerModel.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerWeakRef;
class ItemStack;
class Player;
// clang-format on

class PlayerUIContainerModelBase : public ::ContainerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerUIContainerModelBase& operator=(PlayerUIContainerModelBase const&);
    PlayerUIContainerModelBase(PlayerUIContainerModelBase const&);
    PlayerUIContainerModelBase();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~PlayerUIContainerModelBase() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~PlayerUIContainerModelBase() /*override*/;
#endif

    virtual void postInit() /*override*/;

    virtual void releaseResources() /*override*/;

    virtual void containerContentChanged(int slot) /*override*/;

    virtual bool isValid() /*override*/;

    virtual ::ContainerWeakRef getContainerWeakRef() const /*override*/;

    virtual int _getContainerOffset() const /*override*/;

    virtual void _onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem) /*override*/;

    virtual ::Container* _getContainer() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _refreshContainer(bool initial);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $postInit();

    MCAPI void $releaseResources();

    MCAPI void $containerContentChanged(int slot);

    MCFOLD bool $isValid();

    MCAPI ::ContainerWeakRef $getContainerWeakRef() const;

    MCFOLD int $_getContainerOffset() const;

    MCAPI void $_onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);

    MCAPI ::Container* $_getContainer() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
