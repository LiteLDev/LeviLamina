#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class LocalNetworkAccessPermissionStatus : int {
    KGranted = 0,
    KDenied  = 1,
};

}
