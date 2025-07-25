#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/certificates/UnverifiedCertificate.h"

// auto generated inclusion list
#include "mc/certificates/UnverifiedCertificate.h"

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

    MCNAPI int64 getExpirationDate() const;

    MCNAPI ::std::string getIdentityPublicKey() const;

    MCNAPI int64 getNotBeforeDate() const;

    MCNAPI bool validate(int64 currentTime, bool isSelfSigned, bool checkExpired);

    MCNAPI ~Certificate();
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
