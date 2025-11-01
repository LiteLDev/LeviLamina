#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/DtlsTransportState.h"
#include "mc/external/webrtc/DtlsTransportTlsRole.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SSLCertChain; }
// clang-format on

namespace webrtc {

class DtlsTransportInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk9b1045;
    ::ll::UntypedStorage<4, 8> mUnk3fd5dd;
    ::ll::UntypedStorage<4, 8> mUnk3886b9;
    ::ll::UntypedStorage<4, 8> mUnkfde0ae;
    ::ll::UntypedStorage<4, 8> mUnkfcfe9e;
    ::ll::UntypedStorage<8, 8> mUnk3bb6b1;
    // NOLINTEND

public:
    // prevent constructor by default
    DtlsTransportInformation& operator=(DtlsTransportInformation const&);
    DtlsTransportInformation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DtlsTransportInformation(::webrtc::DtlsTransportInformation const& c);

    MCNAPI explicit DtlsTransportInformation(::webrtc::DtlsTransportState state);

    MCNAPI DtlsTransportInformation(
        ::webrtc::DtlsTransportState                    state,
        ::std::optional<::webrtc::DtlsTransportTlsRole> role,
        ::std::optional<int>                            tls_version,
        ::std::optional<int>                            ssl_cipher_suite,
        ::std::optional<int>                            srtp_cipher_suite,
        ::std::unique_ptr<::rtc::SSLCertChain>          remote_ssl_certificates
    );

    MCNAPI ~DtlsTransportInformation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::DtlsTransportInformation const& c);

    MCNAPI void* $ctor(::webrtc::DtlsTransportState state);

    MCNAPI void* $ctor(
        ::webrtc::DtlsTransportState                    state,
        ::std::optional<::webrtc::DtlsTransportTlsRole> role,
        ::std::optional<int>                            tls_version,
        ::std::optional<int>                            ssl_cipher_suite,
        ::std::optional<int>                            srtp_cipher_suite,
        ::std::unique_ptr<::rtc::SSLCertChain>          remote_ssl_certificates
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
