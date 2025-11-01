#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc::webrtc_logging_impl {

enum class LogArgType : schar {
    KEnd = 0,
    KInt = 1,
    KLong = 2,
    KLongLong = 3,
    KUInt = 4,
    KULong = 5,
    KULongLong = 6,
    KDouble = 7,
    KLongDouble = 8,
    KCharP = 9,
    KStdString = 10,
    KStringView = 11,
    KVoidP = 12,
    KLogMetadata = 13,
    KLogMetadataErr = 14,
};

}
