#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

enum class PersistenceGroupItemChangeAction : int {
    Added   = 0,
    Deleted = 1,
    Updated = 2,
};

}
