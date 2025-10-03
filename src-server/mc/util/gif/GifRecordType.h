#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class GifRecordType : int {
    UndefinedRecordType  = 0,
    ScreenDescRecordType = 1,
    ImageDescRecordType  = 2,
    ExtensionRecordType  = 3,
    TerminateRecordType  = 4,
};
