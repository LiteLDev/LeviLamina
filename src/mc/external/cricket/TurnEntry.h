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
    // prevent constructor by default
    TurnEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void OnChannelBindError(::cricket::StunMessage*, int);

    MCNAPI void OnChannelBindSuccess();

    MCNAPI void OnChannelBindTimeout();

    MCNAPI void OnCreatePermissionError(::cricket::StunMessage*, int);

    MCNAPI void OnCreatePermissionSuccess();

    MCNAPI void OnCreatePermissionTimeout();

    MCNAPI int Send(void const*, uint64, bool, ::rtc::PacketOptions const&);

    MCNAPI void SendChannelBindRequest(int);

    MCNAPI void SendCreatePermissionRequest(int);

    MCNAPI void TrackConnection(::cricket::Connection*);

    MCNAPI TurnEntry(::cricket::TurnPort*, ::cricket::Connection*, int);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> UntrackConnection(::cricket::Connection*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::TurnPort*, ::cricket::Connection*, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
