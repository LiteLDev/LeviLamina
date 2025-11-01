#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct VoiceMediaSendInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbc32ca;
    ::ll::UntypedStorage<8, 16> mUnk6f14dc;
    // NOLINTEND

public:
    // prevent constructor by default
    VoiceMediaSendInfo& operator=(VoiceMediaSendInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VoiceMediaSendInfo();

    MCNAPI VoiceMediaSendInfo(::cricket::VoiceMediaSendInfo const&);

    MCNAPI ~VoiceMediaSendInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::cricket::VoiceMediaSendInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
