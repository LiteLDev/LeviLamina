#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"

namespace NetherNet {

class NetworkSession : public ::NetherNet::ContextProxy {
public:
    // NetworkSession inner types declare
    // clang-format off
    struct DisableTrickleIceTag;
    // clang-format on

    // NetworkSession inner types define
    enum class Direction : int {
        Incoming = 0,
        Outgoing = 1,
    };

    struct DisableTrickleIceTag {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>   mUnk2aae3b;
    ::ll::UntypedStorage<1, 1>   mUnk3ebc21;
    ::ll::UntypedStorage<1, 1>   mUnk266d1b;
    ::ll::UntypedStorage<8, 24>  mUnkb2ad91;
    ::ll::UntypedStorage<8, 8>   mUnk75c52e;
    ::ll::UntypedStorage<8, 8>   mUnk4ed703;
    ::ll::UntypedStorage<8, 8>   mUnkea75f3;
    ::ll::UntypedStorage<4, 4>   mUnk4e1a8f;
    ::ll::UntypedStorage<8, 8>   mUnk11904d;
    ::ll::UntypedStorage<8, 72>  mUnk3ecbc0;
    ::ll::UntypedStorage<8, 72>  mUnk905b39;
    ::ll::UntypedStorage<8, 760> mUnkd1f02b;
    ::ll::UntypedStorage<8, 320> mUnk38831a;
    ::ll::UntypedStorage<8, 32>  mUnk6aa1b2;
    ::ll::UntypedStorage<8, 32>  mUnk921bca;
    ::ll::UntypedStorage<8, 24>  mUnk9fd647;
    ::ll::UntypedStorage<8, 24>  mUnk7f256c;
    ::ll::UntypedStorage<8, 32>  mUnkb17c0d;
    ::ll::UntypedStorage<8, 32>  mUnkdafca0;
    ::ll::UntypedStorage<4, 8>   mUnk6ac63a;
    ::ll::UntypedStorage<8, 8>   mUnk5e8ac3;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkSession& operator=(NetworkSession const&);
    NetworkSession(NetworkSession const&);
    NetworkSession();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkSession() /*override*/ = default;
    // NOLINTEND
};

} // namespace NetherNet
