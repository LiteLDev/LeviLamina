#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MinecraftCommands;
// clang-format on

class DeferredCommandBase {
public:
    // prevent constructor by default
    DeferredCommandBase& operator=(DeferredCommandBase const&);
    DeferredCommandBase(DeferredCommandBase const&);
    DeferredCommandBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DeferredCommandBase();

    // vIndex: 1
    virtual void execute(::MinecraftCommands&) = 0;
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
