#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    ::ll::TypedStorage<8, 32, ::std::string> mHeader;
    ::ll::TypedStorage<8, 16, ::Json::Value> mHeaderInfo;
    ::ll::TypedStorage<8, 32, ::std::string> mData;
    ::ll::TypedStorage<8, 16, ::Json::Value> mDataInfo;
    ::ll::TypedStorage<8, 32, ::std::string> mSignature;
    // NOLINTEND

public:
    // prevent constructor by default
    WebToken& operator=(WebToken const&);
    WebToken();

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
