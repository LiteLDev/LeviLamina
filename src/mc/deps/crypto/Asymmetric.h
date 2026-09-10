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

class Asymmetric : public ::Crypto::Asymmetric::ISystemInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc59a46;
    ::ll::UntypedStorage<8, 8> mUnkf0d693;
    // NOLINTEND

public:
    // prevent constructor by default
    Asymmetric& operator=(Asymmetric const&);
    Asymmetric(Asymmetric const&);
    Asymmetric();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Asymmetric() /*override*/ = default;

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
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Asymmetric(::Crypto::Asymmetric::System system);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Crypto::Asymmetric::System system);
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
