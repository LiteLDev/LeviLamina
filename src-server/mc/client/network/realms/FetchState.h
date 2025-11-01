#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class FetchState : int {
    DoFetch = 0,
    Fetching = 1,
    Failed = 2,
    Done = 3,
};

}
