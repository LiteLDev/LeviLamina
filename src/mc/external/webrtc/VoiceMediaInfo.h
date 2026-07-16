#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct VoiceMediaInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk319917;
    ::ll::UntypedStorage<8, 24> mUnk71939f;
    ::ll::UntypedStorage<8, 16> mUnk8d6df6;
    ::ll::UntypedStorage<8, 16> mUnk595c66;
    ::ll::UntypedStorage<4, 4>  mUnk846e93;
    // NOLINTEND

public:
    // prevent constructor by default
    VoiceMediaInfo& operator=(VoiceMediaInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VoiceMediaInfo();

    MCNAPI VoiceMediaInfo(::webrtc::VoiceMediaInfo const&);

    MCNAPI ~VoiceMediaInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::VoiceMediaInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
