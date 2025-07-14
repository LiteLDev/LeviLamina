#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct TransportChannelStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkff7607;
    ::ll::UntypedStorage<4, 4>   mUnk257e9d;
    ::ll::UntypedStorage<4, 4>   mUnkc4d29a;
    ::ll::UntypedStorage<4, 4>   mUnk640b52;
    ::ll::UntypedStorage<4, 8>   mUnke9bca3;
    ::ll::UntypedStorage<4, 4>   mUnk2fe5d6;
    ::ll::UntypedStorage<8, 136> mUnk589705;
    ::ll::UntypedStorage<2, 2>   mUnk6b4453;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportChannelStats& operator=(TransportChannelStats const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TransportChannelStats();

    MCNAPI TransportChannelStats(::cricket::TransportChannelStats const&);

    MCNAPI ~TransportChannelStats();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::cricket::TransportChannelStats const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
