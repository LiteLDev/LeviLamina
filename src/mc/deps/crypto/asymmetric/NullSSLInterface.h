#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/Padding.h"
#include "mc/deps/crypto/asymmetric/PrivateKeySigningFormat.h"
#include "mc/deps/crypto/asymmetric/PubKeyFormat.h"
#include "mc/deps/crypto/asymmetric/system/ISystemInterface.h"
#include "mc/deps/crypto/hash/HashType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Asymmetric { struct EcPublicKeyComponents; }
namespace Crypto::Asymmetric { struct RsaPublicKeyComponents; }
// clang-format on

namespace Crypto::Asymmetric {

class NullSSLInterface : public ::Crypto::Asymmetric::ISystemInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NullSSLInterface() /*override*/ = default;

    virtual bool generateKeyPair(::std::string&, ::std::string&) /*override*/;

    virtual ::Bedrock::Result<::std::string>
    parsePrivateKey(::std::string const&, ::Crypto::Asymmetric::PrivateKeySigningFormat) /*override*/;

    virtual ::Bedrock::Result<::std::string> derivePublicKey(::std::string const&) /*override*/;

    virtual ::Bedrock::Result<::std::string> constructPublicKey(
        ::std::variant<::Crypto::Asymmetric::RsaPublicKeyComponents, ::Crypto::Asymmetric::EcPublicKeyComponents> const&
    ) /*override*/;

    virtual ::Bedrock::Result<
        ::std::variant<::Crypto::Asymmetric::RsaPublicKeyComponents, ::Crypto::Asymmetric::EcPublicKeyComponents>>
    deconstructPublicKey(::std::string const&) /*override*/;

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
};

} // namespace Crypto::Asymmetric
