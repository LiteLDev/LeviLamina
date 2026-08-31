#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct VoiceMediaSendInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf0e3b2;
    ::ll::UntypedStorage<8, 16> mUnk7c7839;
    // NOLINTEND

public:
    // prevent constructor by default
    VoiceMediaSendInfo& operator=(VoiceMediaSendInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VoiceMediaSendInfo();

    MCNAPI VoiceMediaSendInfo(::webrtc::VoiceMediaSendInfo const&);

    MCNAPI ~VoiceMediaSendInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::VoiceMediaSendInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
