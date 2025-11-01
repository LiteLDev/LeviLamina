#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"
#include "mc/server/server_instance_messenger/MessageAction.h"

namespace ServerInstanceMessenger {

class IMessageProducer {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IMessageProducer() = default;

    // vIndex: 1
    virtual void enqueueMessage(::brstd::move_only_function<void()>, ::ServerInstanceMessenger::MessageAction) = 0;

    // vIndex: 2
    virtual void enqueueAndAwaitExecution(
        ::brstd::move_only_function<void(::brstd::move_only_function<void() const>)>,
        ::ServerInstanceMessenger::MessageAction
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ServerInstanceMessenger
