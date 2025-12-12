#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DtlsTransportInformation; }
namespace webrtc { class DtlsTransportObserverInterface; }
namespace webrtc { class IceTransportInterface; }
// clang-format on

namespace webrtc {

class DtlsTransportInterface : public ::webrtc::RefCountInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::scoped_refptr<::webrtc::IceTransportInterface> ice_transport() = 0;

    virtual ::webrtc::DtlsTransportInformation Information() = 0;

    virtual void RegisterObserver(::webrtc::DtlsTransportObserverInterface*) = 0;

    virtual void UnregisterObserver() = 0;

    virtual ~DtlsTransportInterface() /*override*/;
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
};

} // namespace webrtc
