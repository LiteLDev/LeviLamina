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
    MCAPI explicit InternalDataChannelInit(::webrtc::DataChannelInit const&);

    MCAPI bool IsValid() const;

    MCAPI ~InternalDataChannelInit();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::DataChannelInit const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
