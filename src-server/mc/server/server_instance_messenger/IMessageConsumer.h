#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerInstanceMessenger {

class IMessageConsumer {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IMessageConsumer() = default;

    // vIndex: 1
    virtual void processMessages() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
