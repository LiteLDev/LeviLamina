#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::metrics {

struct SampleInfo {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SampleInfo(::std::string_view, int, int, uint64);

    MCNAPI ~SampleInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view, int, int, uint64);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc::metrics
