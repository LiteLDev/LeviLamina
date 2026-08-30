#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/models/PlayerUIContainerModelBase.h"

class PlayerUIContainerModel : public ::PlayerUIContainerModelBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerUIContainerModel() /*override*/;

    virtual int _getContainerOffset() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
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
