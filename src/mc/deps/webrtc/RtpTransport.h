#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtpTransportInternal.h"
#include "mc/deps/webrtc/detail/Socket.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct CryptoParams; }
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class PacketTransportInternal; }
namespace rtc { struct NetworkRoute; }
namespace rtc { struct PacketOptions; }
namespace rtc { struct SentPacket; }
namespace webrtc { class RTCError; }
namespace webrtc { class RtpDemuxerCriteria; }
namespace webrtc { class RtpPacketSinkInterface; }
namespace webrtc { class RtpTransportInternal; }
namespace webrtc { struct RtpExtension; }
// clang-format on

namespace webrtc {

class RtpTransport : public ::webrtc::RtpTransportInternal {
public:
    // prevent constructor by default
    RtpTransport& operator=(RtpTransport const&);
    RtpTransport(RtpTransport const&);
    RtpTransport();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RtpTransport@webrtc@@UEAA@XZ
    virtual ~RtpTransport();

    // vIndex: 1, symbol: ?SetRtcpMuxEnabled@RtpTransport@webrtc@@UEAAX_N@Z
    virtual void SetRtcpMuxEnabled(bool);

    // vIndex: 2, symbol:
    // ?transport_name@RtpTransport@webrtc@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& transport_name() const;

    // vIndex: 3, symbol: ?SetRtpOption@RtpTransport@webrtc@@UEAAHW4Option@Socket@rtc@@H@Z
    virtual int SetRtpOption(::rtc::Socket::Option, int);

    // vIndex: 4, symbol: ?SetRtcpOption@RtpTransport@webrtc@@UEAAHW4Option@Socket@rtc@@H@Z
    virtual int SetRtcpOption(::rtc::Socket::Option, int);

    // vIndex: 5, symbol: ?rtcp_mux_enabled@RtpTransport@webrtc@@UEBA_NXZ
    virtual bool rtcp_mux_enabled() const;

    // vIndex: 6, symbol: ?IsReadyToSend@RtpTransport@webrtc@@UEBA_NXZ
    virtual bool IsReadyToSend() const;

    // vIndex: 7, symbol: ?IsWritable@RtpTransport@webrtc@@UEBA_N_N@Z
    virtual bool IsWritable(bool) const;

    // vIndex: 8, symbol: ?SendRtpPacket@RtpTransport@webrtc@@UEAA_NPEAVCopyOnWriteBuffer@rtc@@AEBUPacketOptions@4@H@Z
    virtual bool SendRtpPacket(class rtc::CopyOnWriteBuffer*, struct rtc::PacketOptions const&, int);

    // vIndex: 9, symbol: ?SendRtcpPacket@RtpTransport@webrtc@@UEAA_NPEAVCopyOnWriteBuffer@rtc@@AEBUPacketOptions@4@H@Z
    virtual bool SendRtcpPacket(class rtc::CopyOnWriteBuffer*, struct rtc::PacketOptions const&, int);

    // vIndex: 10, symbol:
    // ?UpdateRtpHeaderExtensionMap@RtpTransport@webrtc@@UEAAXAEBV?$vector@URtpExtension@webrtc@@V?$allocator@URtpExtension@webrtc@@@std@@@std@@@Z
    virtual void UpdateRtpHeaderExtensionMap(std::vector<struct webrtc::RtpExtension> const&);

    // vIndex: 11, symbol: ?IsSrtpActive@RtpTransport@webrtc@@UEBA_NXZ
    virtual bool IsSrtpActive() const;

    // vIndex: 12, symbol:
    // ?RegisterRtpDemuxerSink@RtpTransport@webrtc@@UEAA_NAEBVRtpDemuxerCriteria@2@PEAVRtpPacketSinkInterface@2@@Z
    virtual bool RegisterRtpDemuxerSink(class webrtc::RtpDemuxerCriteria const&, class webrtc::RtpPacketSinkInterface*);

    // vIndex: 13, symbol: ?UnregisterRtpDemuxerSink@RtpTransport@webrtc@@UEAA_NPEAVRtpPacketSinkInterface@2@@Z
    virtual bool UnregisterRtpDemuxerSink(class webrtc::RtpPacketSinkInterface*);

    // vIndex: 14, symbol: ?OnNetworkRouteChanged@RtpTransport@webrtc@@MEAAXV?$optional@UNetworkRoute@rtc@@@std@@@Z
    virtual void OnNetworkRouteChanged(std::optional<struct rtc::NetworkRoute>);

    // vIndex: 15, symbol: ?OnRtpPacketReceived@RtpTransport@webrtc@@MEAAXVCopyOnWriteBuffer@rtc@@_J@Z
    virtual void OnRtpPacketReceived(class rtc::CopyOnWriteBuffer, int64);

    // vIndex: 16, symbol: ?OnRtcpPacketReceived@RtpTransport@webrtc@@MEAAXVCopyOnWriteBuffer@rtc@@_J@Z
    virtual void OnRtcpPacketReceived(class rtc::CopyOnWriteBuffer, int64);

    // vIndex: 17, symbol: ?OnWritableState@RtpTransport@webrtc@@MEAAXPEAVPacketTransportInternal@rtc@@@Z
    virtual void OnWritableState(class rtc::PacketTransportInternal*);

    // vIndex: 18, symbol: ?SetSrtpSendKey@SrtpTransport@webrtc@@UEAA?AVRTCError@2@AEBUCryptoParams@cricket@@@Z
    virtual class webrtc::RTCError SetSrtpSendKey(struct cricket::CryptoParams const&);

    // symbol: ?SetRtcpPacketTransport@RtpTransport@webrtc@@QEAAXPEAVPacketTransportInternal@rtc@@@Z
    MCAPI void SetRtcpPacketTransport(class rtc::PacketTransportInternal*);

    // symbol: ?SetRtpPacketTransport@RtpTransport@webrtc@@QEAAXPEAVPacketTransportInternal@rtc@@@Z
    MCAPI void SetRtpPacketTransport(class rtc::PacketTransportInternal*);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?DemuxPacket@RtpTransport@webrtc@@IEAAXVCopyOnWriteBuffer@rtc@@_J@Z
    MCAPI void DemuxPacket(class rtc::CopyOnWriteBuffer, int64);

    // symbol: ?SendPacket@RtpTransport@webrtc@@IEAA_N_NPEAVCopyOnWriteBuffer@rtc@@AEBUPacketOptions@4@H@Z
    MCAPI bool SendPacket(bool, class rtc::CopyOnWriteBuffer*, struct rtc::PacketOptions const&, int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?IsTransportWritable@RtpTransport@webrtc@@AEAA_NXZ
    MCAPI bool IsTransportWritable();

    // symbol: ?MaybeSignalReadyToSend@RtpTransport@webrtc@@AEAAXXZ
    MCAPI void MaybeSignalReadyToSend();

    // symbol: ?OnReadPacket@RtpTransport@webrtc@@AEAAXPEAVPacketTransportInternal@rtc@@PEBD_KAEB_JH@Z
    MCAPI void OnReadPacket(class rtc::PacketTransportInternal*, char const*, uint64, int64 const&, int);

    // symbol: ?OnReadyToSend@RtpTransport@webrtc@@AEAAXPEAVPacketTransportInternal@rtc@@@Z
    MCAPI void OnReadyToSend(class rtc::PacketTransportInternal*);

    // symbol: ?OnSentPacket@RtpTransport@webrtc@@AEAAXPEAVPacketTransportInternal@rtc@@AEBUSentPacket@4@@Z
    MCAPI void OnSentPacket(class rtc::PacketTransportInternal*, struct rtc::SentPacket const&);

    // symbol: ?SetReadyToSend@RtpTransport@webrtc@@AEAAX_N0@Z
    MCAPI void SetReadyToSend(bool, bool);

    // NOLINTEND
};

}; // namespace webrtc
