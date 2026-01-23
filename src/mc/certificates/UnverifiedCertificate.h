#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/certificates/WebToken.h"

// auto generated inclusion list
#include "mc/certificates/WebToken.h"

// auto generated forward declare list
// clang-format off
class Certificate;
namespace Json { class Value; }
// clang-format on

class UnverifiedCertificate {
public:
    // member variables
    // NOLINTBEGIN
    ::WebToken const                           mRawToken;
    ::std::unique_ptr<::UnverifiedCertificate> mParentUnverifiedCertificate;
    // NOLINTEND

public:
    UnverifiedCertificate(
        ::WebToken const&                          rawToken,
        ::std::unique_ptr<UnverifiedCertificate>&& parentUnverifiedCertificate
    )
    : mRawToken(rawToken),
      mParentUnverifiedCertificate(std::move(parentUnverifiedCertificate)) {}

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UnverifiedCertificate(::UnverifiedCertificate const& other);

    MCAPI void addToChain(::Json::Value& chain) const;

    MCAPI_C void addToEnd(::UnverifiedCertificate const& unverifiedCertificate);

    MCAPI ::std::string getIdentityPublicKey() const;

    MCAPI ::std::string toString() const;

    MCAPI ::std::unique_ptr<::Certificate>
    verify(::std::vector<::std::string> const& trustedKeys, int remainingDepth) const;

    MCAPI ~UnverifiedCertificate();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::UnverifiedCertificate fromString(::std::string const& input);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UnverifiedCertificate const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
