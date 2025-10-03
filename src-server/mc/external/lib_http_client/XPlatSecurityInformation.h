#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct XPlatSecurityInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke26a45;
    // NOLINTEND

public:
    // prevent constructor by default
    XPlatSecurityInformation& operator=(XPlatSecurityInformation const&);
    XPlatSecurityInformation(XPlatSecurityInformation const&);
    XPlatSecurityInformation();
};

} // namespace xbox::httpclient
