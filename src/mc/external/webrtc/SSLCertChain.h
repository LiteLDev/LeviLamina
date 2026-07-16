#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SSLCertificate; }
namespace webrtc { struct SSLCertificateStats; }
// clang-format on

namespace webrtc {

class SSLCertChain {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2ed7d1;
    // NOLINTEND

public:
    // prevent constructor by default
    SSLCertChain& operator=(SSLCertChain const&);
    SSLCertChain(SSLCertChain const&);
    SSLCertChain();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::SSLCertChain> Clone() const;

    MCNAPI ::std::unique_ptr<::webrtc::SSLCertificateStats> GetStats() const;

    MCNAPI explicit SSLCertChain(::std::vector<::std::unique_ptr<::webrtc::SSLCertificate>> certs);

    MCNAPI explicit SSLCertChain(::std::unique_ptr<::webrtc::SSLCertificate> single_cert);

    MCNAPI ~SSLCertChain();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::vector<::std::unique_ptr<::webrtc::SSLCertificate>> certs);

    MCNAPI void* $ctor(::std::unique_ptr<::webrtc::SSLCertificate> single_cert);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
