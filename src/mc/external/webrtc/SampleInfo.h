#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::metrics {

struct SampleInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk70a362;
    ::ll::UntypedStorage<4, 4>  mUnkcec79e;
    ::ll::UntypedStorage<4, 4>  mUnk5f593d;
    ::ll::UntypedStorage<8, 8>  mUnka21e13;
    ::ll::UntypedStorage<8, 16> mUnk7c562f;
    // NOLINTEND

public:
    // prevent constructor by default
    SampleInfo& operator=(SampleInfo const&);
    SampleInfo(SampleInfo const&);
    SampleInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SampleInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc::metrics
