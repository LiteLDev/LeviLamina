#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct NetherNetTransportServerConfiguration {
public:
    // NetherNetTransportServerConfiguration inner types define
    enum class SignalingHost : uchar {
        WebSocket          = 0,
        Deferred           = 1,
        TcpClientPrototype = 2,
        TcpServerPrototype = 3,
        None               = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1536> mUnk30759b;
    ::ll::UntypedStorage<4, 4>    mUnkd9fee8;
    ::ll::UntypedStorage<8, 1280> mUnka32350;
    ::ll::UntypedStorage<4, 4>    mUnk93ceeb;
    ::ll::UntypedStorage<1, 1>    mUnk577bee;
    ::ll::UntypedStorage<1, 1>    mUnkc81bff;
    ::ll::UntypedStorage<4, 4>    mUnk6a3507;
    // NOLINTEND

public:
    // prevent constructor by default
    NetherNetTransportServerConfiguration& operator=(NetherNetTransportServerConfiguration const&);
    NetherNetTransportServerConfiguration(NetherNetTransportServerConfiguration const&);
    NetherNetTransportServerConfiguration();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~NetherNetTransportServerConfiguration();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet
