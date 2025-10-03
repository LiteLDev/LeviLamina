#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/H264PacketizationMode.h"
#include "mc/external/webrtc/RtpPacketizer.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketToSend; }
// clang-format on

namespace webrtc {

class RtpPacketizerH264 : public ::webrtc::RtpPacketizer {
public:
    // RtpPacketizerH264 inner types declare
    // clang-format off
    struct PacketUnit;
    // clang-format on

    // RtpPacketizerH264 inner types define
    struct PacketUnit {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk88bdb2;
        ::ll::UntypedStorage<1, 1>  mUnkc014ea;
        ::ll::UntypedStorage<1, 1>  mUnk34776e;
        ::ll::UntypedStorage<1, 1>  mUnke2078c;
        ::ll::UntypedStorage<1, 1>  mUnk6e2157;
        // NOLINTEND

    public:
        // prevent constructor by default
        PacketUnit& operator=(PacketUnit const&);
        PacketUnit(PacketUnit const&);
        PacketUnit();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk24da15;
    ::ll::UntypedStorage<8, 8>  mUnk658d84;
    ::ll::UntypedStorage<8, 40> mUnke7c980;
    ::ll::UntypedStorage<8, 40> mUnk908fe9;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpPacketizerH264& operator=(RtpPacketizerH264 const&);
    RtpPacketizerH264(RtpPacketizerH264 const&);
    RtpPacketizerH264();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtpPacketizerH264() /*override*/;

    // vIndex: 1
    virtual uint64 NumPackets() const /*override*/;

    // vIndex: 2
    virtual bool NextPacket(::webrtc::RtpPacketToSend* rtp_packet) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool GeneratePackets(::webrtc::H264PacketizationMode packetization_mode);

    MCNAPI void NextAggregatePacket(::webrtc::RtpPacketToSend* rtp_packet);

    MCNAPI void NextFragmentPacket(::webrtc::RtpPacketToSend* rtp_packet);

    MCNAPI bool PacketizeFuA(uint64 fragment_index);

    MCNAPI bool PacketizeSingleNalu(uint64 fragment_index);

    MCNAPI uint64 PacketizeStapA(uint64 fragment_index);

    MCNAPI RtpPacketizerH264(
        ::rtc::ArrayView<uchar const>              payload,
        ::webrtc::RtpPacketizer::PayloadSizeLimits limits,
        ::webrtc::H264PacketizationMode            packetization_mode
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::rtc::ArrayView<uchar const>              payload,
        ::webrtc::RtpPacketizer::PayloadSizeLimits limits,
        ::webrtc::H264PacketizationMode            packetization_mode
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

    MCNAPI bool $NextPacket(::webrtc::RtpPacketToSend* rtp_packet);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
