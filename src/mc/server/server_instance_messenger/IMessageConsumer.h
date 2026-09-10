#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerInstanceMessenger {

class IMessageConsumer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMessageConsumer() = default;

    virtual void processMessages() = 0;

    virtual void stopAndDiscardMessages() = 0;

    virtual uint64 getPendingMessageCount() = 0;
    // NOLINTEND
};

} // namespace ServerInstanceMessenger
