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
    ::ll::UntypedStorage<8, 32> mUnk6cfd82;
    ::ll::UntypedStorage<8, 32> mUnkf3896a;
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
    MCNAPI ::webrtc::RTCError Validate() const;

    MCNAPI ~IceParameters();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
