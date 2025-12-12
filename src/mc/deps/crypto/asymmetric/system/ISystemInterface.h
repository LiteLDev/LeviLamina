#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/Padding.h"
#include "mc/deps/crypto/PrivateKeySigningFormat.h"
#include "mc/deps/crypto/PubKeyFormat.h"
#include "mc/deps/crypto/hash/HashType.h"

namespace Crypto::Asymmetric {

class ISystemInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISystemInterface() = default;

    virtual bool generateKeyPair(::std::string&, ::std::string&) = 0;

    virtual bool constructPublicKey(::std::string const&, ::std::string const&, ::std::string&) = 0;

    virtual ::std::string encryptData(
        ::std::string const&,
        ::std::string const&,
        ::Crypto::Asymmetric::Padding,
        ::Crypto::Asymmetric::PubKeyFormat,
        bool
    ) = 0;

    virtual ::std::string decryptData(::std::string const&, ::std::string const&, ::Crypto::Asymmetric::Padding) = 0;

    virtual ::std::string signData(
        ::std::string const&,
        ::std::string const&,
        ::Crypto::Hash::HashType,
        ::Crypto::Asymmetric::PrivateKeySigningFormat
    ) = 0;

    virtual bool
    verifyData(::std::string const&, ::std::string const&, ::std::string const&, ::Crypto::Hash::HashType) = 0;

    virtual ::std::string computeSharedSecret(::std::string const&, ::std::string const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Crypto::Asymmetric
