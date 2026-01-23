#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IEventFilter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEventFilter() = default;

    virtual void setAcceptNewEvents(bool) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
