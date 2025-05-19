#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct SSLCertificateStats {
public:
    // prevent constructor by default
    SSLCertificateStats();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::rtc::SSLCertificateStats> Copy() const;

    MCNAPI SSLCertificateStats(
        ::std::string&&,
        ::std::string&&,
        ::std::string&&,
        ::std::unique_ptr<::rtc::SSLCertificateStats>
    );

    MCNAPI ~SSLCertificateStats();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::std::string&&, ::std::string&&, ::std::string&&, ::std::unique_ptr<::rtc::SSLCertificateStats>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
