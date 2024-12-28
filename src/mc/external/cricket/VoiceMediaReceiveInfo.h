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
    MCAPI VoiceMediaReceiveInfo();

    MCAPI VoiceMediaReceiveInfo(::cricket::VoiceMediaReceiveInfo const&);

    MCAPI ~VoiceMediaReceiveInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::cricket::VoiceMediaReceiveInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
