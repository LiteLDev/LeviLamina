#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/certificates/UnverifiedCertificate.h"

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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    Certificate& operator=(Certificate const&);
    Certificate();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI Certificate(::Certificate const& other);

    MCAPI void addToEnd(::Certificate const& certificate);
#endif

    MCAPI int64 getExpirationDate() const;

    MCAPI ::std::string getIdentityPublicKey() const;

    MCAPI int64 getNotBeforeDate() const;

#ifdef LL_PLAT_C
    MCAPI ::Certificate& getRootParentCertificate();
#endif

    MCAPI bool validate(int64 currentTime, bool isSelfSigned, bool checkExpired);

    MCAPI ~Certificate();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::unique_ptr<::Certificate> addAuthorityToCertificate(
        ::PrivateKeyManager const&       signer,
        int64                            notBeforeDate,
        int64                            expirationDate,
        ::std::string const&             identityPublicKey,
        ::std::unique_ptr<::Certificate> certificate
    );

    MCAPI static ::std::unique_ptr<::WebToken> createWebToken(
        ::PrivateKeyManager const& signer,
        int64                      notBeforeDate,
        int64                      expirationDate,
        ::std::string const&       identityPublicKey,
        bool                       isCertificateAuthority,
        ::Json::Value const*       extraData
    );

    MCAPI static ::std::unique_ptr<::Certificate> createWrappedCertificate(
        ::PrivateKeyManager const&       signer,
        int64                            notBeforeDate,
        int64                            expirationDate,
        ::std::string const&             identityPublicKey,
        bool                             isCertificateAuthority,
        ::Json::Value const*             extraData,
        ::std::unique_ptr<::Certificate> parentCertificate
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::Certificate const& other);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
