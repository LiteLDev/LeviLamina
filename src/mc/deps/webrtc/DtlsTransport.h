#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/DtlsTransportInterface.h"
#include "mc/deps/webrtc/DtlsTransportState.h"
#include "mc/deps/webrtc/rtc/RefCountReleaseStatus.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class DtlsTransportInternal; }
namespace webrtc { class DtlsTransportInformation; }
namespace webrtc { class DtlsTransportInterface; }
namespace webrtc { class DtlsTransportObserverInterface; }
namespace webrtc { class IceTransportInterface; }
// clang-format on

namespace webrtc {

class DtlsTransport : public ::webrtc::DtlsTransportInterface {
public:
    // prevent constructor by default
    DtlsTransport& operator=(DtlsTransport const&);
    DtlsTransport(DtlsTransport const&);
    DtlsTransport();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1DtlsTransport@webrtc@@MEAA@XZ
    virtual ~DtlsTransport();

    // vIndex: 3, symbol:
    // ?ice_transport@DtlsTransport@webrtc@@UEAA?AV?$scoped_refptr@VIceTransportInterface@webrtc@@@rtc@@XZ
    virtual class rtc::scoped_refptr<class webrtc::IceTransportInterface> ice_transport();

    // vIndex: 4, symbol: ?Information@DtlsTransport@webrtc@@UEAA?AVDtlsTransportInformation@2@XZ
    virtual class webrtc::DtlsTransportInformation Information();

    // vIndex: 5, symbol: ?RegisterObserver@DtlsTransport@webrtc@@UEAAXPEAVDtlsTransportObserverInterface@2@@Z
    virtual void RegisterObserver(class webrtc::DtlsTransportObserverInterface*);

    // vIndex: 6, symbol: ?UnregisterObserver@DtlsTransport@webrtc@@UEAAXXZ
    virtual void UnregisterObserver();

    // symbol: ?Clear@DtlsTransport@webrtc@@QEAAXXZ
    MCAPI void Clear();

    // symbol:
    // ??0DtlsTransport@webrtc@@QEAA@V?$unique_ptr@VDtlsTransportInternal@cricket@@U?$default_delete@VDtlsTransportInternal@cricket@@@std@@@std@@@Z
    MCAPI explicit DtlsTransport(std::unique_ptr<class cricket::DtlsTransportInternal>);

    // symbol: ?internal@DtlsTransport@webrtc@@QEAAPEAVDtlsTransportInternal@cricket@@XZ
    MCAPI class cricket::DtlsTransportInternal* internal();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?OnInternalDtlsState@DtlsTransport@webrtc@@AEAAXPEAVDtlsTransportInternal@cricket@@W4DtlsTransportState@2@@Z
    MCAPI void OnInternalDtlsState(class cricket::DtlsTransportInternal*, ::webrtc::DtlsTransportState);

    // symbol: ?UpdateInformation@DtlsTransport@webrtc@@AEAAXXZ
    MCAPI void UpdateInformation();

    // NOLINTEND
};

}; // namespace webrtc
