#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

struct EduAuthParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkfab10b;
    // NOLINTEND

public:
    // prevent constructor by default
    EduAuthParameters& operator=(EduAuthParameters const&);
    EduAuthParameters(EduAuthParameters const&);
    EduAuthParameters();

};

}
