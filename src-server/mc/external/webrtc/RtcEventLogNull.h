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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool StartLogging(::std::unique_ptr<::webrtc::RtcEventLogOutput>, int64) /*override*/;

    // vIndex: 3
    virtual void StopLogging() /*override*/;

    // vIndex: 4
    virtual void Log(::std::unique_ptr<::webrtc::RtcEvent> event) /*override*/;

    // vIndex: 0
    virtual ~RtcEventLogNull() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $StartLogging(::std::unique_ptr<::webrtc::RtcEventLogOutput>, int64);

    MCNAPI void $StopLogging();

    MCNAPI void $Log(::std::unique_ptr<::webrtc::RtcEvent> event);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
