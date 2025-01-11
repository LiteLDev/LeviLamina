#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct SSLCertificateStats {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::rtc::SSLCertificateStats> Copy() const;

    MCAPI
    SSLCertificateStats(::std::string&&, ::std::string&&, ::std::string&&, ::std::unique_ptr<::rtc::SSLCertificateStats>);

    MCAPI ~SSLCertificateStats();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string&&, ::std::string&&, ::std::string&&, ::std::unique_ptr<::rtc::SSLCertificateStats>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
