#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/certificates/WebToken.h"

// auto generated forward declare list
// clang-format off
class Certificate;
class WebToken;
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
    // prevent constructor by default
    UnverifiedCertificate& operator=(UnverifiedCertificate const&);
    UnverifiedCertificate();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UnverifiedCertificate(::UnverifiedCertificate&& other);

    MCAPI UnverifiedCertificate(::UnverifiedCertificate const& other);

    MCAPI void addToChain(::Json::Value& chain) const;

    MCAPI ::std::string getIdentityPublicKey() const;

    MCAPI ::std::string toString() const;

    MCAPI ::std::unique_ptr<::Certificate> verify(::std::vector<::std::string> const& trustedKeys) const;

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
    MCAPI void* $ctor(::UnverifiedCertificate&& other);

    MCAPI void* $ctor(::UnverifiedCertificate const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
