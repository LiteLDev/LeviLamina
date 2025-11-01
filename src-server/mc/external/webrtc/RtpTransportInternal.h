#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/Socket.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { struct PacketOptions; }
namespace webrtc { class RtpDemuxerCriteria; }
namespace webrtc { class RtpPacketSinkInterface; }
namespace webrtc { struct RtpExtension; }
// clang-format on

namespace webrtc {

class RtpTransportInternal : public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3ed5db;
    ::ll::UntypedStorage<8, 32> mUnk3b44e7;
    ::ll::UntypedStorage<8, 32> mUnke96161;
    ::ll::UntypedStorage<8, 32> mUnk2ddd2d;
    ::ll::UntypedStorage<8, 32> mUnk26d9e7;
    ::ll::UntypedStorage<8, 32> mUnk640107;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpTransportInternal& operator=(RtpTransportInternal const&);
    RtpTransportInternal(RtpTransportInternal const&);
    RtpTransportInternal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtpTransportInternal() /*override*/;

    // vIndex: 1
    virtual void SetRtcpMuxEnabled(bool) = 0;

    // vIndex: 2
    virtual ::std::string const& transport_name() const = 0;

    // vIndex: 3
    virtual int SetRtpOption(::rtc::Socket::Option, int) = 0;

    // vIndex: 4
    virtual int SetRtcpOption(::rtc::Socket::Option, int) = 0;

    // vIndex: 5
    virtual bool rtcp_mux_enabled() const = 0;

    // vIndex: 6
    virtual bool IsReadyToSend() const = 0;

    // vIndex: 7
    virtual bool IsWritable(bool) const = 0;

    // vIndex: 8
    virtual bool SendRtpPacket(::rtc::CopyOnWriteBuffer*, ::rtc::PacketOptions const&, int) = 0;

    // vIndex: 9
    virtual bool SendRtcpPacket(::rtc::CopyOnWriteBuffer*, ::rtc::PacketOptions const&, int) = 0;

    // vIndex: 10
    virtual void UpdateRtpHeaderExtensionMap(::std::vector<::webrtc::RtpExtension> const&) = 0;

    // vIndex: 11
    virtual bool IsSrtpActive() const = 0;

    // vIndex: 12
    virtual bool RegisterRtpDemuxerSink(::webrtc::RtpDemuxerCriteria const&, ::webrtc::RtpPacketSinkInterface*) = 0;

    // vIndex: 13
    virtual bool UnregisterRtpDemuxerSink(::webrtc::RtpPacketSinkInterface*) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
