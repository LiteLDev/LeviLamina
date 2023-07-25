#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExtraLicenseData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXTRALICENSEDATA
public:
    ExtraLicenseData& operator=(ExtraLicenseData const&) = delete;
    ExtraLicenseData(ExtraLicenseData const&)            = delete;
    ExtraLicenseData()                                   = delete;
#endif

public:
};
