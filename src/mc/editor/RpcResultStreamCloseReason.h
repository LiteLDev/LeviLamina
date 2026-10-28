#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Rpc {

enum class RpcResultStreamCloseReason : uchar {
    Completed = 0,
    Cancelled = 1,
    Failed    = 2,
};

}
