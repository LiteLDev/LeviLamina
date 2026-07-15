#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct TransportChannelStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk334233;
    ::ll::UntypedStorage<4, 4>   mUnk36c16d;
    ::ll::UntypedStorage<4, 4>   mUnkc80a1f;
    ::ll::UntypedStorage<4, 4>   mUnkb7ea17;
    ::ll::UntypedStorage<8, 24>  mUnkef1bb9;
    ::ll::UntypedStorage<4, 8>   mUnk1c941c;
    ::ll::UntypedStorage<4, 4>   mUnk7f8a25;
    ::ll::UntypedStorage<8, 136> mUnkc82170;
    ::ll::UntypedStorage<2, 2>   mUnk23ccf0;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportChannelStats& operator=(TransportChannelStats const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TransportChannelStats();

    MCNAPI TransportChannelStats(::webrtc::TransportChannelStats const&);

    MCNAPI ~TransportChannelStats();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::TransportChannelStats const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
