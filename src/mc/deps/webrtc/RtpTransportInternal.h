#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { struct NetworkRoute; }
namespace rtc { struct PacketOptions; }
namespace webrtc { class RtpDemuxerCriteria; }
namespace webrtc { class RtpPacketSinkInterface; }
namespace webrtc { struct RtpExtension; }
// clang-format on

namespace webrtc {

class RtpTransportInternal {
public:
    // prevent constructor by default
    RtpTransportInternal& operator=(RtpTransportInternal const&);
    RtpTransportInternal(RtpTransportInternal const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RtpTransportInternal@webrtc@@UEAA@XZ
    virtual ~RtpTransportInternal();

    // vIndex: 1, symbol: ?SetRtcpMuxEnabled@DtlsSrtpTransport@webrtc@@UEAAX_N@Z
    virtual void SetRtcpMuxEnabled(bool) = 0;

    // vIndex: 2, symbol:
    // ?transport_name@RtpTransport@webrtc@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& transport_name() const = 0;

    // vIndex: 3, symbol: ?SetRtpOption@RtpTransport@webrtc@@UEAAHW4Option@Socket@rtc@@H@Z
    virtual int SetRtpOption(::rtc::Socket::Option, int) = 0;

    // vIndex: 4, symbol: ?SetRtcpOption@RtpTransport@webrtc@@UEAAHW4Option@Socket@rtc@@H@Z
    virtual int SetRtcpOption(::rtc::Socket::Option, int) = 0;

    // vIndex: 5, symbol: ?rtcp_mux_enabled@RtpTransport@webrtc@@UEBA_NXZ
    virtual bool rtcp_mux_enabled() const = 0;

    // vIndex: 6, symbol: ?IsReadyToSend@RtpTransport@webrtc@@UEBA_NXZ
    virtual bool IsReadyToSend() const = 0;

    // vIndex: 7, symbol: ?IsWritable@SrtpTransport@webrtc@@UEBA_N_N@Z
    virtual bool IsWritable(bool) const = 0;

    // vIndex: 8, symbol: ?SendRtpPacket@SrtpTransport@webrtc@@UEAA_NPEAVCopyOnWriteBuffer@rtc@@AEBUPacketOptions@4@H@Z
    virtual bool SendRtpPacket(class rtc::CopyOnWriteBuffer*, struct rtc::PacketOptions const&, int) = 0;

    // vIndex: 9, symbol: ?SendRtcpPacket@SrtpTransport@webrtc@@UEAA_NPEAVCopyOnWriteBuffer@rtc@@AEBUPacketOptions@4@H@Z
    virtual bool SendRtcpPacket(class rtc::CopyOnWriteBuffer*, struct rtc::PacketOptions const&, int) = 0;

    // vIndex: 10, symbol:
    // ?UpdateRtpHeaderExtensionMap@RtpTransport@webrtc@@UEAAXAEBV?$vector@URtpExtension@webrtc@@V?$allocator@URtpExtension@webrtc@@@std@@@std@@@Z
    virtual void UpdateRtpHeaderExtensionMap(std::vector<struct webrtc::RtpExtension> const&) = 0;

    // vIndex: 11, symbol: ?IsSrtpActive@SrtpTransport@webrtc@@UEBA_NXZ
    virtual bool IsSrtpActive() const = 0;

    // vIndex: 12, symbol:
    // ?RegisterRtpDemuxerSink@RtpTransport@webrtc@@UEAA_NAEBVRtpDemuxerCriteria@2@PEAVRtpPacketSinkInterface@2@@Z
    virtual bool
    RegisterRtpDemuxerSink(class webrtc::RtpDemuxerCriteria const&, class webrtc::RtpPacketSinkInterface*) = 0;

    // vIndex: 13, symbol: ?UnregisterRtpDemuxerSink@RtpTransport@webrtc@@UEAA_NPEAVRtpPacketSinkInterface@2@@Z
    virtual bool UnregisterRtpDemuxerSink(class webrtc::RtpPacketSinkInterface*) = 0;

    // vIndex: 14, symbol: ?OnNetworkRouteChanged@SrtpTransport@webrtc@@EEAAXV?$optional@UNetworkRoute@rtc@@@std@@@Z
    virtual void OnNetworkRouteChanged(std::optional<struct rtc::NetworkRoute>);

    // symbol: ??0RtpTransportInternal@webrtc@@QEAA@XZ
    MCAPI RtpTransportInternal();

    // NOLINTEND
};

}; // namespace webrtc
