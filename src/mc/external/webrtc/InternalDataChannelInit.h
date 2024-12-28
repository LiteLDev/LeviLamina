#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct DataChannelInit; }
// clang-format on

namespace webrtc {

struct InternalDataChannelInit {
public:
    // prevent constructor by default
    InternalDataChannelInit& operator=(InternalDataChannelInit const&);
    InternalDataChannelInit(InternalDataChannelInit const&);
    InternalDataChannelInit();

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
