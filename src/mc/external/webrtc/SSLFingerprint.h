#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCCertificate; }
namespace webrtc { class SSLCertificate; }
namespace webrtc { class SSLIdentity; }
// clang-format on

namespace webrtc {

struct SSLFingerprint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3db7e7;
    ::ll::UntypedStorage<8, 24> mUnk4130b5;
    // NOLINTEND

public:
    // prevent constructor by default
    SSLFingerprint& operator=(SSLFingerprint const&);
    SSLFingerprint(SSLFingerprint const&);
    SSLFingerprint();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string GetRfc4572Fingerprint() const;

    MCNAPI
    SSLFingerprint(::std::string_view algorithm, ::webrtc::ArrayView<uchar const, 18446744073709546905> digest_view);

    MCNAPI ::std::string ToString() const;

    MCNAPI bool operator==(::webrtc::SSLFingerprint const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::webrtc::SSLFingerprint>
    Create(::std::string_view algorithm, ::webrtc::SSLCertificate const& cert);

    MCNAPI static ::std::unique_ptr<::webrtc::SSLFingerprint>
    CreateFromCertificate(::webrtc::RTCCertificate const& cert);

    MCNAPI static ::std::unique_ptr<::webrtc::SSLFingerprint>
    CreateUnique(::std::string_view algorithm, ::webrtc::SSLIdentity const& identity);

    MCNAPI static ::std::unique_ptr<::webrtc::SSLFingerprint>
    CreateUniqueFromRfc4572(::std::string_view algorithm, ::std::string_view fingerprint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::std::string_view algorithm, ::webrtc::ArrayView<uchar const, 18446744073709546905> digest_view);
    // NOLINTEND
};

} // namespace webrtc
