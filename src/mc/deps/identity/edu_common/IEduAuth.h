#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

class IEduAuth {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 432> mUnkc8d11d;
    // NOLINTEND

public:
    // prevent constructor by default
    IEduAuth& operator=(IEduAuth const&);
    IEduAuth(IEduAuth const&);
    IEduAuth();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IEduAuth() = default;

    // vIndex: 1
    virtual void Authenticate(
        ::Identity::AuthArgs const&,
        ::std::function<void()>,
        ::std::function<void(::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>>)>
    ) = 0;

    // vIndex: 2
    virtual void resetAuthenticationState() = 0;

    // vIndex: 3
    virtual void clearCookies() = 0;

    // vIndex: 4
    virtual void signOut(::std::string_view, ::std::function<void(::Identity::SignOutResult)>) = 0;

    // vIndex: 5
    virtual void authenticateSilently(
        ::std::string_view,
        ::std::string const&,
        ::std::function<void(::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>)>
    ) = 0;

    // vIndex: 6
    virtual void authenticateSilentlyCredentialed();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Identity::EduAuthTokenPair getHostTokens() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Identity
