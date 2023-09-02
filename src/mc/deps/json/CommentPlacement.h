#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {

enum class CommentPlacement : int {
    Before          = 0x0,
    AfterOnSameLine = 0x1,
    After           = 0x2,
    Count           = 0x3,
};
};
