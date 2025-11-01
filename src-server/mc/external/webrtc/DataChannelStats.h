#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct DataChannelStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkc62e97;
    ::ll::UntypedStorage<4, 4>  mUnkef578b;
    ::ll::UntypedStorage<8, 32> mUnk5994b5;
    ::ll::UntypedStorage<8, 32> mUnkb378d0;
    ::ll::UntypedStorage<4, 4>  mUnkce9f27;
    ::ll::UntypedStorage<4, 4>  mUnkcf2f34;
    ::ll::UntypedStorage<4, 4>  mUnk1959a2;
    ::ll::UntypedStorage<8, 8>  mUnke4bee7;
    ::ll::UntypedStorage<8, 8>  mUnk377d73;
    ::ll::UntypedStorage<8, 8>  mUnk65a223;
    // NOLINTEND

public:
    // prevent constructor by default
    DataChannelStats& operator=(DataChannelStats const&);
    DataChannelStats(DataChannelStats const&);
    DataChannelStats();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DataChannelStats();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
