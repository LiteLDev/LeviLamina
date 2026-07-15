#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCError; }
// clang-format on

namespace webrtc {

struct IceParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk845321;
    ::ll::UntypedStorage<8, 32> mUnkbd103e;
    ::ll::UntypedStorage<1, 1>  mUnk806926;
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

} // namespace webrtc
