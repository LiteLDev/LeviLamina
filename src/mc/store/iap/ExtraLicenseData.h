#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExtraLicenseData {

public:
    // prevent constructor by default
    ExtraLicenseData& operator=(ExtraLicenseData const&) = delete;
    ExtraLicenseData(ExtraLicenseData const&)            = delete;
    ExtraLicenseData()                                   = delete;
};
