#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::metrics {

struct SampleInfo {
public:
    // prevent constructor by default
    SampleInfo& operator=(SampleInfo const&);
    SampleInfo(SampleInfo const&);
    SampleInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SampleInfo(::std::string_view, int, int, uint64);

    MCAPI ~SampleInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string_view, int, int, uint64);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc::metrics
