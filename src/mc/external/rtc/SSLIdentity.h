#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class KeyParams; }
namespace rtc { class SSLCertChain; }
namespace rtc { class SSLCertificate; }
// clang-format on

namespace rtc {

class SSLIdentity {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SSLIdentity();

    virtual ::rtc::SSLCertificate const& certificate() const = 0;

    virtual ::rtc::SSLCertChain const& cert_chain() const = 0;

    virtual ::std::string PrivateKeyToPEMString() const = 0;

    virtual ::std::string PublicKeyToPEMString() const = 0;

    virtual ::std::unique_ptr<::rtc::SSLIdentity> CloneInternal() const = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::rtc::SSLIdentity>
    Create(::std::string_view common_name, ::rtc::KeyParams const& key_param);

    MCNAPI static ::std::unique_ptr<::rtc::SSLIdentity>
    Create(::std::string_view common_name, ::rtc::KeyParams const& key_param, int64 certificate_lifetime);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
