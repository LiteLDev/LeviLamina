#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SDL {

struct IntegrityVerdict {
public:
    // IntegrityVerdict inner types define
    enum class DeviceVerdict : int {
        Pass    = 0,
        Basic   = 1,
        Strong  = 2,
        Virtual = 3,
        Fail    = 4,
        Unknown = 5,
    };

    enum class AppVerdict : int {
        Recognized   = 0,
        Unrecognized = 1,
        Unevaluated  = 2,
        Unknown      = 3,
    };

    enum class LicenseVerdict : int {
        Licensed    = 0,
        Unlicensed  = 1,
        Unevaluated = 2,
        Unknown     = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk426908;
    ::ll::UntypedStorage<4, 4>  mUnk9688ea;
    ::ll::UntypedStorage<4, 4>  mUnk75a935;
    ::ll::UntypedStorage<4, 4>  mUnk3c0af1;
    // NOLINTEND

public:
    // prevent constructor by default
    IntegrityVerdict& operator=(IntegrityVerdict const&);
    IntegrityVerdict(IntegrityVerdict const&);
    IntegrityVerdict();
};

} // namespace SDL
