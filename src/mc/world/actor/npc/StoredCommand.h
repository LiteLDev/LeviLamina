#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc {

struct StoredCommand {
public:
    // prevent constructor by default
    StoredCommand& operator=(StoredCommand const&);
    StoredCommand(StoredCommand const&);
    StoredCommand();

public:
    // NOLINTBEGIN
    MCAPI ~StoredCommand();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace npc
