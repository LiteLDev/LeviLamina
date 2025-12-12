#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/SSLProtocolVersion.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class DtlsTransportInternal; }
namespace cricket { class IceTransportInternal; }
namespace webrtc { struct CryptoOptions; }
// clang-format on

namespace cricket {

class DtlsTransportFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DtlsTransportFactory() = default;

    virtual ::std::unique_ptr<::cricket::DtlsTransportInternal> CreateDtlsTransport(
        ::cricket::IceTransportInternal*,
        ::webrtc::CryptoOptions const&,
        ::rtc::SSLProtocolVersion
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
