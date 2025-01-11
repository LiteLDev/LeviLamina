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
    // clang-format on

    // RTPSenderVideo inner types define
    struct Config {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Config();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddRtpHeaderExtensions(::webrtc::RTPVideoHeader const&, bool, bool, ::webrtc::RtpPacketToSend*) const;

    MCAPI bool AllowRetransmission(uchar, int, ::webrtc::TimeDelta);

    MCAPI uint64 FecPacketOverhead() const;

    MCAPI void LogAndSendToNetwork(::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>>, uint64);

    MCAPI void MaybeUpdateCurrentPlayoutDelay(::webrtc::RTPVideoHeader const&);

    MCAPI ::webrtc::DataRate PostEncodeOverhead() const;

    MCAPI explicit RTPSenderVideo(::webrtc::RTPSenderVideo::Config const&);

    MCAPI bool SendEncodedImage(
        int,
        ::std::optional<::webrtc::VideoCodecType>,
        uint,
        ::webrtc::EncodedImage const&,
        ::webrtc::RTPVideoHeader,
        ::webrtc::TimeDelta
    );

    MCAPI void SetRetransmissionSetting(int);

    MCAPI void SetVideoLayersAllocation(::webrtc::VideoLayersAllocation);

    MCAPI void SetVideoLayersAllocationInternal(::webrtc::VideoLayersAllocation);

    MCAPI void SetVideoStructure(::webrtc::FrameDependencyStructure const*);

    MCAPI void SetVideoStructureInternal(::webrtc::FrameDependencyStructure const*);

    MCAPI bool UpdateConditionalRetransmit(uchar, ::webrtc::TimeDelta);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static uchar GetTemporalId(::webrtc::RTPVideoHeader const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::webrtc::TimeDelta const& kTLRateWindowSize();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::RTPSenderVideo::Config const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
