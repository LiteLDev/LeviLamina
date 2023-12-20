#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/scoped_refptr.h"

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
    TurnEntry& operator=(TurnEntry const&);
    TurnEntry(TurnEntry const&);
    TurnEntry();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TurnEntry@cricket@@UEAA@XZ
    virtual ~TurnEntry();

    // symbol: ?OnChannelBindError@TurnEntry@cricket@@QEAAXPEAVStunMessage@2@H@Z
    MCAPI void OnChannelBindError(class cricket::StunMessage*, int);

    // symbol: ?OnChannelBindSuccess@TurnEntry@cricket@@QEAAXXZ
    MCAPI void OnChannelBindSuccess();

    // symbol: ?OnChannelBindTimeout@TurnEntry@cricket@@QEAAXXZ
    MCAPI void OnChannelBindTimeout();

    // symbol: ?OnCreatePermissionError@TurnEntry@cricket@@QEAAXPEAVStunMessage@2@H@Z
    MCAPI void OnCreatePermissionError(class cricket::StunMessage*, int);

    // symbol: ?OnCreatePermissionSuccess@TurnEntry@cricket@@QEAAXXZ
    MCAPI void OnCreatePermissionSuccess();

    // symbol: ?OnCreatePermissionTimeout@TurnEntry@cricket@@QEAAXXZ
    MCAPI void OnCreatePermissionTimeout();

    // symbol: ?Send@TurnEntry@cricket@@QEAAHPEBX_K_NAEBUPacketOptions@rtc@@@Z
    MCAPI int Send(void const*, uint64, bool, struct rtc::PacketOptions const&);

    // symbol: ?SendChannelBindRequest@TurnEntry@cricket@@QEAAXH@Z
    MCAPI void SendChannelBindRequest(int);

    // symbol: ?SendCreatePermissionRequest@TurnEntry@cricket@@QEAAXH@Z
    MCAPI void SendCreatePermissionRequest(int);

    // symbol: ?TrackConnection@TurnEntry@cricket@@QEAAXPEAVConnection@2@@Z
    MCAPI void TrackConnection(class cricket::Connection*);

    // symbol: ??0TurnEntry@cricket@@QEAA@PEAVTurnPort@1@PEAVConnection@1@H@Z
    MCAPI TurnEntry(class cricket::TurnPort*, class cricket::Connection*, int);

    // symbol:
    // ?UntrackConnection@TurnEntry@cricket@@QEAA?AV?$scoped_refptr@VPendingTaskSafetyFlag@webrtc@@@rtc@@PEAVConnection@2@@Z
    MCAPI class rtc::scoped_refptr<class webrtc::PendingTaskSafetyFlag> UntrackConnection(class cricket::Connection*);

    // NOLINTEND
};

}; // namespace cricket
