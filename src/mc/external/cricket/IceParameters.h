#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCError; }
// clang-format on

namespace cricket {

struct IceParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdd27da;
    ::ll::UntypedStorage<8, 32> mUnkb9b22f;
    ::ll::UntypedStorage<1, 1>  mUnk2eaab5;
    // NOLINTEND

public:
    // prevent constructor by default
    IceParameters& operator=(IceParameters const&);
    IceParameters(IceParameters const&);
    IceParameters();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::webrtc::RTCError Validate() const;

    MCAPI ~IceParameters();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
