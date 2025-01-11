#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Connection; }
namespace cricket { class StunMessage; }
namespace cricket { class TurnPort; }
namespace rtc { struct PacketOptions; }
namespace webrtc { class PendingTaskSafetyFlag; }
// clang-format on

namespace cricket {

class TurnEntry {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void OnChannelBindError(::cricket::StunMessage*, int);

    MCAPI void OnChannelBindSuccess();

    MCAPI void OnChannelBindTimeout();

    MCAPI void OnCreatePermissionError(::cricket::StunMessage*, int);

    MCAPI void OnCreatePermissionSuccess();

    MCAPI void OnCreatePermissionTimeout();

    MCAPI int Send(void const*, uint64, bool, ::rtc::PacketOptions const&);

    MCAPI void SendChannelBindRequest(int);

    MCAPI void SendCreatePermissionRequest(int);

    MCAPI void TrackConnection(::cricket::Connection*);

    MCAPI TurnEntry(::cricket::TurnPort*, ::cricket::Connection*, int);

    MCAPI ::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> UntrackConnection(::cricket::Connection*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cricket::TurnPort*, ::cricket::Connection*, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
