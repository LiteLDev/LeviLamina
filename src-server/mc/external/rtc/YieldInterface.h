#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class YieldInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~YieldInterface() = default;

    // vIndex: 1
    virtual void YieldExecution() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
