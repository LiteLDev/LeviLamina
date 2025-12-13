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

class EduSso : public ::Identity::IEduSsoStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk43468d;
    ::ll::UntypedStorage<8, 16> mUnked046a;
    ::ll::UntypedStorage<8, 8>  mUnk965c33;
    // NOLINTEND

public:
    // prevent constructor by default
    EduSso& operator=(EduSso const&);
    EduSso(EduSso const&);
    EduSso();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Json::Value clientConfig(::Json::Value const& loginResponse) const /*override*/;

    virtual ::Identity::_TokenRefreshState::Enum refreshToken(
        ::Identity::IEduAuth&                                                                  auth,
        ::AccessTokenInfo const&                                                               info,
        int64                                                                                  currentTime,
        ::Identity::EduResourceType                                                            eduIdentityResource,
        ::std::function<void(::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>)> callback,
        ::std::function<void()>                                                                refreshingToken
    ) /*override*/;

    virtual void onRefreshedToken(bool failed, ::Identity::EduResourceType eduIdentityResource) /*override*/;

    virtual ::Identity::SsoPromptMode signIn(
        ::Identity::IEduAuth&   auth,
        int64                   currentTime,
        ::std::function<void()> showingDialogBoxCallback,
        ::std::function<void(::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>>)> callback
    ) /*override*/;

    virtual void signInSuccess(::std::string const& userHint) /*override*/;

    virtual void demoSignInSuccess() /*override*/;

    virtual void resetAuthentication(::Identity::IEduAuth& auth, bool resetUIState) /*override*/;

    virtual bool isDemoConversion() const /*override*/;

    virtual void signInGraph(
        ::Identity::IEduAuth&                                                                                   auth,
        ::std::string const&                                                                                    userId,
        ::std::function<void(::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>>)> callback
    ) /*override*/;

    virtual ~EduSso() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Json::Value $clientConfig(::Json::Value const& loginResponse) const;

    MCNAPI ::Identity::_TokenRefreshState::Enum $refreshToken(
        ::Identity::IEduAuth&                                                                  auth,
        ::AccessTokenInfo const&                                                               info,
        int64                                                                                  currentTime,
        ::Identity::EduResourceType                                                            eduIdentityResource,
        ::std::function<void(::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>)> callback,
        ::std::function<void()>                                                                refreshingToken
    );

    MCNAPI void $onRefreshedToken(bool failed, ::Identity::EduResourceType eduIdentityResource);

    MCNAPI ::Identity::SsoPromptMode $signIn(
        ::Identity::IEduAuth&   auth,
        int64                   currentTime,
        ::std::function<void()> showingDialogBoxCallback,
        ::std::function<void(::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>>)> callback
    );

    MCNAPI void $signInSuccess(::std::string const& userHint);

    MCNAPI void $demoSignInSuccess();

    MCNAPI void $resetAuthentication(::Identity::IEduAuth& auth, bool resetUIState);

    MCNAPI bool $isDemoConversion() const;

    MCNAPI void $signInGraph(
        ::Identity::IEduAuth&                                                                                   auth,
        ::std::string const&                                                                                    userId,
        ::std::function<void(::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>>)> callback
    );
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Identity::Strategies
