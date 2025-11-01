#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class EducationFeature : uchar {
    // bitfield representation
    None = 0,
    Chemistry = 1 << 0,
    Education = 1 << 1,
    CodeBuilder = 1 << 2,
    BaseCodeBuilder = 1 << 3,
};
