#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StunMessage; }
namespace webrtc { class StunRequest; }
namespace webrtc { class TaskQueueBase; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace webrtc {

class StunRequestManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk6a6f11;
    ::ll::UntypedStorage<8, 16> mUnk743f6c;
    ::ll::UntypedStorage<8, 64> mUnk4715f3;
    // NOLINTEND

public:
    // prevent constructor by default
    StunRequestManager& operator=(StunRequestManager const&);
    StunRequestManager(StunRequestManager const&);
    StunRequestManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool CheckResponse(::webrtc::StunMessage* msg);

    MCNAPI bool CheckResponse(char const* data, uint64 size);

    MCNAPI void Clear();

    MCNAPI void Send(::std::unique_ptr<::webrtc::StunRequest> request, ::webrtc::TimeDelta delay);

    MCNAPI StunRequestManager(
        ::webrtc::TaskQueueBase*                                           thread,
        ::std::function<void(void const*, uint64, ::webrtc::StunRequest*)> send_packet
    );

    MCNAPI ~StunRequestManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::TaskQueueBase*                                           thread,
        ::std::function<void(void const*, uint64, ::webrtc::StunRequest*)> send_packet
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
