#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    ::ll::TypedStorage<8, 128, ::WebToken const>                         mRawToken;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::UnverifiedCertificate>> mParentUnverifiedCertificate;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UnverifiedCertificate(::UnverifiedCertificate&& other);

    MCAPI UnverifiedCertificate(::UnverifiedCertificate const& other);

    MCAPI void addToChain(::Json::Value& chain) const;

    MCAPI ::std::string getIdentityPublicKey() const;

    MCFOLD ::std::string toString() const;

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
