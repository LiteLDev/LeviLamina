#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LocalConstBlockSource {
public:
    // prevent constructor by default
    LocalConstBlockSource& operator=(LocalConstBlockSource const&);
    LocalConstBlockSource(LocalConstBlockSource const&);
    LocalConstBlockSource();

public:
    // NOLINTBEGIN
    MCAPI ~LocalConstBlockSource();

    // NOLINTEND
};
