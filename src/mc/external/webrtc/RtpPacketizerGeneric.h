#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpPacketizer.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { struct RTPVideoHeader; }
// clang-format on

namespace webrtc {

class RtpPacketizerGeneric : public ::webrtc::RtpPacketizer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 3>  mUnkd34563;
    ::ll::UntypedStorage<8, 8>  mUnk2ba69c;
    ::ll::UntypedStorage<8, 16> mUnk2ea1a6;
    ::ll::UntypedStorage<8, 24> mUnkf556a0;
    ::ll::UntypedStorage<8, 8>  mUnkdfa7c8;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpPacketizerGeneric& operator=(RtpPacketizerGeneric const&);
    RtpPacketizerGeneric(RtpPacketizerGeneric const&);
    RtpPacketizerGeneric();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtpPacketizerGeneric() /*override*/;

    virtual uint64 NumPackets() const /*override*/;

    virtual bool NextPacket(::webrtc::RtpPacketToSend* packet) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void BuildHeader(::webrtc::RTPVideoHeader const& rtp_video_header);

    MCNAPI
    RtpPacketizerGeneric(::rtc::ArrayView<uchar const> payload, ::webrtc::RtpPacketizer::PayloadSizeLimits limits);

    MCNAPI RtpPacketizerGeneric(
        ::rtc::ArrayView<uchar const>              payload,
        ::webrtc::RtpPacketizer::PayloadSizeLimits limits,
        ::webrtc::RTPVideoHeader const&            rtp_video_header
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::ArrayView<uchar const> payload, ::webrtc::RtpPacketizer::PayloadSizeLimits limits);

    MCNAPI void* $ctor(
        ::rtc::ArrayView<uchar const>              payload,
        ::webrtc::RtpPacketizer::PayloadSizeLimits limits,
        ::webrtc::RTPVideoHeader const&            rtp_video_header
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint64 $NumPackets() const;

    MCNAPI bool $NextPacket(::webrtc::RtpPacketToSend* packet);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
