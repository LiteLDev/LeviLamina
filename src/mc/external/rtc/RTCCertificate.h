#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/RefCountedNonVirtual.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SSLCertChain; }
namespace rtc { class SSLCertificate; }
namespace rtc { class SSLIdentity; }
// clang-format on

namespace rtc {

class RTCCertificate : public ::rtc::RefCountedNonVirtual<::rtc::RTCCertificate> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk383a23;
    // NOLINTEND

public:
    // prevent constructor by default
    RTCCertificate& operator=(RTCCertificate const&);
    RTCCertificate(RTCCertificate const&);
    RTCCertificate();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::rtc::SSLCertificate const& GetSSLCertificate() const;

    MCNAPI ::rtc::SSLCertChain const& GetSSLCertificateChain() const;

    MCNAPI explicit RTCCertificate(::rtc::SSLIdentity*);

    MCNAPI ~RTCCertificate();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::rtc::RTCCertificate> Create(::std::unique_ptr<::rtc::SSLIdentity>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::SSLIdentity*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
