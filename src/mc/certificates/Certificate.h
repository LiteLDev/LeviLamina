#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class Certificate {
public:
    // prevent constructor by default
    Certificate& operator=(Certificate const&);
    Certificate();

public:
    // NOLINTBEGIN
    MCAPI Certificate(class Certificate const& other);

    MCAPI int64 getExpirationDate() const;

    MCAPI class Json::Value getExtraData(std::string const& key, class Json::Value const& defaultValue) const;

    MCAPI std::string getIdentityPublicKey() const;

    MCAPI int64 getNotBeforeDate() const;

    MCAPI bool isSelfSigned() const;

    MCAPI bool isValid() const;

    MCAPI std::string toString() const;

    MCAPI bool validate(int64 currentTime, bool isSelfSigned);

    MCAPI ~Certificate();

    MCAPI static std::unique_ptr<class Certificate> createWrappedCertificate(
        class PrivateKeyManager&           signer,
        int64                              notBeforeDate,
        int64                              expirationDate,
        std::string const&                 identityPublicKey,
        bool                               isCertificateAuthority,
        class Json::Value const*           extraData,
        std::unique_ptr<class Certificate> parentCertificate
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI Certificate(
        class UnverifiedCertificate const& unverifiedCertificate,
        std::unique_ptr<class Certificate> parentCertificate
    );

    MCAPI static std::unique_ptr<class WebToken> createWebToken(
        class PrivateKeyManager& signer,
        int64                    notBeforeDate,
        int64                    expirationDate,
        std::string const&       identityPublicKey,
        bool                     isCertificateAuthority,
        class Json::Value const* extraData
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class Certificate const& other);

    MCAPI void* ctor$(
        class UnverifiedCertificate const& unverifiedCertificate,
        std::unique_ptr<class Certificate> parentCertificate
    );

    MCAPI void dtor$();

    // NOLINTEND
};
