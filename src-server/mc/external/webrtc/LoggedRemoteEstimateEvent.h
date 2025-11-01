#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedRemoteEstimateEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7cb323;
    ::ll::UntypedStorage<8, 16> mUnk233d0b;
    ::ll::UntypedStorage<8, 16> mUnkc65711;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedRemoteEstimateEvent& operator=(LoggedRemoteEstimateEvent const&);
    LoggedRemoteEstimateEvent(LoggedRemoteEstimateEvent const&);
    LoggedRemoteEstimateEvent();
};

} // namespace webrtc
