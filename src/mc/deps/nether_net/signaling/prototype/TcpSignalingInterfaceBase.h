#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/ISignalingInterface.h"
#include "mc/deps/nether_net/utils/EnableSharedFromThis.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { struct ISignalingEventHandler; }
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

class TcpSignalingInterfaceBase : public ::NetherNet::ContextProxy,
                                  public ::NetherNet::ISignalingInterface,
                                  public ::sigslot::has_slots<::sigslot::single_threaded>,
                                  public ::NetherNet::EnableSharedFromThis<::NetherNet::TcpSignalingInterfaceBase> {
public:
    // TcpSignalingInterfaceBase inner types declare
    // clang-format off
    class Peer;
    // clang-format on

    // TcpSignalingInterfaceBase inner types define
    class Peer : public ::sigslot::has_slots<::sigslot::single_threaded> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mUnk5f7cc6;
        ::ll::UntypedStorage<8, 48> mUnk8a97b1;
        ::ll::UntypedStorage<8, 24> mUnkde7d1e;
        ::ll::UntypedStorage<8, 8>  mUnk406305;
        // NOLINTEND

    public:
        // prevent constructor by default
        Peer& operator=(Peer const&);
        Peer(Peer const&);
        Peer();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Peer() /*override*/ = default;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkfde063;
    ::ll::UntypedStorage<8, 128> mUnkccca98;
    // NOLINTEND

public:
    // prevent constructor by default
    TcpSignalingInterfaceBase& operator=(TcpSignalingInterfaceBase const&);
    TcpSignalingInterfaceBase(TcpSignalingInterfaceBase const&);
    TcpSignalingInterfaceBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TcpSignalingInterfaceBase() /*override*/ = default;

    virtual void SendSignal(
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

} // namespace NetherNet
