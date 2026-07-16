#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Debug { struct DevServer; }
// clang-format on

namespace OreUI::Debug {

class DevServerListener {
public:
    // DevServerListener inner types declare
    // clang-format off
    struct Message;
    class BroadcastListener;
    // clang-format on

    // DevServerListener inner types define
    struct Message {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mIpAddress;
        ::ll::TypedStorage<8, 32, ::std::string> mPayload;
        // NOLINTEND
    };

    class BroadcastListener {
    public:
        // BroadcastListener inner types define
        using OnNewMessageCallback = ::std::function<void(::OreUI::Debug::DevServerListener::Message)>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                 mSocket;
        ::ll::TypedStorage<1, 1, ::std::atomic<bool>> mListening;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::gsl::span<::OreUI::Debug::DevServer const>)>> mOnDevServersChanged;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::Debug::DevServer>>                            mDevServers;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                         mMessageQueueMutex;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::Debug::DevServerListener::Message>>           mMessageQueue;
    ::ll::TypedStorage<8, 16, ::std::thread>                                                       mListeningThread;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Debug::DevServerListener::BroadcastListener>> mListener;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _handleNewMessages();

    MCAPI void _removeOldDevServers();

    MCAPI void update();

    MCAPI ~DevServerListener();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI::Debug
