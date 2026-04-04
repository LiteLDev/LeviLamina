#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/Enum.h"
#include "mc/certificates/identity/SsoPromptMode.h"
#include "mc/deps/identity/edu_common/EduResourceType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
struct AccessTokenInfo;
namespace Identity { class IEduAuth; }
namespace Identity { struct AuthError; }
namespace Identity { struct AuthToken; }
namespace Json { class Value; }
// clang-format on

namespace Identity {

class IEduSsoStrategy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEduSsoStrategy() = default;

    virtual ::Json::Value clientConfig(::Json::Value const& loginResponse) const = 0;

    virtual ::Identity::_TokenRefreshState::Enum refreshToken(
        ::Identity::IEduAuth&                                                                  auth,
        ::AccessTokenInfo const&                                                               info,
        int64                                                                                  currentTime,
        ::Identity::EduResourceType                                                            eduIdentityResource,
        ::std::function<void(::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>)> callback,
        ::std::function<void()>                                                                refreshingToken
    ) = 0;

    virtual void onRefreshedToken(bool failed, ::Identity::EduResourceType eduIdentityResource) = 0;

    virtual ::Identity::SsoPromptMode signIn(
        ::Identity::IEduAuth&   auth,
        int64                   currentTime,
        ::std::function<void()> showingDialogBoxCallback,
        ::std::function<void(::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>>)> callback
    ) = 0;

    virtual void signInSuccess(::std::string const& userHint) = 0;

    virtual void demoSignInSuccess() = 0;

    virtual void resetAuthentication(::Identity::IEduAuth& auth, bool resetUIState) = 0;

    virtual bool isDemoConversion() const = 0;

    virtual void signInGraph(
        ::Identity::IEduAuth&                                                                                   auth,
        ::std::string const&                                                                                    userId,
        ::std::function<void(::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>>)> callback
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Identity
