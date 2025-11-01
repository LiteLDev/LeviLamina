#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BookEditAction : uchar {
    ReplacePage = 0,
    AddPage = 1,
    DeletePage = 2,
    SwapPages = 3,
    Finalize = 4,
};
