#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct TimingFrameInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf5084d;
    ::ll::UntypedStorage<8, 8> mUnke6f593;
    ::ll::UntypedStorage<8, 8> mUnka17649;
    ::ll::UntypedStorage<8, 8> mUnk2b69b9;
    ::ll::UntypedStorage<8, 8> mUnk285a64;
    ::ll::UntypedStorage<8, 8> mUnkbbb607;
    ::ll::UntypedStorage<8, 8> mUnk54bd94;
    ::ll::UntypedStorage<8, 8> mUnk36bc94;
    ::ll::UntypedStorage<8, 8> mUnkff2a68;
    ::ll::UntypedStorage<8, 8> mUnk4f7251;
    ::ll::UntypedStorage<8, 8> mUnkf201e1;
    ::ll::UntypedStorage<8, 8> mUnk4ecda1;
    ::ll::UntypedStorage<8, 8> mUnkcc5f02;
    ::ll::UntypedStorage<1, 1> mUnk43a207;
    // NOLINTEND

public:
    // prevent constructor by default
    TimingFrameInfo& operator=(TimingFrameInfo const&);
    TimingFrameInfo(TimingFrameInfo const&);
    TimingFrameInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string ToString() const;
    // NOLINTEND
};

} // namespace webrtc
