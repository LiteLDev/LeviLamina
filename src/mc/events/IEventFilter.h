#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IEventFilter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEventFilter();

    virtual void setAcceptNewEvents(bool) = 0;
    // NOLINTEND
};
