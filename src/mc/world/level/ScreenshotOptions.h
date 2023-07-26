#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScreenshotOptions {

public:
    // prevent constructor by default
    ScreenshotOptions& operator=(ScreenshotOptions const&) = delete;
    ScreenshotOptions(ScreenshotOptions const&)            = delete;
    ScreenshotOptions()                                    = delete;
};
