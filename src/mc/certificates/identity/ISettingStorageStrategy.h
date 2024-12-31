#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Identity {

struct ISettingStorageStrategy {
public:
    // prevent constructor by default
    ISettingStorageStrategy& operator=(ISettingStorageStrategy const&);
    ISettingStorageStrategy(ISettingStorageStrategy const&);
    ISettingStorageStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISettingStorageStrategy() = default;

    // vIndex: 1
    virtual ::Json::Value clientConfig() const = 0;

    // vIndex: 3
    virtual bool hasDemoSignedInEver() const = 0;

    // vIndex: 2
    virtual void hasDemoSignedInEver(bool) const = 0;

    // vIndex: 5
    virtual bool hasSignedInEver() const = 0;

    // vIndex: 4
    virtual void hasSignedInEver(bool) const = 0;

    // vIndex: 6
    virtual int64 maxSignInExpiration() const = 0;

    // vIndex: 7
    virtual int64 maxGraphExpiration() const = 0;

    // vIndex: 9
    virtual bool rememberMe() const = 0;

    // vIndex: 8
    virtual void rememberMe(bool) const = 0;

    // vIndex: 11
    virtual bool signedIn() const = 0;

    // vIndex: 10
    virtual void signedIn(bool) const = 0;

    // vIndex: 12
    virtual int64 tokenRefreshThreshold() const = 0;

    // vIndex: 14
    virtual ::std::string userHint() const = 0;

    // vIndex: 13
    virtual void userHint(::std::string const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Identity
