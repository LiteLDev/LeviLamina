#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DtlsTransportInterface; }
namespace webrtc { class SctpTransportInformation; }
namespace webrtc { class SctpTransportObserverInterface; }
// clang-format on

namespace webrtc {

class SctpTransportInterface : public ::webrtc::RefCountInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> dtls_transport() const = 0;

    // vIndex: 4
    virtual ::webrtc::SctpTransportInformation Information() const = 0;

    // vIndex: 5
    virtual void RegisterObserver(::webrtc::SctpTransportObserverInterface*) = 0;

    // vIndex: 6
    virtual void UnregisterObserver() = 0;

    // vIndex: 2
    virtual ~SctpTransportInterface() /*override*/;
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
