#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DownloaderState : int {
    Failed = 0,
    ErrorOccurred = 1,
    Done = 2,
};
