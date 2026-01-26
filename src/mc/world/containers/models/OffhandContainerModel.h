#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/models/ContainerModel.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerWeakRef;
class ItemStack;
class Player;
// clang-format on

class OffhandContainerModel : public ::ContainerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    OffhandContainerModel& operator=(OffhandContainerModel const&);
    OffhandContainerModel(OffhandContainerModel const&);
    OffhandContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OffhandContainerModel() /*override*/ = default;

    virtual void postInit() /*override*/;

    virtual void releaseResources() /*override*/;

    virtual void containerContentChanged(int slot) /*override*/;

    virtual bool isValid() /*override*/;

    virtual ::ContainerWeakRef getContainerWeakRef() const /*override*/;

    virtual int _getContainerOffset() const /*override*/;

    virtual ::Container* _getContainer() const /*override*/;

    virtual void _onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::ContainerEnumName containerName, int containerSize, ::Player& player);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $postInit();

    MCNAPI void $releaseResources();

    MCNAPI void $containerContentChanged(int slot);

    MCNAPI bool $isValid();

    MCNAPI ::ContainerWeakRef $getContainerWeakRef() const;

    MCNAPI int $_getContainerOffset() const;

    MCNAPI ::Container* $_getContainer() const;

    MCNAPI void $_onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
