#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerInstanceMessenger {

class IMessageConsumer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMessageConsumer() = default;

    virtual void processMessages() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ServerInstanceMessenger
