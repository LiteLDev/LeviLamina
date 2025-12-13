#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/Enum.h"
#include "mc/certificates/identity/IEduSsoStrategy.h"
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

namespace Identity::Strategies {

class EduHeadlessSso : public ::Identity::IEduSsoStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4d3a6b;
    ::ll::UntypedStorage<8, 16> mUnk42db5a;
    ::ll::UntypedStorage<8, 8>  mUnkbb0bee;
    // NOLINTEND

public:
    // prevent constructor by default
    EduHeadlessSso& operator=(EduHeadlessSso const&);
    EduHeadlessSso(EduHeadlessSso const&);
    EduHeadlessSso();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Json::Value clientConfig(::Json::Value const&) const /*override*/;

    virtual ::Identity::_TokenRefreshState::Enum refreshToken(
        ::Identity::IEduAuth&,
        ::AccessTokenInfo const&,
        int64,
        ::Identity::EduResourceType,
        ::std::function<void(::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>)>,
        ::std::function<void()>
    ) /*override*/;

    virtual void onRefreshedToken(bool, ::Identity::EduResourceType) /*override*/;

    virtual ::Identity::SsoPromptMode signIn(
        ::Identity::IEduAuth&,
        int64,
        ::std::function<void()>,
        ::std::function<void(::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>>)>
    ) /*override*/;

    virtual void signInSuccess(::std::string const&) /*override*/;

    virtual void demoSignInSuccess() /*override*/;

    virtual void resetAuthentication(::Identity::IEduAuth&, bool) /*override*/;

    virtual bool isDemoConversion() const /*override*/;

    virtual ~EduHeadlessSso() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Identity::Strategies
