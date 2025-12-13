#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpPacketizer.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { struct RTPVideoHeaderVP9; }
// clang-format on

namespace webrtc {

class RtpPacketizerVp9 : public ::webrtc::RtpPacketizer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1640> mUnk9addc6;
    ::ll::UntypedStorage<4, 4>    mUnkecb493;
    ::ll::UntypedStorage<4, 4>    mUnk5e2fc6;
    ::ll::UntypedStorage<8, 16>   mUnkc19163;
    ::ll::UntypedStorage<8, 24>   mUnka558b0;
    ::ll::UntypedStorage<8, 8>    mUnka9b7da;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpPacketizerVp9& operator=(RtpPacketizerVp9 const&);
    RtpPacketizerVp9(RtpPacketizerVp9 const&);
    RtpPacketizerVp9();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtpPacketizerVp9() /*override*/;

    virtual uint64 NumPackets() const /*override*/;

    virtual bool NextPacket(::webrtc::RtpPacketToSend* packet) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtpPacketizerVp9(
        ::rtc::ArrayView<uchar const>              payload,
        ::webrtc::RtpPacketizer::PayloadSizeLimits limits,
        ::webrtc::RTPVideoHeaderVP9 const&         hdr
    );

    MCNAPI bool WriteHeader(bool layer_begin, bool layer_end, ::rtc::ArrayView<uchar> buffer) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::rtc::ArrayView<uchar const>              payload,
        ::webrtc::RtpPacketizer::PayloadSizeLimits limits,
        ::webrtc::RTPVideoHeaderVP9 const&         hdr
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
