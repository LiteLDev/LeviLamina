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
};

}; // namespace npc
