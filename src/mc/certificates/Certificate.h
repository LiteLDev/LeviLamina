#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    ::ll::TypedStorage<8, 136, ::UnverifiedCertificate>        mUnverifiedCertificate;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Certificate>> mParentCertificate;
    ::ll::TypedStorage<1, 1, bool>                             mIsValid;
    ::ll::TypedStorage<1, 1, bool>                             mIsSelfSigned;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Certificate(::Certificate const& other);

    MCAPI Certificate(
        ::UnverifiedCertificate const&   unverifiedCertificate,
        ::std::unique_ptr<::Certificate> parentCertificate
    );

    MCAPI int64 getExpirationDate() const;

    MCAPI ::Json::Value getExtraData(::std::string const& key, ::Json::Value const& defaultValue) const;

    MCAPI ::std::string getIdentityPublicKey() const;

    MCAPI int64 getNotBeforeDate() const;

    MCAPI bool isSelfSigned() const;

    MCAPI bool isValid() const;

    MCAPI ::std::string toString() const;

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
        bool                 isCertificateAuthority,
        ::Json::Value const* extraData
    );

    MCAPI static ::std::unique_ptr<::Certificate> createWrappedCertificate(
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
    MCAPI void* $ctor(::Certificate const& other);

    MCAPI void*
    $ctor(::UnverifiedCertificate const& unverifiedCertificate, ::std::unique_ptr<::Certificate> parentCertificate);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
