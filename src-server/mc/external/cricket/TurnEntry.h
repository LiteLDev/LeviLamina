#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"
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

class TurnEntry : public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // TurnEntry inner types define
    enum class BindState : int {
        Unbound = 0,
        Binding = 1,
        Bound   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk867c01;
    ::ll::UntypedStorage<8, 8>  mUnk66a73a;
    ::ll::UntypedStorage<4, 4>  mUnk9f1139;
    ::ll::UntypedStorage<8, 80> mUnk671904;
    ::ll::UntypedStorage<4, 4>  mUnkae7e22;
    ::ll::UntypedStorage<8, 24> mUnkdb6095;
    ::ll::UntypedStorage<8, 8>  mUnkf7eaf5;
    // NOLINTEND

public:
    // prevent constructor by default
    TurnEntry& operator=(TurnEntry const&);
    TurnEntry(TurnEntry const&);
    TurnEntry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TurnEntry() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void OnChannelBindError(::cricket::StunMessage* response, int code);

    MCNAPI void OnChannelBindSuccess();

    MCNAPI void OnChannelBindTimeout();

    MCNAPI void OnCreatePermissionError(::cricket::StunMessage* response, int code);

    MCNAPI void OnCreatePermissionSuccess();

    MCNAPI void OnCreatePermissionTimeout();

    MCNAPI int Send(void const* data, uint64 size, bool payload, ::rtc::PacketOptions const& options);

    MCNAPI void SendChannelBindRequest(int delay);

    MCNAPI void SendCreatePermissionRequest(int delay);

    MCNAPI void TrackConnection(::cricket::Connection* conn);

    MCNAPI TurnEntry(::cricket::TurnPort* port, ::cricket::Connection* conn, int channel_id);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> UntrackConnection(::cricket::Connection* conn);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::TurnPort* port, ::cricket::Connection* conn, int channel_id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
