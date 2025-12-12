#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpPacketizer.h"
#include "mc/external/webrtc/VideoFrameType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketToSend; }
// clang-format on

namespace webrtc {

class RtpPacketizerAv1 : public ::webrtc::RtpPacketizer {
public:
    // RtpPacketizerAv1 inner types declare
    // clang-format off
    struct Obu;
    struct Packet;
    // clang-format on

    // RtpPacketizerAv1 inner types define
    struct Obu {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnk460320;
        ::ll::UntypedStorage<1, 1>  mUnk22da0a;
        ::ll::UntypedStorage<8, 16> mUnka91bd0;
        ::ll::UntypedStorage<4, 4>  mUnk7a6ef0;
        // NOLINTEND

    public:
        // prevent constructor by default
        Obu& operator=(Obu const&);
        Obu(Obu const&);
        Obu();
    };

    struct Packet {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk6bbb8f;
        ::ll::UntypedStorage<4, 4> mUnkee8d66;
        ::ll::UntypedStorage<4, 4> mUnk90820a;
        ::ll::UntypedStorage<4, 4> mUnkd5f48a;
        ::ll::UntypedStorage<4, 4> mUnkb3aebb;
        // NOLINTEND

    public:
        // prevent constructor by default
        Packet& operator=(Packet const&);
        Packet(Packet const&);
        Packet();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk93cdff;
    ::ll::UntypedStorage<8, 24> mUnkc1d14e;
    ::ll::UntypedStorage<8, 24> mUnk8482f1;
    ::ll::UntypedStorage<1, 1>  mUnk538772;
    ::ll::UntypedStorage<8, 8>  mUnkb9ffe7;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpPacketizerAv1& operator=(RtpPacketizerAv1 const&);
    RtpPacketizerAv1(RtpPacketizerAv1 const&);
    RtpPacketizerAv1();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtpPacketizerAv1() /*override*/ = default;

    virtual uint64 NumPackets() const /*override*/;

    virtual bool NextPacket(::webrtc::RtpPacketToSend* packet) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uchar AggregationHeader() const;

    MCNAPI RtpPacketizerAv1(
        ::rtc::ArrayView<uchar const>              payload,
        ::webrtc::RtpPacketizer::PayloadSizeLimits limits,
        ::webrtc::VideoFrameType                   frame_type,
        bool                                       is_last_frame_in_picture
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int AdditionalBytesForPreviousObuElement(::webrtc::RtpPacketizerAv1::Packet const& packet);

    MCNAPI static ::std::vector<::webrtc::RtpPacketizerAv1::Packet> Packetize(
        ::rtc::ArrayView<::webrtc::RtpPacketizerAv1::Obu const> obus,
        ::webrtc::RtpPacketizer::PayloadSizeLimits              limits
    );

    MCNAPI static ::std::vector<::webrtc::RtpPacketizerAv1::Obu> ParseObus(::rtc::ArrayView<uchar const> payload);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::rtc::ArrayView<uchar const>              payload,
        ::webrtc::RtpPacketizer::PayloadSizeLimits limits,
        ::webrtc::VideoFrameType                   frame_type,
        bool                                       is_last_frame_in_picture
    );
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
