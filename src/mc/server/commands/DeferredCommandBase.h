#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DeferredCommandBase {
public:
    // prevent constructor by default
    DeferredCommandBase& operator=(DeferredCommandBase const&);
    DeferredCommandBase(DeferredCommandBase const&);
    DeferredCommandBase();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DeferredCommandBase() = default;

    // vIndex: 1
    virtual void execute(class MinecraftCommands& commands) = 0;

    // NOLINTEND
};
