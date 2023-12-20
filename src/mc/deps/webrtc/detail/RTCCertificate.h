#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SSLCertChain; }
namespace rtc { class SSLCertificate; }
namespace rtc { class SSLIdentity; }
// clang-format on

namespace rtc {

class RTCCertificate {
public:
    // prevent constructor by default
    RTCCertificate& operator=(RTCCertificate const&);
    RTCCertificate(RTCCertificate const&);
    RTCCertificate();

public:
    // NOLINTBEGIN
    // symbol: ?GetSSLCertificate@RTCCertificate@rtc@@QEBAAEBVSSLCertificate@2@XZ
    MCAPI class rtc::SSLCertificate const& GetSSLCertificate() const;

    // symbol: ?GetSSLCertificateChain@RTCCertificate@rtc@@QEBAAEBVSSLCertChain@2@XZ
    MCAPI class rtc::SSLCertChain const& GetSSLCertificateChain() const;

    // symbol:
    // ?Create@RTCCertificate@rtc@@SA?AV?$scoped_refptr@VRTCCertificate@rtc@@@2@V?$unique_ptr@VSSLIdentity@rtc@@U?$default_delete@VSSLIdentity@rtc@@@std@@@std@@@Z
    MCAPI static class rtc::scoped_refptr<class rtc::RTCCertificate> Create(std::unique_ptr<class rtc::SSLIdentity>);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0RTCCertificate@rtc@@IEAA@PEAVSSLIdentity@1@@Z
    MCAPI explicit RTCCertificate(class rtc::SSLIdentity*);

    // symbol: ??1RTCCertificate@rtc@@IEAA@XZ
    MCAPI ~RTCCertificate();

    // NOLINTEND
};

}; // namespace rtc
