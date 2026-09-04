#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SSLCertificateStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk882738;
    ::ll::UntypedStorage<8, 32> mUnk26f1a5;
    ::ll::UntypedStorage<8, 32> mUnk25e2e5;
    ::ll::UntypedStorage<8, 8>  mUnk762633;
    // NOLINTEND

public:
    // prevent constructor by default
    SSLCertificateStats& operator=(SSLCertificateStats const&);
    SSLCertificateStats(SSLCertificateStats const&);
    SSLCertificateStats();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::SSLCertificateStats> Copy() const;

    MCNAPI SSLCertificateStats(
        ::std::string&&                                  fingerprint,
        ::std::string&&                                  fingerprint_algorithm,
        ::std::string&&                                  base64_certificate,
        ::std::unique_ptr<::webrtc::SSLCertificateStats> issuer
    );

    MCNAPI ~SSLCertificateStats();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string&&                                  fingerprint,
        ::std::string&&                                  fingerprint_algorithm,
        ::std::string&&                                  base64_certificate,
        ::std::unique_ptr<::webrtc::SSLCertificateStats> issuer
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
