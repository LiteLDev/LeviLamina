#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoCodecType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class EncodedImage; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class TimeDelta; }
namespace webrtc { struct FrameDependencyStructure; }
namespace webrtc { struct RTPVideoHeader; }
namespace webrtc { struct VideoLayersAllocation; }
// clang-format on

namespace webrtc {

class RTPSenderVideo {
public:
    // RTPSenderVideo inner types declare
    // clang-format off
    struct Config;
    struct TemporalLayerStats;
    // clang-format on

    // RTPSenderVideo inner types define
    struct Config {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Config();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct TemporalLayerStats {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddRtpHeaderExtensions(::webrtc::RTPVideoHeader const&, bool, bool, ::webrtc::RtpPacketToSend*) const;

    MCNAPI bool AllowRetransmission(uchar, int, ::webrtc::TimeDelta);

    MCNAPI uint64 FecPacketOverhead() const;

    MCNAPI void LogAndSendToNetwork(::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>>, uint64);

    MCNAPI void MaybeUpdateCurrentPlayoutDelay(::webrtc::RTPVideoHeader const&);

    MCNAPI ::webrtc::DataRate PostEncodeOverhead() const;

    MCNAPI explicit RTPSenderVideo(::webrtc::RTPSenderVideo::Config const&);

    MCNAPI bool SendEncodedImage(
        int,
        ::std::optional<::webrtc::VideoCodecType>,
        uint,
        ::webrtc::EncodedImage const&,
        ::webrtc::RTPVideoHeader,
        ::webrtc::TimeDelta
    );

    MCNAPI void SetRetransmissionSetting(int);

    MCNAPI void SetVideoLayersAllocation(::webrtc::VideoLayersAllocation);

    MCNAPI void SetVideoLayersAllocationInternal(::webrtc::VideoLayersAllocation);

    MCNAPI void SetVideoStructure(::webrtc::FrameDependencyStructure const*);

    MCNAPI void SetVideoStructureInternal(::webrtc::FrameDependencyStructure const*);

    MCNAPI bool UpdateConditionalRetransmit(uchar, ::webrtc::TimeDelta);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uchar GetTemporalId(::webrtc::RTPVideoHeader const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::webrtc::TimeDelta const& kTLRateWindowSize();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RTPSenderVideo::Config const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
