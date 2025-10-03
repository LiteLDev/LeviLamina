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
    // vIndex: 0
    virtual ~IEduSsoStrategy() = default;

    // vIndex: 1
    virtual ::Json::Value clientConfig(::Json::Value const&) const = 0;

    // vIndex: 2
    virtual ::Identity::_TokenRefreshState::Enum refreshToken(
        ::Identity::IEduAuth&,
        ::AccessTokenInfo const&,
        int64,
        ::Identity::EduResourceType,
        ::std::function<void(::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>)>,
        ::std::function<void()>
    ) = 0;

    // vIndex: 3
    virtual void onRefreshedToken(bool, ::Identity::EduResourceType) = 0;

    // vIndex: 4
    virtual ::Identity::SsoPromptMode signIn(
        ::Identity::IEduAuth&,
        int64,
        ::std::function<void()>,
        ::std::function<void(::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>>)>
    ) = 0;

    // vIndex: 5
    virtual void signInSuccess(::std::string const&) = 0;

    // vIndex: 6
    virtual void demoSignInSuccess() = 0;

    // vIndex: 7
    virtual void resetAuthentication(::Identity::IEduAuth&, bool) = 0;

    // vIndex: 8
    virtual bool isDemoConversion() const = 0;

    // vIndex: 9
    virtual void signInGraph(
        ::Identity::IEduAuth&,
        ::std::string const&,
        ::std::function<void(::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>>)>
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Identity
