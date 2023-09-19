#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExternalDataInterface {
public:
    // prevent constructor by default
    ExternalDataInterface& operator=(ExternalDataInterface const&);
    ExternalDataInterface(ExternalDataInterface const&);
    ExternalDataInterface();
};
