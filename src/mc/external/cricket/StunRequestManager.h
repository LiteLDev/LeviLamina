#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunMessage; }
namespace cricket { class StunRequest; }
namespace webrtc { class TaskQueueBase; }
// clang-format on

namespace cricket {

class StunRequestManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkcf5cbe;
    ::ll::UntypedStorage<8, 16> mUnkeafb20;
    ::ll::UntypedStorage<8, 64> mUnkcf4e95;
    // NOLINTEND

public:
    // prevent constructor by default
    StunRequestManager& operator=(StunRequestManager const&);
    StunRequestManager(StunRequestManager const&);
    StunRequestManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool CheckResponse(::cricket::StunMessage*);

    MCNAPI bool CheckResponse(char const*, uint64);

    MCNAPI void Clear();

    MCNAPI void OnRequestTimedOut(::cricket::StunRequest*);

    MCNAPI void Send(::cricket::StunRequest*);

    MCNAPI void SendDelayed(::cricket::StunRequest*, int);

    MCNAPI void SendPacket(void const*, uint64, ::cricket::StunRequest*);

    MCNAPI
    StunRequestManager(::webrtc::TaskQueueBase*, ::std::function<void(void const*, uint64, ::cricket::StunRequest*)>);

    MCNAPI ~StunRequestManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::TaskQueueBase*, ::std::function<void(void const*, uint64, ::cricket::StunRequest*)>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
