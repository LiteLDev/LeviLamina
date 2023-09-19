#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExtraLicenseData {
public:
    // prevent constructor by default
    ExtraLicenseData& operator=(ExtraLicenseData const&);
    ExtraLicenseData(ExtraLicenseData const&);
    ExtraLicenseData();
};
