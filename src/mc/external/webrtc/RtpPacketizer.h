#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoCodecType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { struct RTPVideoHeader; }
// clang-format on

namespace webrtc {

class RtpPacketizer {
public:
    // RtpPacketizer inner types declare
    // clang-format off
    struct PayloadSizeLimits;
    // clang-format on

    // RtpPacketizer inner types define
    struct PayloadSizeLimits {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkfd4fba;
        ::ll::UntypedStorage<4, 4> mUnkee9980;
        ::ll::UntypedStorage<4, 4> mUnk632476;
        ::ll::UntypedStorage<4, 4> mUnk97dacf;
        // NOLINTEND

    public:
        // prevent constructor by default
        PayloadSizeLimits& operator=(PayloadSizeLimits const&);
        PayloadSizeLimits(PayloadSizeLimits const&);
        PayloadSizeLimits();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtpPacketizer() = default;

    virtual uint64 NumPackets() const = 0;

    virtual bool NextPacket(::webrtc::RtpPacketToSend*) = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::webrtc::RtpPacketizer> Create(
        ::std::optional<::webrtc::VideoCodecType>  type,
        ::rtc::ArrayView<uchar const>              payload,
        ::webrtc::RtpPacketizer::PayloadSizeLimits limits,
        ::webrtc::RTPVideoHeader const&            rtp_video_header
    );

    MCNAPI static ::std::vector<int>
    SplitAboutEqually(int payload_len, ::webrtc::RtpPacketizer::PayloadSizeLimits const& limits);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
