#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct XPlatSecurityInformation {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_XBOX_HTTPCLIENT_XPLATSECURITYINFORMATION
public:
    XPlatSecurityInformation& operator=(XPlatSecurityInformation const&) = delete;
    XPlatSecurityInformation(XPlatSecurityInformation const&)            = delete;
    XPlatSecurityInformation()                                           = delete;
#endif

public:
};

}; // namespace xbox::httpclient
