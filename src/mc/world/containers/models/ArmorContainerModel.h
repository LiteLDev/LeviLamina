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

class ArmorContainerModel : public ::ContainerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    ArmorContainerModel& operator=(ArmorContainerModel const&);
    ArmorContainerModel(ArmorContainerModel const&);
    ArmorContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ArmorContainerModel() /*override*/ = default;

    virtual void postInit() /*override*/;

    virtual void releaseResources() /*override*/;

    virtual void containerContentChanged(int slot) /*override*/;

    virtual bool isValid() /*override*/;

    virtual ::ContainerWeakRef getContainerWeakRef() const /*override*/;

    virtual ::Container* _getContainer() const /*override*/;

    virtual void _onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
