#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

enum class PersistenceGroupType : int {
    Local       = 0,
    Replication = 1,
    Shared      = 2,
};

}
