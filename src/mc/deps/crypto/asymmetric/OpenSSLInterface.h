#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/Padding.h"
#include "mc/deps/crypto/asymmetric/PrivateKeySigningFormat.h"
#include "mc/deps/crypto/asymmetric/PubKeyFormat.h"
#include "mc/deps/crypto/asymmetric/system/ISystemInterface.h"
#include "mc/deps/crypto/asymmetric/system/System.h"
#include "mc/deps/crypto/hash/HashType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Asymmetric { struct EcPublicKeyComponents; }
namespace Crypto::Asymmetric { struct RsaPublicKeyComponents; }
// clang-format on

namespace Crypto::Asymmetric {

class OpenSSLInterface : public ::Crypto::Asymmetric::ISystemInterface {
public:
    // OpenSSLInterface inner types define
    enum class SystemType : int {
        Rsa  = 0,
        Ecc  = 1,
        None = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2484a2;
    ::ll::UntypedStorage<4, 4> mUnkce0d9f;
    ::ll::UntypedStorage<4, 4> mUnk931832;
    ::ll::UntypedStorage<4, 4> mUnk46aacc;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenSSLInterface& operator=(OpenSSLInterface const&);
    OpenSSLInterface(OpenSSLInterface const&);
    OpenSSLInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OpenSSLInterface() /*override*/ = default;

    virtual bool generateKeyPair(::std::string& privateKey, ::std::string& publicKey) /*override*/;

    virtual ::Bedrock::Result<::std::string> constructPublicKey(
        ::std::variant<::Crypto::Asymmetric::RsaPublicKeyComponents, ::Crypto::Asymmetric::EcPublicKeyComponents> const&
            components
    ) /*override*/;

    virtual ::Bedrock::Result<
        ::std::variant<::Crypto::Asymmetric::RsaPublicKeyComponents, ::Crypto::Asymmetric::EcPublicKeyComponents>>
    deconstructPublicKey(::std::string const& publicKey) /*override*/;

    virtual ::std::string encryptData(
        ::std::string const&               publicKey,
        ::std::string const&               data,
        ::Crypto::Asymmetric::Padding      paddingType,
        ::Crypto::Asymmetric::PubKeyFormat keyFormat,
        bool                               useSHA256
    ) /*override*/;

    virtual ::std::string decryptData(
        ::std::string const&          privateKey,
        ::std::string const&          data,
        ::Crypto::Asymmetric::Padding paddingType
    ) /*override*/;

    virtual ::std::string signData(
        ::std::string const&                          privateKey,
        ::std::string const&                          data,
        ::Crypto::Hash::HashType                      hash,
        ::Crypto::Asymmetric::PrivateKeySigningFormat format
    ) /*override*/;

    virtual bool verifyData(
        ::std::string const&     publicKey,
        ::std::string const&     signature,
        ::std::string const&     data,
        ::Crypto::Hash::HashType hash
    ) /*override*/;

    virtual ::std::string
    computeSharedSecret(::std::string const& myPrivateKey, ::std::string const& peerPublicKey) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::Crypto::Asymmetric::System>
    inferSystemFromPublicKey(::std::string const& publicKey);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $generateKeyPair(::std::string& privateKey, ::std::string& publicKey);

    MCNAPI ::Bedrock::Result<::std::string> $constructPublicKey(
        ::std::variant<::Crypto::Asymmetric::RsaPublicKeyComponents, ::Crypto::Asymmetric::EcPublicKeyComponents> const&
            components
    );

    MCNAPI ::Bedrock::Result<
        ::std::variant<::Crypto::Asymmetric::RsaPublicKeyComponents, ::Crypto::Asymmetric::EcPublicKeyComponents>>
    $deconstructPublicKey(::std::string const& publicKey);

    MCNAPI ::std::string $encryptData(
        ::std::string const&               publicKey,
        ::std::string const&               data,
        ::Crypto::Asymmetric::Padding      paddingType,
        ::Crypto::Asymmetric::PubKeyFormat keyFormat,
        bool                               useSHA256
    );

    MCNAPI ::std::string
    $decryptData(::std::string const& privateKey, ::std::string const& data, ::Crypto::Asymmetric::Padding paddingType);

    MCNAPI ::std::string $signData(
        ::std::string const&                          privateKey,
        ::std::string const&                          data,
        ::Crypto::Hash::HashType                      hash,
        ::Crypto::Asymmetric::PrivateKeySigningFormat format
    );

    MCNAPI bool $verifyData(
        ::std::string const&     publicKey,
        ::std::string const&     signature,
        ::std::string const&     data,
        ::Crypto::Hash::HashType hash
    );

    MCNAPI ::std::string $computeSharedSecret(::std::string const& myPrivateKey, ::std::string const& peerPublicKey);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Crypto::Asymmetric
