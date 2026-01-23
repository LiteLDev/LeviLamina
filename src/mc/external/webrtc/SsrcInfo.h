#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SsrcInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk3e903e;
    ::ll::UntypedStorage<8, 32> mUnk97fe82;
    ::ll::UntypedStorage<8, 32> mUnk5862e7;
    ::ll::UntypedStorage<8, 32> mUnk91975b;
    // NOLINTEND

public:
    // prevent constructor by default
    SsrcInfo& operator=(SsrcInfo const&);
    SsrcInfo(SsrcInfo const&);
    SsrcInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SsrcInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
