#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct SSLCertificateStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke82e96;
    ::ll::UntypedStorage<8, 32> mUnk21c60e;
    ::ll::UntypedStorage<8, 32> mUnkaa5991;
    ::ll::UntypedStorage<8, 8> mUnkf8f1f3;
    // NOLINTEND

public:
    // prevent constructor by default
    SSLCertificateStats& operator=(SSLCertificateStats const&);
    SSLCertificateStats(SSLCertificateStats const&);
    SSLCertificateStats();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::rtc::SSLCertificateStats> Copy() const;

    MCNAPI SSLCertificateStats(::std::string&& fingerprint, ::std::string&& fingerprint_algorithm, ::std::string&& base64_certificate, ::std::unique_ptr<::rtc::SSLCertificateStats> issuer);

    MCNAPI ~SSLCertificateStats();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string&& fingerprint, ::std::string&& fingerprint_algorithm, ::std::string&& base64_certificate, ::std::unique_ptr<::rtc::SSLCertificateStats> issuer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
