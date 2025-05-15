#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SsrcInfo {
public:
    // prevent constructor by default
    SsrcInfo& operator=(SsrcInfo const&);
    SsrcInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SsrcInfo(::webrtc::SsrcInfo const&);

    MCNAPI ~SsrcInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::SsrcInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
