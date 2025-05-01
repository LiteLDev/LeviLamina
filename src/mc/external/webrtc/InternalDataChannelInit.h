#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct DataChannelInit; }
// clang-format on

namespace webrtc {

struct InternalDataChannelInit {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit InternalDataChannelInit(::webrtc::DataChannelInit const&);

    MCNAPI bool IsValid() const;

    MCNAPI ~InternalDataChannelInit();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::DataChannelInit const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
