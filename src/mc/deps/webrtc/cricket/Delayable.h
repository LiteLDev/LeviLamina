#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class Delayable {
public:
    // prevent constructor by default
    Delayable& operator=(Delayable const&);
    Delayable(Delayable const&);
    Delayable();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1Delayable@cricket@@UEAA@XZ
    virtual ~Delayable() = default;

    // NOLINTEND
};

}; // namespace cricket
