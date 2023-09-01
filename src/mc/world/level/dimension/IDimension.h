#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDimension {
public:
    // prevent constructor by default
    IDimension& operator=(IDimension const&) = delete;
    IDimension(IDimension const&)            = delete;
    IDimension()                             = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1IDimension@@UEAA@XZ
    MCVAPI ~IDimension();

    // NOLINTEND
};
