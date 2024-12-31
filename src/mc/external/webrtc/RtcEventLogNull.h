#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtcEventLog.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtcEvent; }
namespace webrtc { class RtcEventLogOutput; }
// clang-format on

namespace webrtc {

class RtcEventLogNull : public ::webrtc::RtcEventLog {
public:
    // prevent constructor by default
    RtcEventLogNull& operator=(RtcEventLogNull const&);
    RtcEventLogNull(RtcEventLogNull const&);
    RtcEventLogNull();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool StartLogging(::std::unique_ptr<::webrtc::RtcEventLogOutput>, int64) /*override*/;

    // vIndex: 3
    virtual void StopLogging() /*override*/;

    // vIndex: 4
    virtual void Log(::std::unique_ptr<::webrtc::RtcEvent>) /*override*/;

    // vIndex: 0
    virtual ~RtcEventLogNull() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
