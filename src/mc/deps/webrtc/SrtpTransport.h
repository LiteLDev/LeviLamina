#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtpTransport.h"
#include "mc/deps/webrtc/rtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct CryptoParams; }
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class PacketTransportInternal; }
namespace rtc { struct NetworkRoute; }
namespace rtc { struct PacketOptions; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class RTCError; }
namespace webrtc { class RtpDemuxerCriteria; }
namespace webrtc { class RtpPacketSinkInterface; }
namespace webrtc { class RtpTransport; }
namespace webrtc { struct RtpExtension; }
// clang-format on

namespace webrtc {

class SrtpTransport : public ::webrtc::RtpTransport {
public:
    // prevent constructor by default
    SrtpTransport& operator=(SrtpTransport const&);
    SrtpTransport(SrtpTransport const&);
    SrtpTransport();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SrtpTransport@webrtc@@UEAA@XZ
    virtual ~SrtpTransport();

    // vIndex: 7, symbol: ?IsWritable@SrtpTransport@webrtc@@UEBA_N_N@Z
    virtual bool IsWritable(bool) const;

    // vIndex: 8, symbol: ?SendRtpPacket@SrtpTransport@webrtc@@UEAA_NPEAVCopyOnWriteBuffer@rtc@@AEBUPacketOptions@4@H@Z
    virtual bool SendRtpPacket(class rtc::CopyOnWriteBuffer*, struct rtc::PacketOptions const&, int);

    // vIndex: 9, symbol: ?SendRtcpPacket@SrtpTransport@webrtc@@UEAA_NPEAVCopyOnWriteBuffer@rtc@@AEBUPacketOptions@4@H@Z
    virtual bool SendRtcpPacket(class rtc::CopyOnWriteBuffer*, struct rtc::PacketOptions const&, int);

    // vIndex: 11, symbol: ?IsSrtpActive@SrtpTransport@webrtc@@UEBA_NXZ
    virtual bool IsSrtpActive() const;

    // vIndex: 14, symbol: ?OnNetworkRouteChanged@SrtpTransport@webrtc@@EEAAXV?$optional@UNetworkRoute@rtc@@@std@@@Z
    virtual void OnNetworkRouteChanged(std::optional<struct rtc::NetworkRoute>);

    // vIndex: 15, symbol: ?OnRtpPacketReceived@SrtpTransport@webrtc@@EEAAXVCopyOnWriteBuffer@rtc@@_J@Z
    virtual void OnRtpPacketReceived(class rtc::CopyOnWriteBuffer, int64);

    // vIndex: 16, symbol: ?OnRtcpPacketReceived@SrtpTransport@webrtc@@EEAAXVCopyOnWriteBuffer@rtc@@_J@Z
    virtual void OnRtcpPacketReceived(class rtc::CopyOnWriteBuffer, int64);

    // vIndex: 17, symbol: ?OnWritableState@SrtpTransport@webrtc@@EEAAXPEAVPacketTransportInternal@rtc@@@Z
    virtual void OnWritableState(class rtc::PacketTransportInternal*);

    // vIndex: 18, symbol: ?SetSrtpSendKey@SrtpTransport@webrtc@@UEAA?AVRTCError@2@AEBUCryptoParams@cricket@@@Z
    virtual class webrtc::RTCError SetSrtpSendKey(struct cricket::CryptoParams const&);

    // vIndex: 19, symbol: ?SetSrtpReceiveKey@SrtpTransport@webrtc@@UEAA?AVRTCError@2@AEBUCryptoParams@cricket@@@Z
    virtual class webrtc::RTCError SetSrtpReceiveKey(struct cricket::CryptoParams const&);

    // symbol: ?EnableExternalAuth@SrtpTransport@webrtc@@QEAAXXZ
    MCAPI void EnableExternalAuth();

    // symbol: ?GetSrtpOverhead@SrtpTransport@webrtc@@QEBA_NPEAH@Z
    MCAPI bool GetSrtpOverhead(int*) const;

    // symbol: ?ResetParams@SrtpTransport@webrtc@@QEAAXXZ
    MCAPI void ResetParams();

    // symbol: ?SetRtcpParams@SrtpTransport@webrtc@@QEAA_NHPEBEHAEBV?$vector@HV?$allocator@H@std@@@std@@H0H1@Z
    MCAPI bool
    SetRtcpParams(int, uchar const*, int, std::vector<int> const&, int, uchar const*, int, std::vector<int> const&);

    // symbol: ?SetRtpParams@SrtpTransport@webrtc@@QEAA_NHPEBEHAEBV?$vector@HV?$allocator@H@std@@@std@@H0H1@Z
    MCAPI bool
    SetRtpParams(int, uchar const*, int, std::vector<int> const&, int, uchar const*, int, std::vector<int> const&);

    // symbol: ??0SrtpTransport@webrtc@@QEAA@_NAEBVFieldTrialsView@1@@Z
    MCAPI SrtpTransport(bool, class webrtc::FieldTrialsView const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?MaybeUpdateWritableState@SrtpTransport@webrtc@@IEAAXXZ
    MCAPI void MaybeUpdateWritableState();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?CreateSrtpSessions@SrtpTransport@webrtc@@AEAAXXZ
    MCAPI void CreateSrtpSessions();

    // symbol: ?MaybeSetKeyParams@SrtpTransport@webrtc@@AEAA_NXZ
    MCAPI bool MaybeSetKeyParams();

    // symbol:
    // ?ParseKeyParams@SrtpTransport@webrtc@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAE_K@Z
    MCAPI bool ParseKeyParams(std::string const&, uchar*, uint64);

    // symbol: ?ProtectRtcp@SrtpTransport@webrtc@@AEAA_NPEAXHHPEAH@Z
    MCAPI bool ProtectRtcp(void*, int, int, int*);

    // symbol: ?ProtectRtp@SrtpTransport@webrtc@@AEAA_NPEAXHHPEAH@Z
    MCAPI bool ProtectRtp(void*, int, int, int*);

    // symbol: ?UnprotectRtcp@SrtpTransport@webrtc@@AEAA_NPEAXHPEAH@Z
    MCAPI bool UnprotectRtcp(void*, int, int*);

    // symbol: ?UnprotectRtp@SrtpTransport@webrtc@@AEAA_NPEAXHPEAH@Z
    MCAPI bool UnprotectRtp(void*, int, int*);

    // NOLINTEND
};

}; // namespace webrtc
