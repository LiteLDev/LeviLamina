#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/certificates/UnverifiedCertificate.h"

// auto generated inclusion list
#include "mc/certificates/UnverifiedCertificate.h"

// auto generated forward declare list
// clang-format off
class PrivateKeyManager;
class WebToken;
namespace Json { class Value; }
// clang-format on

class Certificate {
public:
    // member variables
    // NOLINTBEGIN
    ::UnverifiedCertificate          mUnverifiedCertificate;
    ::std::unique_ptr<::Certificate> mParentCertificate;
    bool                             mIsValid;
    bool                             mIsSelfSigned;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C void addToEnd(::Certificate const& certificate);

    MCAPI int64 getExpirationDate() const;

    MCAPI ::std::string getIdentityPublicKey() const;

    MCAPI int64 getNotBeforeDate() const;

    MCAPI_C ::Certificate& getRootParentCertificate();

    MCAPI bool validate(int64 currentTime, bool isSelfSigned, bool checkExpired);

    MCAPI ~Certificate();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::std::unique_ptr<::Certificate> addAuthorityToCertificate(
        ::PrivateKeyManager&             signer,
        int64                            notBeforeDate,
        int64                            expirationDate,
        ::std::string const&             identityPublicKey,
        ::std::unique_ptr<::Certificate> certificate
    );

    MCAPI_C static ::std::unique_ptr<::WebToken> createWebToken(
        ::PrivateKeyManager& signer,
        int64                notBeforeDate,
        int64                expirationDate,
        ::std::string const& identityPublicKey,
        bool                 isCertificateAuthority,
        ::Json::Value const* extraData
    );

    MCAPI_C static ::std::unique_ptr<::Certificate> createWrappedCertificate(
        ::PrivateKeyManager&             signer,
        int64                            notBeforeDate,
        int64                            expirationDate,
        ::std::string const&             identityPublicKey,
        bool                             isCertificateAuthority,
        ::Json::Value const*             extraData,
        ::std::unique_ptr<::Certificate> parentCertificate
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::Certificate const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
