#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/SSLProtocolVersion.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DtlsTransportInternal; }
namespace webrtc { class IceTransportInternal; }
namespace webrtc { struct CryptoOptions; }
// clang-format on

namespace webrtc {

class DtlsTransportFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DtlsTransportFactory() = default;

    virtual ::std::unique_ptr<::webrtc::DtlsTransportInternal> CreateDtlsTransport(
        ::webrtc::IceTransportInternal*,
        ::webrtc::CryptoOptions const&,
        ::webrtc::SSLProtocolVersion
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
