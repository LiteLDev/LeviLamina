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
    virtual ~DeferredCommandBase() = default;

    virtual void execute(::MinecraftCommands&) = 0;
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
