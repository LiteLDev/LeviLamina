#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct VoiceMediaReceiveInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1148bd;
    ::ll::UntypedStorage<8, 16> mUnk99259f;
    ::ll::UntypedStorage<4, 4>  mUnk571037;
    // NOLINTEND

public:
    // prevent constructor by default
    VoiceMediaReceiveInfo& operator=(VoiceMediaReceiveInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VoiceMediaReceiveInfo();

    MCNAPI VoiceMediaReceiveInfo(::webrtc::VoiceMediaReceiveInfo const&);

    MCNAPI ~VoiceMediaReceiveInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::VoiceMediaReceiveInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
