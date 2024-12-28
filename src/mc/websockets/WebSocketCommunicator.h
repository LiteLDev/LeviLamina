#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/CloseStatusCode.h"

// auto generated forward declare list
// clang-format off
class RakWebSocketDataFrame;
// clang-format on

class WebSocketCommunicator {
public:
    // WebSocketCommunicator inner types define
    enum class SocketType : uchar {
        None   = 0,
        Client = 1,
        Server = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnka71289;
    ::ll::UntypedStorage<1, 1>  mUnkfe149d;
    ::ll::UntypedStorage<8, 8>  mUnkf245b5;
    ::ll::UntypedStorage<2, 2>  mUnk175cb8;
    ::ll::UntypedStorage<1, 1>  mUnk1c4fa5;
    ::ll::UntypedStorage<8, 24> mUnk3b881a;
    ::ll::UntypedStorage<1, 1>  mUnk14febb;
    // NOLINTEND

public:
    // prevent constructor by default
    WebSocketCommunicator& operator=(WebSocketCommunicator const&);
    WebSocketCommunicator(WebSocketCommunicator const&);
    WebSocketCommunicator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WebSocketCommunicator();

    // vIndex: 1
    virtual bool shouldSerialize();

    // vIndex: 2
    virtual void onSerialize();

    // vIndex: 3
    virtual void onReceive(::RakWebSocketDataFrame const&);

    // vIndex: 4
    virtual void onClose(::CloseStatusCode, ::std::string const&);

    // vIndex: 5
    virtual void onConnected(::std::string const&);

    // vIndex: 6
    virtual void onPostClosed();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $shouldSerialize();

    MCAPI void $onSerialize();

    MCAPI void $onReceive(::RakWebSocketDataFrame const&);

    MCAPI void $onClose(::CloseStatusCode, ::std::string const&);

    MCAPI void $onConnected(::std::string const&);

    MCAPI void $onPostClosed();
    // NOLINTEND
};
