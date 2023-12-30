#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/DtlsTransportState.h"
#include "mc/deps/webrtc/SrtpTransport.h"
#include "mc/deps/webrtc/rtc/BufferT.h"
#include "mc/deps/webrtc/rtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class DtlsTransportInternal; }
namespace cricket { struct CryptoParams; }
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class PacketTransportInternal; }
namespace rtc { struct NetworkRoute; }
namespace rtc { struct PacketOptions; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class RTCError; }
namespace webrtc { class RtpDemuxerCriteria; }
namespace webrtc { class RtpPacketSinkInterface; }
namespace webrtc { class SrtpTransport; }
namespace webrtc { struct RtpExtension; }
// clang-format on

namespace webrtc {

class DtlsSrtpTransport : public ::webrtc::SrtpTransport {
public:
    // prevent constructor by default
    DtlsSrtpTransport& operator=(DtlsSrtpTransport const&);
    DtlsSrtpTransport(DtlsSrtpTransport const&);
    DtlsSrtpTransport();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DtlsSrtpTransport@webrtc@@UEAA@XZ
    virtual ~DtlsSrtpTransport() = default;

    // vIndex: 1, symbol: ?SetRtcpMuxEnabled@DtlsSrtpTransport@webrtc@@UEAAX_N@Z
    virtual void SetRtcpMuxEnabled(bool);

    // vIndex: 17, symbol: ?OnWritableState@DtlsSrtpTransport@webrtc@@EEAAXPEAVPacketTransportInternal@rtc@@@Z
    virtual void OnWritableState(class rtc::PacketTransportInternal*);

    // vIndex: 18, symbol: ?SetSrtpSendKey@DtlsSrtpTransport@webrtc@@UEAA?AVRTCError@2@AEBUCryptoParams@cricket@@@Z
    virtual class webrtc::RTCError SetSrtpSendKey(struct cricket::CryptoParams const&);

    // vIndex: 19, symbol: ?SetSrtpReceiveKey@DtlsSrtpTransport@webrtc@@UEAA?AVRTCError@2@AEBUCryptoParams@cricket@@@Z
    virtual class webrtc::RTCError SetSrtpReceiveKey(struct cricket::CryptoParams const&);

    // symbol: ??0DtlsSrtpTransport@webrtc@@QEAA@_NAEBVFieldTrialsView@1@@Z
    MCAPI DtlsSrtpTransport(bool, class webrtc::FieldTrialsView const&);

    // symbol: ?SetDtlsTransports@DtlsSrtpTransport@webrtc@@QEAAXPEAVDtlsTransportInternal@cricket@@0@Z
    MCAPI void SetDtlsTransports(class cricket::DtlsTransportInternal*, class cricket::DtlsTransportInternal*);

    // symbol: ?SetOnDtlsStateChange@DtlsSrtpTransport@webrtc@@QEAAXV?$function@$$A6AXXZ@std@@@Z
    MCAPI void SetOnDtlsStateChange(std::function<void(void)>);

    // symbol:
    // ?UpdateRecvEncryptedHeaderExtensionIds@DtlsSrtpTransport@webrtc@@QEAAXAEBV?$vector@HV?$allocator@H@std@@@std@@@Z
    MCAPI void UpdateRecvEncryptedHeaderExtensionIds(std::vector<int> const&);

    // symbol:
    // ?UpdateSendEncryptedHeaderExtensionIds@DtlsSrtpTransport@webrtc@@QEAAXAEBV?$vector@HV?$allocator@H@std@@@std@@@Z
    MCAPI void UpdateSendEncryptedHeaderExtensionIds(std::vector<int> const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?DtlsHandshakeCompleted@DtlsSrtpTransport@webrtc@@AEAA_NXZ
    MCAPI bool DtlsHandshakeCompleted();

    // symbol:
    // ?ExtractParams@DtlsSrtpTransport@webrtc@@AEAA_NPEAVDtlsTransportInternal@cricket@@PEAHPEAV?$BufferT@E$00@rtc@@2@Z
    MCAPI bool
    ExtractParams(class cricket::DtlsTransportInternal*, int*, class rtc::BufferT<uchar, 1>*, class rtc::BufferT<uchar, 1>*);

    // symbol: ?IsDtlsActive@DtlsSrtpTransport@webrtc@@AEAA_NXZ
    MCAPI bool IsDtlsActive();

    // symbol: ?IsDtlsConnected@DtlsSrtpTransport@webrtc@@AEAA_NXZ
    MCAPI bool IsDtlsConnected();

    // symbol: ?IsDtlsWritable@DtlsSrtpTransport@webrtc@@AEAA_NXZ
    MCAPI bool IsDtlsWritable();

    // symbol: ?MaybeSetupDtlsSrtp@DtlsSrtpTransport@webrtc@@AEAAXXZ
    MCAPI void MaybeSetupDtlsSrtp();

    // symbol: ?OnDtlsState@DtlsSrtpTransport@webrtc@@AEAAXPEAVDtlsTransportInternal@cricket@@W4DtlsTransportState@2@@Z
    MCAPI void OnDtlsState(class cricket::DtlsTransportInternal*, ::webrtc::DtlsTransportState);

    // symbol: ?SetDtlsTransport@DtlsSrtpTransport@webrtc@@AEAAXPEAVDtlsTransportInternal@cricket@@PEAPEAV34@@Z
    MCAPI void SetDtlsTransport(class cricket::DtlsTransportInternal*, class cricket::DtlsTransportInternal**);

    // symbol: ?SetRtcpDtlsTransport@DtlsSrtpTransport@webrtc@@AEAAXPEAVDtlsTransportInternal@cricket@@@Z
    MCAPI void SetRtcpDtlsTransport(class cricket::DtlsTransportInternal*);

    // symbol: ?SetRtpDtlsTransport@DtlsSrtpTransport@webrtc@@AEAAXPEAVDtlsTransportInternal@cricket@@@Z
    MCAPI void SetRtpDtlsTransport(class cricket::DtlsTransportInternal*);

    // symbol: ?SetupRtcpDtlsSrtp@DtlsSrtpTransport@webrtc@@AEAAXXZ
    MCAPI void SetupRtcpDtlsSrtp();

    // symbol: ?SetupRtpDtlsSrtp@DtlsSrtpTransport@webrtc@@AEAAXXZ
    MCAPI void SetupRtpDtlsSrtp();

    // NOLINTEND
};

}; // namespace webrtc
