#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RTCCertificate; }
namespace rtc { class SSLCertificate; }
namespace rtc { class SSLIdentity; }
// clang-format on

namespace rtc {

struct SSLFingerprint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd9a44f;
    ::ll::UntypedStorage<8, 24> mUnkf98647;
    // NOLINTEND

public:
    // prevent constructor by default
    SSLFingerprint& operator=(SSLFingerprint const&);
    SSLFingerprint(SSLFingerprint const&);
    SSLFingerprint();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string GetRfc4572Fingerprint() const;

    MCAPI SSLFingerprint(::std::string_view, ::rtc::ArrayView<uchar const>);

    MCAPI ::std::string ToString() const;

    MCAPI bool operator==(::rtc::SSLFingerprint const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::rtc::SSLFingerprint> Create(::std::string_view, ::rtc::SSLCertificate const&);

    MCAPI static ::std::unique_ptr<::rtc::SSLFingerprint> CreateFromCertificate(::rtc::RTCCertificate const&);

    MCAPI static ::std::unique_ptr<::rtc::SSLFingerprint> CreateUnique(::std::string_view, ::rtc::SSLIdentity const&);

    MCAPI static ::std::unique_ptr<::rtc::SSLFingerprint>
        CreateUniqueFromRfc4572(::std::string_view, ::std::string_view);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string_view, ::rtc::ArrayView<uchar const>);
    // NOLINTEND
};

} // namespace rtc
