#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExtraLicenseData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkdb3a45;
    ::ll::UntypedStorage<8, 8> mUnkb2926d;
    ::ll::UntypedStorage<8, 8> mUnk1d8515;
    // NOLINTEND

public:
    // prevent constructor by default
    ExtraLicenseData& operator=(ExtraLicenseData const&);
    ExtraLicenseData(ExtraLicenseData const&);
    ExtraLicenseData();
};
