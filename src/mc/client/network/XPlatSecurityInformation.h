#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct XPlatSecurityInformation {

public:
    // prevent constructor by default
    XPlatSecurityInformation& operator=(XPlatSecurityInformation const&) = delete;
    XPlatSecurityInformation(XPlatSecurityInformation const&)            = delete;
    XPlatSecurityInformation()                                           = delete;
};

}; // namespace xbox::httpclient
