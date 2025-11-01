#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class BundlePolicyUsage : int {
    KBundlePolicyUsageBalanced = 0,
    KBundlePolicyUsageMaxBundle = 1,
    KBundlePolicyUsageMaxCompat = 2,
    KBundlePolicyUsageMax = 3,
};

}
