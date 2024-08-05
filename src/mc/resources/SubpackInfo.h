#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SubpackInfo {
public:
    // prevent constructor by default
    SubpackInfo& operator=(SubpackInfo const&);
    SubpackInfo(SubpackInfo const&);
    SubpackInfo();

public:
    // NOLINTBEGIN
    MCAPI ~SubpackInfo();

    // NOLINTEND
};
