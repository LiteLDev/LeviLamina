#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Control {
public:
    // prevent constructor by default
    Control& operator=(Control const&);
    Control(Control const&);
    Control();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~Control();

    // NOLINTEND
};
