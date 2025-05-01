#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DtmfProviderInterface; }
namespace webrtc { class TaskQueueBase; }
// clang-format on

namespace webrtc {

class DtmfSender {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void DoInsertDtmf();

    MCNAPI DtmfSender(::webrtc::TaskQueueBase*, ::webrtc::DtmfProviderInterface*);

    MCNAPI void OnDtmfProviderDestroyed();

    MCNAPI void QueueInsertDtmf(uint);

    MCNAPI void StopSending();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::DtmfSender>
    Create(::webrtc::TaskQueueBase*, ::webrtc::DtmfProviderInterface*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::TaskQueueBase*, ::webrtc::DtmfProviderInterface*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
