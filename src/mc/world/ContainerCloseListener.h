#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

class ContainerCloseListener {
public:
    // prevent constructor by default
    ContainerCloseListener& operator=(ContainerCloseListener const&);
    ContainerCloseListener(ContainerCloseListener const&);
    ContainerCloseListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void containerClosed(::Player&) = 0;

    // vIndex: 1
    virtual ~ContainerCloseListener();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
