#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/Value.h"

// auto generated inclusion list
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
    // prevent constructor by default
    WebToken& operator=(WebToken const&) = default;
    WebToken() = default;

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WebToken(::WebToken const&);

    MCAPI explicit WebToken(::std::string_view token);

    MCAPI ::std::string getKeyId() const;

#ifdef LL_PLAT_C
    MCAPI ::std::string getSignerPublicKey() const;
#endif

    MCAPI bool verifyWithExternalKey(::std::string const& publicKey) const;

    MCAPI bool verifyWithIncludedKey(::std::vector<::std::string> const& trustedKeys) const;

    MCAPI ~WebToken();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::WebToken> createFromData(
        ::Json::Value const&                                           dataInfo,
        ::PrivateKeyManager const&                                     manager,
        ::std::variant<::PublicKeySignatureType, ::CertificateSNIType> signatureType,
        ::Json::Value const&                                           additionalHeaderClaims
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WebToken const&);

    MCAPI void* $ctor(::std::string_view token);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
