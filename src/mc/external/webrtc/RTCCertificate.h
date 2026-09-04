#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountedNonVirtual.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SSLCertChain; }
namespace webrtc { class SSLCertificate; }
namespace webrtc { class SSLIdentity; }
// clang-format on

namespace webrtc {

class RTCCertificate : public ::webrtc::RefCountedNonVirtual<::webrtc::RTCCertificate> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc2591c;
    // NOLINTEND

public:
    // prevent constructor by default
    RTCCertificate& operator=(RTCCertificate const&);
    RTCCertificate(RTCCertificate const&);
    RTCCertificate();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::SSLCertificate const& GetSSLCertificate() const;

    MCNAPI ::webrtc::SSLCertChain const& GetSSLCertificateChain() const;

    MCNAPI ~RTCCertificate();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::RTCCertificate>
    Create(::std::unique_ptr<::webrtc::SSLIdentity> identity);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
