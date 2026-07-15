#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class KeyParams; }
// clang-format on

namespace webrtc {

class OpenSSLKeyPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkdbd9bf;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenSSLKeyPair& operator=(OpenSSLKeyPair const&);
    OpenSSLKeyPair(OpenSSLKeyPair const&);
    OpenSSLKeyPair();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::OpenSSLKeyPair> Clone();

    MCNAPI ::std::string PrivateKeyToPEMString() const;

    MCNAPI ::std::string PublicKeyToPEMString() const;

    MCNAPI ~OpenSSLKeyPair();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::webrtc::OpenSSLKeyPair> Generate(::webrtc::KeyParams const& key_params);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
