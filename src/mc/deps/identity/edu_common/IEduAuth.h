#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Identity { struct AuthArgs; }
namespace Identity { struct AuthError; }
namespace Identity { struct AuthToken; }
namespace Identity { struct EduAuthTokenPair; }
namespace Identity { struct SignOutResult; }
// clang-format on

namespace Identity {

class IEduAuth : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk8954c5;
    ::ll::UntypedStorage<8, 64> mUnkc06796;
    // NOLINTEND

public:
    // prevent constructor by default
    IEduAuth& operator=(IEduAuth const&);
    IEduAuth(IEduAuth const&);
    IEduAuth();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEduAuth() /*override*/ = default;

    virtual void Authenticate(
        ::Identity::AuthArgs const&,
        ::std::function<void()>,
        ::std::function<void(::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>>)>
    ) = 0;

    virtual void resetAuthenticationState() = 0;

    virtual void clearCookies() = 0;

    virtual void signOut(::std::string_view, ::std::function<void(::Identity::SignOutResult)>) = 0;

    virtual void authenticateSilently(
        ::std::string_view,
        ::std::string const&,
        ::std::function<void(::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>)>
    ) = 0;

    virtual void authenticateSilentlyCredentialed();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Identity::EduAuthTokenPair getTokens() const;

    MCNAPI_S bool hasValidMessToken() const;

    MCNAPI_C void setTokens(::Identity::EduAuthTokenPair tokens);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Identity
