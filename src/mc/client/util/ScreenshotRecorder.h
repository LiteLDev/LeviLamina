#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScreenshotRecorder {
public:
    // prevent constructor by default
    ScreenshotRecorder& operator=(ScreenshotRecorder const&);
    ScreenshotRecorder(ScreenshotRecorder const&);
    ScreenshotRecorder();
};
