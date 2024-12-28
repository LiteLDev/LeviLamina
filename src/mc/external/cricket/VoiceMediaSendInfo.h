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
    MCAPI VoiceMediaSendInfo();

    MCAPI VoiceMediaSendInfo(::cricket::VoiceMediaSendInfo const&);

    MCAPI ~VoiceMediaSendInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::cricket::VoiceMediaSendInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
