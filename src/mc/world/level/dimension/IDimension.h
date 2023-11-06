#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDimension {
public:
    // prevent constructor by default
    IDimension& operator=(IDimension const&);
    IDimension(IDimension const&);
    IDimension();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IDimension@@UEAA@XZ
    virtual ~IDimension();

    // NOLINTEND
};
