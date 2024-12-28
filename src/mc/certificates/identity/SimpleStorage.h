#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/ISettingStorageStrategy.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Identity::Strategies {

class SimpleStorage : public ::Identity::ISettingStorageStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkcc8d1b;
    ::ll::UntypedStorage<8, 8> mUnk79dbe9;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleStorage& operator=(SimpleStorage const&);
    SimpleStorage(SimpleStorage const&);
    SimpleStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Json::Value clientConfig() const /*override*/;

    // vIndex: 3
    virtual bool hasDemoSignedInEver() const /*override*/;

    // vIndex: 2
    virtual void hasDemoSignedInEver(bool) const /*override*/;

    // vIndex: 5
    virtual bool hasSignedInEver() const /*override*/;

    // vIndex: 4
    virtual void hasSignedInEver(bool) const /*override*/;

    // vIndex: 6
    virtual int64 maxSignInExpiration() const /*override*/;

    // vIndex: 7
    virtual int64 maxGraphExpiration() const /*override*/;

    // vIndex: 9
    virtual bool rememberMe() const /*override*/;

    // vIndex: 8
    virtual void rememberMe(bool) const /*override*/;

    // vIndex: 11
    virtual bool signedIn() const /*override*/;

    // vIndex: 10
    virtual void signedIn(bool) const /*override*/;

    // vIndex: 12
    virtual int64 tokenRefreshThreshold() const /*override*/;

    // vIndex: 14
    virtual ::std::string userHint() const /*override*/;

    // vIndex: 13
    virtual void userHint(::std::string const&) const /*override*/;

    // vIndex: 0
    virtual ~SimpleStorage() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Json::Value $clientConfig() const;

    MCAPI bool $hasDemoSignedInEver() const;

    MCAPI void $hasDemoSignedInEver(bool) const;

    MCAPI bool $hasSignedInEver() const;

    MCAPI void $hasSignedInEver(bool) const;

    MCAPI int64 $maxSignInExpiration() const;

    MCAPI int64 $maxGraphExpiration() const;

    MCAPI bool $rememberMe() const;

    MCAPI void $rememberMe(bool) const;

    MCAPI bool $signedIn() const;

    MCAPI void $signedIn(bool) const;

    MCAPI int64 $tokenRefreshThreshold() const;

    MCAPI ::std::string $userHint() const;

    MCAPI void $userHint(::std::string const&) const;
    // NOLINTEND
};

} // namespace Identity::Strategies
