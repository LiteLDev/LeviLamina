#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/ISignalingInterface.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { struct ISignalingEventHandler; }
namespace NetherNet { struct NetworkID; }
// clang-format on

class HttpSignalingClient : public ::NetherNet::ISignalingInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 336> mUnkabb525;
    ::ll::UntypedStorage<8, 24>  mUnkae26d7;
    ::ll::UntypedStorage<8, 32>  mUnkaf4e7e;
    ::ll::UntypedStorage<8, 24>  mUnk4ffa8d;
    ::ll::UntypedStorage<8, 128> mUnk2992c8;
    // NOLINTEND

public:
    // prevent constructor by default
    HttpSignalingClient& operator=(HttpSignalingClient const&);
    HttpSignalingClient(HttpSignalingClient const&);
    HttpSignalingClient();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HttpSignalingClient() /*override*/ = default;

    virtual void SendSignal(
        ::NetherNet::NetworkID,
        ::NetherNet::NetworkID,
        ::std::string const&,
        ::std::function<void(::NetherNet::ESessionError)>&&
    ) /*override*/;

    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
