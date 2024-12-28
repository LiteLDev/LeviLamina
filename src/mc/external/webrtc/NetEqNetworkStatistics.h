#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct NetEqNetworkStatistics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkfe04b5;
    ::ll::UntypedStorage<2, 2> mUnk6bc65f;
    ::ll::UntypedStorage<2, 2> mUnk934343;
    ::ll::UntypedStorage<2, 2> mUnk773425;
    ::ll::UntypedStorage<2, 2> mUnka7272d;
    ::ll::UntypedStorage<2, 2> mUnkb9f2b4;
    ::ll::UntypedStorage<2, 2> mUnk88a192;
    ::ll::UntypedStorage<2, 2> mUnke433bc;
    ::ll::UntypedStorage<2, 2> mUnk490a5d;
    ::ll::UntypedStorage<4, 4> mUnka8ae70;
    ::ll::UntypedStorage<4, 4> mUnke06766;
    ::ll::UntypedStorage<4, 4> mUnk3467e1;
    ::ll::UntypedStorage<4, 4> mUnkcec57b;
    // NOLINTEND

public:
    // prevent constructor by default
    NetEqNetworkStatistics& operator=(NetEqNetworkStatistics const&);
    NetEqNetworkStatistics(NetEqNetworkStatistics const&);
    NetEqNetworkStatistics();
};

} // namespace webrtc
