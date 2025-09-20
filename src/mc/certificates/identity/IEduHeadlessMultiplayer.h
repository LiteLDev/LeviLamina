#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/EducationServicesEnvironment.h"

class IEduHeadlessMultiplayer {
public:
    // IEduHeadlessMultiplayer inner types define
    enum class ServerHealth : int {
        Unknown = -1,
        Poor    = 0,
        Mid     = 1,
        Good    = 2,
    };

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::EducationServicesEnvironment& mCachedEnvironment();
    // NOLINTEND
};
