#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SsrcInfo {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI SsrcInfo(::webrtc::SsrcInfo const&);

    MCAPI ~SsrcInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::SsrcInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
