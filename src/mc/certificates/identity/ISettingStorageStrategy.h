#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Identity {

struct ISettingStorageStrategy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISettingStorageStrategy() = default;

    virtual ::Json::Value clientConfig() const = 0;

    virtual bool hasDemoSignedInEver() const = 0;

    virtual void hasDemoSignedInEver(bool) const = 0;

    virtual bool hasSignedInEver() const = 0;

    virtual void hasSignedInEver(bool) const = 0;

    virtual int64 maxSignInExpiration() const = 0;

    virtual int64 maxGraphExpiration() const = 0;

    virtual bool rememberMe() const = 0;

    virtual void rememberMe(bool) const = 0;

    virtual bool signedIn() const = 0;

    virtual void signedIn(bool) const = 0;

    virtual int64 tokenRefreshThreshold() const = 0;

    virtual ::std::string userHint() const = 0;

    virtual void userHint(::std::string const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Identity
