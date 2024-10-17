#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct XPlatSecurityInformation {
public:
    // prevent constructor by default
    XPlatSecurityInformation& operator=(XPlatSecurityInformation const&);
    XPlatSecurityInformation(XPlatSecurityInformation const&);
    XPlatSecurityInformation();
};

}; // namespace xbox::httpclient
