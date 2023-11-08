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
    // vIndex: 0, symbol: __gen_??1Control@@UEAA@XZ
    virtual ~Control() = default;

    // NOLINTEND
};
