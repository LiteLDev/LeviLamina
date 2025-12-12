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
    virtual void enqueueMessage(
        ::brstd::move_only_function<void()>      message,
        ::ServerInstanceMessenger::MessageAction action
    ) /*override*/;

    virtual void enqueueAndAwaitExecution(
        ::brstd::move_only_function<void(::brstd::move_only_function<void() const>)> message,
        ::ServerInstanceMessenger::MessageAction                                     action
    ) /*override*/;

    virtual void processMessages() /*override*/;

    virtual ::ServerInstanceMessenger::IMessageProducer& getProducer() /*override*/;

    virtual ::ServerInstanceMessenger::IMessageConsumer& getConsumer() /*override*/;

    virtual ~Messenger() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void
    $enqueueMessage(::brstd::move_only_function<void()> message, ::ServerInstanceMessenger::MessageAction action);

    MCNAPI void $enqueueAndAwaitExecution(
        ::brstd::move_only_function<void(::brstd::move_only_function<void() const>)> message,
        ::ServerInstanceMessenger::MessageAction                                     action
    );

    MCNAPI void $processMessages();

    MCNAPI ::ServerInstanceMessenger::IMessageProducer& $getProducer();

    MCNAPI ::ServerInstanceMessenger::IMessageConsumer& $getConsumer();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIMessenger();

    MCNAPI static void** $vftableForIMessageConsumer();

    MCNAPI static void** $vftableForIMessageProducer();
    // NOLINTEND
};

} // namespace ServerInstanceMessenger
