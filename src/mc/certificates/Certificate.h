#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/certificates/UnverifiedCertificate.h"

// auto generated forward declare list
// clang-format off
class PrivateKeyManager;
class UnverifiedCertificate;
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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Certificate(::Certificate const& other);

    MCAPI int64 getExpirationDate() const;

    MCAPI ::std::string getIdentityPublicKey() const;

    MCAPI int64 getNotBeforeDate() const;

    MCAPI bool isCertificateAuthority() const;

    MCAPI bool validate(int64 currentTime, bool isSelfSigned, bool checkExpired);

    MCAPI ~Certificate();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::WebToken> createWebToken(
        ::PrivateKeyManager& signer,
        int64                notBeforeDate,
        int64                expirationDate,
        ::std::string const& identityPublicKey,
        bool                 extraData,
        ::Json::Value const* isCertificateAuthority
    );

    MCAPI static ::std::unique_ptr<::Certificate> createWrappedCertificate(
        ::PrivateKeyManager&             signer,
        int64                            notBeforeDate,
        int64                            expirationDate,
        ::std::string const&             identityPublicKey,
        bool                             extraData,
        ::Json::Value const*             parentCertificate,
        ::std::unique_ptr<::Certificate> isCertificateAuthority
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Certificate const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
