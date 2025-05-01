#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MinecraftCommands;
// clang-format on

class DeferredCommandBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DeferredCommandBase() = default;

    // vIndex: 1
    virtual void execute(::MinecraftCommands&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
