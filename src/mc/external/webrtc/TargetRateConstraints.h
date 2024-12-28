#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct TargetRateConstraints {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkd5e9df;
    ::ll::UntypedStorage<8, 16> mUnk685d55;
    ::ll::UntypedStorage<8, 16> mUnka3446c;
    ::ll::UntypedStorage<8, 16> mUnk7a4b60;
    // NOLINTEND

public:
    // prevent constructor by default
    TargetRateConstraints& operator=(TargetRateConstraints const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TargetRateConstraints();

    MCAPI TargetRateConstraints(::webrtc::TargetRateConstraints const&);

    MCAPI ~TargetRateConstraints();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::webrtc::TargetRateConstraints const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
