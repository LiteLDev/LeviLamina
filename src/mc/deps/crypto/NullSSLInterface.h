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
    // vIndex: 0
    virtual ~NullSSLInterface() /*override*/ = default;

    // vIndex: 1
    virtual bool generateKeyPair(::std::string&, ::std::string&) /*override*/;

    // vIndex: 2
    virtual bool constructPublicKey(::std::string const&, ::std::string const&, ::std::string&) /*override*/;

    // vIndex: 3
    virtual ::std::string encryptData(
        ::std::string const&,
        ::std::string const&,
        ::Crypto::Asymmetric::Padding,
        ::Crypto::Asymmetric::PubKeyFormat,
        bool
    ) /*override*/;

    // vIndex: 4
    virtual ::std::string
    decryptData(::std::string const&, ::std::string const&, ::Crypto::Asymmetric::Padding) /*override*/;

    // vIndex: 5
    virtual ::std::string signData(
        ::std::string const&,
        ::std::string const&,
        ::Crypto::Hash::HashType,
        ::Crypto::Asymmetric::PrivateKeySigningFormat
    ) /*override*/;

    // vIndex: 6
    virtual bool
    verifyData(::std::string const&, ::std::string const&, ::std::string const&, ::Crypto::Hash::HashType) /*override*/;

    // vIndex: 7
    virtual ::std::string computeSharedSecret(::std::string const&, ::std::string const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Crypto::Asymmetric
