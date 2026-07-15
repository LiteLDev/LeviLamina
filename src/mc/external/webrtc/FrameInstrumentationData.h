#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FrameInstrumentationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkf89a6f;
    ::ll::UntypedStorage<1, 1>  mUnk5259b6;
    ::ll::UntypedStorage<8, 8>  mUnkf7f311;
    ::ll::UntypedStorage<4, 4>  mUnkd8bac4;
    ::ll::UntypedStorage<4, 4>  mUnkb95671;
    ::ll::UntypedStorage<8, 24> mUnk94e72f;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameInstrumentationData& operator=(FrameInstrumentationData const&);
    FrameInstrumentationData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FrameInstrumentationData(::webrtc::FrameInstrumentationData const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FrameInstrumentationData const&);
    // NOLINTEND
};

} // namespace webrtc
