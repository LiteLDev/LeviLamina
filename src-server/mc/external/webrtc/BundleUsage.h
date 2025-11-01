#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class BundleUsage : int {
    KBundleUsageEmpty                   = 0,
    KBundleUsageNoBundleDatachannelOnly = 1,
    KBundleUsageNoBundleSimple          = 2,
    KBundleUsageNoBundleComplex         = 3,
    KBundleUsageBundleDatachannelOnly   = 4,
    KBundleUsageBundleSimple            = 5,
    KBundleUsageBundleComplex           = 6,
    KBundleUsageNoBundlePlanB           = 7,
    KBundleUsageBundlePlanB             = 8,
    KBundleUsageMax                     = 9,
};

}
