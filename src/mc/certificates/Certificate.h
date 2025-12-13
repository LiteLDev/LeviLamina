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
    // prevent constructor by default
    Certificate& operator=(Certificate const&);
    Certificate();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Certificate(::Certificate const& other);

    MCNAPI_C void addToEnd(::Certificate const& certificate);

    MCNAPI int64 getExpirationDate() const;

    MCNAPI ::std::string getIdentityPublicKey() const;

    MCNAPI int64 getNotBeforeDate() const;

    MCNAPI_C ::Certificate& getRootParentCertificate();

    MCNAPI bool validate(int64 currentTime, bool isSelfSigned, bool checkExpired);

    MCNAPI ~Certificate();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::std::unique_ptr<::Certificate> addAuthorityToCertificate(
        ::PrivateKeyManager&             signer,
        int64                            notBeforeDate,
        int64                            expirationDate,
        ::std::string const&             identityPublicKey,
        ::std::unique_ptr<::Certificate> certificate
    );

    MCNAPI_C static ::std::unique_ptr<::WebToken> createWebToken(
        ::PrivateKeyManager& signer,
        int64                notBeforeDate,
        int64                expirationDate,
        ::std::string const& identityPublicKey,
        bool                 isCertificateAuthority,
        ::Json::Value const* extraData
    );

    MCNAPI_C static ::std::unique_ptr<::Certificate> createWrappedCertificate(
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
    MCNAPI void* $ctor(::Certificate const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
