#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class RtpHeaderExtensionQueryInterface {
public:
    // prevent constructor by default
    RtpHeaderExtensionQueryInterface& operator=(RtpHeaderExtensionQueryInterface const&);
    RtpHeaderExtensionQueryInterface(RtpHeaderExtensionQueryInterface const&);
    RtpHeaderExtensionQueryInterface();
};

}; // namespace cricket
