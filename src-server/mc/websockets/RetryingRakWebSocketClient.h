#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/CloseStatusCode.h"
#include "mc/websockets/RakWebSocketClient.h"
#include "mc/websockets/WSConnectionResult.h"

// auto generated forward declare list
// clang-format off
class RakWebSocketDataFrame;
// clang-format on

class RetryingRakWebSocketClient : public ::RakWebSocketClient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk5a1ab2;
    ::ll::UntypedStorage<1, 1> mUnk502eab;
    ::ll::UntypedStorage<8, 32> mUnk22f909;
    ::ll::UntypedStorage<4, 4> mUnkf360cc;
    ::ll::UntypedStorage<1, 1> mUnk2ca55b;
    ::ll::UntypedStorage<4, 4> mUnkf2f88e;
    ::ll::UntypedStorage<4, 4> mUnka64779;
    ::ll::UntypedStorage<8, 80> mUnk51b4ea;
    // NOLINTEND

public:
    // prevent constructor by default
    RetryingRakWebSocketClient& operator=(RetryingRakWebSocketClient const&);
    RetryingRakWebSocketClient(RetryingRakWebSocketClient const&);
    RetryingRakWebSocketClient();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::WSConnectionResult connect(::std::string const& uri) /*override*/;

    // vIndex: 2
    virtual ::WSConnectionResult connect(::std::string const& uri, ::std::vector<::std::string> const& subProtocols) /*override*/;

    // vIndex: 7
    virtual void tick() /*override*/;

    // vIndex: 4
    virtual void setOnMessageReceivedHandler(::std::function<void(::RakWebSocketDataFrame const&)> const& handler) /*override*/;

    // vIndex: 5
    virtual void setOnCloseHandler(::std::function<void(::CloseStatusCode, ::std::string const&)> const& handler) /*override*/;

    // vIndex: 6
    virtual void setOnConnectedHandler(::std::function<void(::std::string const&)> const& handler) /*override*/;

    // vIndex: 0
    virtual ~RetryingRakWebSocketClient() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
