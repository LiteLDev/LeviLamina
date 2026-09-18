#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SignalServiceConnectStage : int {
    ConnectStageInit               = 0,
    ConnectStageWebSocket          = 1,
    ConnectStageAuth               = 2,
    ConnectStageRelayConfig        = 3,
    Disconnect                     = 4,
    ConnectionLost                 = 5,
    EventWebSocketMessageSent      = 6,
    EventLanMessageSent            = 7,
    EventWebRtcMessageReceived     = 8,
    EventLanMessageReceived        = 9,
    DeprecateEventUnknown          = 10,
    EventPingSent                  = 11,
    EventWebSocketMessageAccepted  = 12,
    EventWebSocketMessageDelivered = 13,
    EventWebSocketMessageError     = 14,
    EventWebRtcMessageIgnored      = 15,
    EventJsonRpcReceived           = 16,
    EventJsonRpcSent               = 17,
    EventUnknown                   = 999,
};
