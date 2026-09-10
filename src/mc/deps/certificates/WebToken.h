#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/Value.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/system/System.h"
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
class PrivateKeyManager;
struct CertificateSNIType;
struct PublicKeySignatureType;
// clang-format on

class WebToken {
public:
    // member variables
    // NOLINTBEGIN
    ::std::string mHeader;
    ::Json::Value mHeaderInfo;
    ::std::string mData;
    ::Json::Value mDataInfo;
    ::std::string mSignature;
    // NOLINTEND

public:
    WebToken() = default;

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WebToken(::WebToken const&);

    MCAPI ::std::string getKeyId() const;

#ifdef LL_PLAT_C
    MCAPI ::std::string getSignerPublicKey() const;
#endif

    MCAPI ::WebToken& operator=(::WebToken&&);

    MCAPI ::WebToken& operator=(::WebToken const&);

    MCAPI bool verifyWithExternalKey(
        ::std::string const&                          publicKey,
        ::std::optional<::Crypto::Asymmetric::System> expectedSystem
    ) const;

    MCAPI bool verifyWithIncludedKey(::std::vector<::std::string> const& trustedKeys) const;

    MCAPI ~WebToken();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::WebToken>
    createFromData(::Json::Value const& dataInfo, ::PrivateKeyManager const& manager);

#ifdef LL_PLAT_C
    MCAPI static ::std::optional<::WebToken> createFromData(
        ::Json::Value const&       dataInfo,
        ::PrivateKeyManager const& manager,
        ::Json::Value const&       extraHeaders
    );
#endif

    MCAPI static ::std::optional<::WebToken> createFromData(
        ::Json::Value const&                                                  dataInfo,
        ::PrivateKeyManager const&                                            manager,
        ::Json::Value const&                                                  extraHeaders,
        ::std::variant<::PublicKeySignatureType, ::CertificateSNIType> const& signatureType
    );

    MCAPI static ::std::optional<::WebToken> parse(::std::string_view token, uint64 maxLength);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WebToken const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
