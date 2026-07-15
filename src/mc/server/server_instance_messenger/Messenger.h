#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"
#include "mc/server/server_instance_messenger/IMessageConsumer.h"
#include "mc/server/server_instance_messenger/IMessageProducer.h"
#include "mc/server/server_instance_messenger/IMessenger.h"
#include "mc/server/server_instance_messenger/MessageAction.h"

namespace ServerInstanceMessenger {

class Messenger : public ::ServerInstanceMessenger::IMessenger,
                  public ::ServerInstanceMessenger::IMessageConsumer,
                  public ::ServerInstanceMessenger::IMessageProducer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 616> mUnke430a3;
    // NOLINTEND

public:
    // prevent constructor by default
    Messenger& operator=(Messenger const&);
    Messenger(Messenger const&);
    Messenger();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
        enqueueMessage(::brstd::move_only_function<void()>, ::ServerInstanceMessenger::MessageAction) /*override*/;

    virtual void enqueueAndAwaitExecution(
        ::brstd::move_only_function<void(::brstd::move_only_function<void() const>)>,
        ::ServerInstanceMessenger::MessageAction
    ) /*override*/;

    virtual void processMessages() /*override*/;

    virtual ::ServerInstanceMessenger::IMessageProducer& getProducer() /*override*/;

    virtual ::ServerInstanceMessenger::IMessageConsumer& getConsumer() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ServerInstanceMessenger
