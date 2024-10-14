#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class UnverifiedCertificate {
public:
    // prevent constructor by default
    UnverifiedCertificate& operator=(UnverifiedCertificate const&);
    UnverifiedCertificate();

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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
