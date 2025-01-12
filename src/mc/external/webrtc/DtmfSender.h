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
    MCAPI void DoInsertDtmf();

    MCAPI DtmfSender(::webrtc::TaskQueueBase*, ::webrtc::DtmfProviderInterface*);

    MCAPI void OnDtmfProviderDestroyed();

    MCAPI void QueueInsertDtmf(uint);

    MCAPI void StopSending();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::webrtc::scoped_refptr<::webrtc::DtmfSender>
    Create(::webrtc::TaskQueueBase*, ::webrtc::DtmfProviderInterface*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::TaskQueueBase*, ::webrtc::DtmfProviderInterface*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
