#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct VoiceMediaReceiveInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfede12;
    ::ll::UntypedStorage<8, 16> mUnk33642b;
    ::ll::UntypedStorage<4, 4>  mUnk5af374;
    // NOLINTEND

public:
    // prevent constructor by default
    VoiceMediaReceiveInfo& operator=(VoiceMediaReceiveInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VoiceMediaReceiveInfo();

    MCNAPI VoiceMediaReceiveInfo(::cricket::VoiceMediaReceiveInfo const&);

    MCNAPI ~VoiceMediaReceiveInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::cricket::VoiceMediaReceiveInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
