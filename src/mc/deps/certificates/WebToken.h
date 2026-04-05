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

#ifdef LL_PLAT_S
public:
    WebToken() = default;

#else // LL_PLAT_C
public:
    // prevent constructor by default
    WebToken& operator=(WebToken const&);
    WebToken(WebToken const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI WebToken();

    MCAPI WebToken(::WebToken&&);
#endif

    MCAPI explicit WebToken(::std::string token);

    MCAPI ::std::string _signatureToDER() const;

    MCAPI ::std::string getKeyId() const;

#ifdef LL_PLAT_C
    MCAPI ::std::string getSignerPublicKey() const;

    MCAPI ::WebToken& operator=(::WebToken&&);
#endif

#ifdef LL_PLAT_S
    MCAPI ::std::string toString() const;
#endif

    MCAPI bool verifyWithExternalKey(::std::string const& publicKey) const;

    MCAPI bool verifyWithIncludedKey(::std::vector<::std::string> const& trustedKeys) const;

    MCAPI ~WebToken();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string _DERToBinary(::std::string const& derSignature, int outputLength);

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
#ifdef LL_PLAT_C
    MCAPI void* $ctor();

    MCAPI void* $ctor(::WebToken&&);
#endif

    MCAPI void* $ctor(::std::string token);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
