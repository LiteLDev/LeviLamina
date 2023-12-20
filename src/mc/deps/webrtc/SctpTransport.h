#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/DtlsTransportState.h"
#include "mc/deps/webrtc/SctpTransportState.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class DtlsTransportInternal; }
namespace cricket { class SctpTransportInternal; }
namespace rtc { class CopyOnWriteBuffer; }
namespace webrtc { class DataChannelSink; }
namespace webrtc { class DtlsTransport; }
namespace webrtc { class DtlsTransportInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { class SctpTransportInformation; }
namespace webrtc { class SctpTransportObserverInterface; }
namespace webrtc { struct SendDataParams; }
// clang-format on

namespace webrtc {

class SctpTransport {
public:
    // prevent constructor by default
    SctpTransport& operator=(SctpTransport const&);
    SctpTransport(SctpTransport const&);
    SctpTransport();

public:
    // NOLINTBEGIN
    // symbol: ?CloseChannel@SctpTransport@webrtc@@UEAA?AVRTCError@2@H@Z
    MCVAPI class webrtc::RTCError CloseChannel(int);

    // symbol: ?Information@SctpTransport@webrtc@@UEBA?AVSctpTransportInformation@2@XZ
    MCVAPI class webrtc::SctpTransportInformation Information() const;

    // symbol: ?IsReadyToSend@SctpTransport@webrtc@@UEBA_NXZ
    MCVAPI bool IsReadyToSend() const;

    // symbol: ?OpenChannel@SctpTransport@webrtc@@UEAA?AVRTCError@2@H@Z
    MCVAPI class webrtc::RTCError OpenChannel(int);

    // symbol: ?RegisterObserver@SctpTransport@webrtc@@UEAAXPEAVSctpTransportObserverInterface@2@@Z
    MCVAPI void RegisterObserver(class webrtc::SctpTransportObserverInterface*);

    // symbol: ?SendData@SctpTransport@webrtc@@UEAA?AVRTCError@2@HAEBUSendDataParams@2@AEBVCopyOnWriteBuffer@rtc@@@Z
    MCVAPI class webrtc::RTCError
    SendData(int, struct webrtc::SendDataParams const&, class rtc::CopyOnWriteBuffer const&);

    // symbol: ?SetDataSink@SctpTransport@webrtc@@UEAAXPEAVDataChannelSink@2@@Z
    MCVAPI void SetDataSink(class webrtc::DataChannelSink*);

    // symbol: ?UnregisterObserver@SctpTransport@webrtc@@UEAAXXZ
    MCVAPI void UnregisterObserver();

    // symbol: ?dtls_transport@SctpTransport@webrtc@@UEBA?AV?$scoped_refptr@VDtlsTransportInterface@webrtc@@@rtc@@XZ
    MCVAPI class rtc::scoped_refptr<class webrtc::DtlsTransportInterface> dtls_transport() const;

    // symbol: ??1SctpTransport@webrtc@@MEAA@XZ
    MCVAPI ~SctpTransport();

    // symbol: ?Clear@SctpTransport@webrtc@@QEAAXXZ
    MCAPI void Clear();

    // symbol:
    // ??0SctpTransport@webrtc@@QEAA@V?$unique_ptr@VSctpTransportInternal@cricket@@U?$default_delete@VSctpTransportInternal@cricket@@@std@@@std@@@Z
    MCAPI explicit SctpTransport(std::unique_ptr<class cricket::SctpTransportInternal>);

    // symbol: ?SetDtlsTransport@SctpTransport@webrtc@@QEAAXV?$scoped_refptr@VDtlsTransport@webrtc@@@rtc@@@Z
    MCAPI void SetDtlsTransport(class rtc::scoped_refptr<class webrtc::DtlsTransport>);

    // symbol: ?Start@SctpTransport@webrtc@@QEAAXHHH@Z
    MCAPI void Start(int, int, int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?OnAssociationChangeCommunicationUp@SctpTransport@webrtc@@AEAAXXZ
    MCAPI void OnAssociationChangeCommunicationUp();

    // symbol:
    // ?OnDtlsStateChange@SctpTransport@webrtc@@AEAAXPEAVDtlsTransportInternal@cricket@@W4DtlsTransportState@2@@Z
    MCAPI void OnDtlsStateChange(class cricket::DtlsTransportInternal*, ::webrtc::DtlsTransportState);

    // symbol: ?UpdateInformation@SctpTransport@webrtc@@AEAAXW4SctpTransportState@2@@Z
    MCAPI void UpdateInformation(::webrtc::SctpTransportState);

    // NOLINTEND
};

}; // namespace webrtc
