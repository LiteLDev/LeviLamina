#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/certificates/WebToken.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class UnverifiedCertificate {
public:
    class WebToken const                   mRawToken;
    std::unique_ptr<UnverifiedCertificate> mParentUnverifiedCertificate;

    UnverifiedCertificate() = delete;

public:
    // NOLINTBEGIN
    MCAPI UnverifiedCertificate(class UnverifiedCertificate&& other);

    MCAPI UnverifiedCertificate(class UnverifiedCertificate const& other);

    MCAPI std::string getIdentityPublicKey() const;

    MCAPI std::string toString() const;

    MCAPI std::unique_ptr<class Certificate> verify(std::vector<std::string> const& trustedKeys) const;

    MCAPI ~UnverifiedCertificate();

    MCAPI static class UnverifiedCertificate fromString(std::string const& input);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI UnverifiedCertificate(
        class WebToken const&                        rawToken,
        std::unique_ptr<class UnverifiedCertificate> parentUnverifiedCertificate
    );

    MCAPI void addToChain(class Json::Value& chain) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class UnverifiedCertificate const& other);

    MCAPI void* ctor$(class UnverifiedCertificate&& other);

    MCAPI void*
    ctor$(class WebToken const& rawToken, std::unique_ptr<class UnverifiedCertificate> parentUnverifiedCertificate);

    MCAPI void dtor$();

    // NOLINTEND
};
