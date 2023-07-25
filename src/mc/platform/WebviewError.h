#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WebviewError {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEBVIEWERROR
public:
    WebviewError& operator=(WebviewError const&) = delete;
    WebviewError(WebviewError const&)            = delete;
    WebviewError()                               = delete;
#endif

public:
};
