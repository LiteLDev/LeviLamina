#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/models/PlayerUIContainerModelBase.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

class PlayerUIContainerModel : public ::PlayerUIContainerModelBase {
public:
    // prevent constructor by default
    PlayerUIContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerUIContainerModel() /*override*/ = default;

    virtual int _getContainerOffset() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerUIContainerModel(::ContainerEnumName containerName, ::Player& player);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContainerEnumName containerName, ::Player& player);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $_getContainerOffset() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
