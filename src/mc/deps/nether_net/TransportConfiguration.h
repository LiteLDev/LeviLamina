#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct TransportConfiguration {
public:
    // TransportConfiguration inner types define
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
    ::ll::UntypedStorage<8, 1536> mUnkd35e7d;
    ::ll::UntypedStorage<4, 4>    mUnkec821a;
    ::ll::UntypedStorage<8, 1280> mUnk580367;
    ::ll::UntypedStorage<4, 4>    mUnka25415;
    ::ll::UntypedStorage<1, 1>    mUnk6988db;
    ::ll::UntypedStorage<1, 1>    mUnk78ec5f;
    ::ll::UntypedStorage<4, 4>    mUnk358d77;
    ::ll::UntypedStorage<2, 2>    mUnkbeaf83;
    ::ll::UntypedStorage<1, 1>    mUnka03b86;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportConfiguration& operator=(TransportConfiguration const&);
    TransportConfiguration(TransportConfiguration const&);
    TransportConfiguration();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TransportConfiguration();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint64 const& MAX_KNOWN_MAPPED_ADDRESSES();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet
