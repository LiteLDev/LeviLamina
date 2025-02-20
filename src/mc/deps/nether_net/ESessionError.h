#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

enum class ESessionError : int {
    ESessionErrorNone                                       = 0,
    ESessionErrorDestinationNotLoggedIn                     = 1,
    ESessionErrorNegotiationTimeout                         = 2,
    ESessionErrorWrongTransportVersion                      = 3,
    ESessionErrorFailedToCreatePeerConnection               = 4,
    ESessionErrorICE                                        = 5,
    ESessionErrorConnectRequest                             = 6,
    ESessionErrorConnectResponse                            = 7,
    ESessionErrorCandidateAdd                               = 8,
    ESessionErrorInactivityTimeout                          = 9,
    ESessionErrorFailedToCreateOffer                        = 10,
    ESessionErrorFailedToCreateAnswer                       = 11,
    ESessionErrorFailedToSetLocalDescription                = 12,
    ESessionErrorFailedToSetRemoteDescription               = 13,
    ESessionErrorNegotiationTimeoutWaitingForResponse       = 14,
    ESessionErrorNegotiationTimeoutWaitingForAccept         = 15,
    ESessionErrorIncomingConnectionIgnored                  = 16,
    ESessionErrorSignalingParsingFailure                    = 17,
    ESessionErrorSignalingUnknownError                      = 18,
    ESessionErrorSignalingUnicastMessageDeliveryFailed      = 19,
    ESessionErrorSignalingBroadcastDeliveryFailed           = 20,
    ESessionErrorSignalingMessageDeliveryFailed             = 21,
    ESessionErrorSignalingTurnAuthFailed                    = 22,
    ESessionErrorSignalingFallbackToBestEffortDelivery      = 23,
    ESessionErrorNoSignalingChannel                         = 24,
    ESessionErrorNotLoggedIn                                = 25,
    ESessionErrorSignalingFailedToSend                      = 26,
    ERelayServerConfigurationResultFailure                  = 27,
    ERelayServerConfigurationResultParsingErrorNoUrls       = 28,
    ERelayServerConfigurationResultParsingErrorNoCreds      = 29,
    ERelayServerConfigurationResultParsingErrorNoServers    = 30,
    ERelayServerConfigurationResultParsingErrorNoExpiration = 31,
};

}
