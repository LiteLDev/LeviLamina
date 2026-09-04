#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/models/ContainerModel.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerWeakRef;
class Player;
// clang-format on

class HudContainerModel : public ::ContainerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    HudContainerModel& operator=(HudContainerModel const&);
    HudContainerModel(HudContainerModel const&);
    HudContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudContainerModel() /*override*/ = default;

    virtual void containerContentChanged(int slot) /*override*/;

    virtual bool isValid() /*override*/;

    virtual ::ContainerWeakRef getContainerWeakRef() const /*override*/;

    virtual ::Container* _getContainer() const /*override*/;

    virtual void _init() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HudContainerModel(::ContainerEnumName containerName, ::Player& player);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContainerEnumName containerName, ::Player& player);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $containerContentChanged(int slot);

    MCFOLD bool $isValid();

    MCFOLD ::ContainerWeakRef $getContainerWeakRef() const;

    MCFOLD ::Container* $_getContainer() const;

    MCAPI void $_init();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
