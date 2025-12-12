#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class RTPExtensionType : int {
    KRtpExtensionNone                      = 0,
    KRtpExtensionTransmissionTimeOffset    = 1,
    KRtpExtensionAudioLevel                = 2,
    KRtpExtensionCsrcAudioLevel            = 3,
    KRtpExtensionInbandComfortNoise        = 4,
    KRtpExtensionAbsoluteSendTime          = 5,
    KRtpExtensionAbsoluteCaptureTime       = 6,
    KRtpExtensionVideoRotation             = 7,
    KRtpExtensionTransportSequenceNumber   = 8,
    KRtpExtensionTransportSequenceNumber02 = 9,
    KRtpExtensionPlayoutDelay              = 10,
    KRtpExtensionVideoContentType          = 11,
    KRtpExtensionVideoLayersAllocation     = 12,
    KRtpExtensionVideoTiming               = 13,
    KRtpExtensionRtpStreamId               = 14,
    KRtpExtensionRepairedRtpStreamId       = 15,
    KRtpExtensionMid                       = 16,
    KRtpExtensionGenericFrameDescriptor    = 17,
    KRtpExtensionGenericFrameDescriptor00  = 17,
    KRtpExtensionDependencyDescriptor      = 18,
    KRtpExtensionGenericFrameDescriptor02  = 18,
    KRtpExtensionColorSpace                = 19,
    KRtpExtensionVideoFrameTrackingId      = 20,
    KRtpExtensionNumberOfExtensions        = 21,
};

}
