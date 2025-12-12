#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/InlinedVector.h"
#include "mc/external/webrtc/RtpPacketizer.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { struct RTPVideoHeaderVP8; }
// clang-format on

namespace webrtc {

class RtpPacketizerVp8 : public ::webrtc::RtpPacketizer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8d6496;
    ::ll::UntypedStorage<8, 16> mUnke6bb71;
    ::ll::UntypedStorage<8, 24> mUnke2066a;
    ::ll::UntypedStorage<8, 8>  mUnkd0225c;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpPacketizerVp8& operator=(RtpPacketizerVp8 const&);
    RtpPacketizerVp8(RtpPacketizerVp8 const&);
    RtpPacketizerVp8();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtpPacketizerVp8() /*override*/;

    // vIndex: 1
    virtual uint64 NumPackets() const /*override*/;

    // vIndex: 2
    virtual bool NextPacket(::webrtc::RtpPacketToSend* packet) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtpPacketizerVp8(
        ::rtc::ArrayView<uchar const>              payload,
        ::webrtc::RtpPacketizer::PayloadSizeLimits limits,
        ::webrtc::RTPVideoHeaderVP8 const&         hdr_info
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::absl::InlinedVector<uchar, 6, ::std::allocator<uchar>>
    BuildHeader(::webrtc::RTPVideoHeaderVP8 const& header);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::rtc::ArrayView<uchar const>              payload,
        ::webrtc::RtpPacketizer::PayloadSizeLimits limits,
        ::webrtc::RTPVideoHeaderVP8 const&         hdr_info
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
