#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SDL {

struct ServiceResponseOfPage {
public:
    // prevent constructor by default
    ServiceResponseOfPage& operator=(ServiceResponseOfPage const&);
    ServiceResponseOfPage(ServiceResponseOfPage const&);
    ServiceResponseOfPage();
};

} // namespace SDL
