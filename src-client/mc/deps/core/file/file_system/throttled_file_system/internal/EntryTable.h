#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Internal {

struct EntryTable {
public:
    // EntryTable inner types declare
    // clang-format off
    struct QueuedRemovalRefCounter;
    // clang-format on

    // EntryTable inner types define
    struct QueuedRemovalRefCounter {};
};

} // namespace Core::Internal
