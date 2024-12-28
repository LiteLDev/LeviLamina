#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SSLCertificate; }
namespace rtc { struct SSLCertificateStats; }
// clang-format on

namespace rtc {

class SSLCertChain {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk85c7d5;
    // NOLINTEND

public:
    // prevent constructor by default
    SSLCertChain& operator=(SSLCertChain const&);
    SSLCertChain(SSLCertChain const&);
    SSLCertChain();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::rtc::SSLCertChain> Clone() const;

    MCAPI ::std::unique_ptr<::rtc::SSLCertificateStats> GetStats() const;

    MCAPI explicit SSLCertChain(::std::vector<::std::unique_ptr<::rtc::SSLCertificate>>);

    MCAPI explicit SSLCertChain(::std::unique_ptr<::rtc::SSLCertificate>);

    MCAPI ~SSLCertChain();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::vector<::std::unique_ptr<::rtc::SSLCertificate>>);

    MCAPI void* $ctor(::std::unique_ptr<::rtc::SSLCertificate>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
