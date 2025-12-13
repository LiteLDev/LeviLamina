#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/Padding.h"
#include "mc/deps/crypto/PrivateKeySigningFormat.h"
#include "mc/deps/crypto/PubKeyFormat.h"
#include "mc/deps/crypto/asymmetric/system/ISystemInterface.h"
#include "mc/deps/crypto/hash/HashType.h"

namespace Crypto::Asymmetric {

class NullSSLInterface : public ::Crypto::Asymmetric::ISystemInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NullSSLInterface() /*override*/ = default;

    virtual bool generateKeyPair(::std::string&, ::std::string&) /*override*/;

    virtual bool constructPublicKey(::std::string const&, ::std::string const&, ::std::string&) /*override*/;

    virtual ::std::string encryptData(
        ::std::string const&,
        ::std::string const&,
        ::Crypto::Asymmetric::Padding,
        ::Crypto::Asymmetric::PubKeyFormat,
        bool
    ) /*override*/;

    virtual ::std::string
    decryptData(::std::string const&, ::std::string const&, ::Crypto::Asymmetric::Padding) /*override*/;

    virtual ::std::string signData(
        ::std::string const&,
        ::std::string const&,
        ::Crypto::Hash::HashType,
        ::Crypto::Asymmetric::PrivateKeySigningFormat
    ) /*override*/;

    virtual bool
    verifyData(::std::string const&, ::std::string const&, ::std::string const&, ::Crypto::Hash::HashType) /*override*/;

    virtual ::std::string computeSharedSecret(::std::string const&, ::std::string const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Crypto::Asymmetric
