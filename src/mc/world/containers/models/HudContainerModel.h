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
    ::ll::UntypedStorage<8, 8> mUnk8707fa;
    // NOLINTEND

public:
    // prevent constructor by default
    HudContainerModel& operator=(HudContainerModel const&);
    HudContainerModel(HudContainerModel const&);
    HudContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~HudContainerModel() /*override*/ = default;

    // vIndex: 0
    virtual void containerContentChanged(int slot) /*override*/;

    // vIndex: 14
    virtual bool isValid() /*override*/;

    // vIndex: 7
    virtual ::ContainerWeakRef getContainerWeakRef() const /*override*/;

    // vIndex: 21
    virtual ::Container* _getContainer() const /*override*/;

    // vIndex: 23
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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $containerContentChanged(int slot);

    MCAPI bool $isValid();

    MCAPI ::ContainerWeakRef $getContainerWeakRef() const;

    MCAPI ::Container* $_getContainer() const;

    MCAPI void $_init();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
