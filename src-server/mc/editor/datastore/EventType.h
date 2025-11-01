#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::DataStore {

enum class EventType : int {
    Create = 0,
    Update = 1,
    Destroy = 2,
    Custom = 3,
    Passthrough = 4,
};

}
