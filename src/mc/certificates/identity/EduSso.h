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
namespace Identity { struct ISettingStorageStrategy; }
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
#ifdef LL_PLAT_S
    virtual ::Json::Value clientConfig(::Json::Value const&) const /*override*/;
#else // LL_PLAT_C
    virtual ::Json::Value clientConfig(::Json::Value const& loginResponse) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::Identity::_TokenRefreshState::Enum refreshToken(
        ::Identity::IEduAuth&,
        ::AccessTokenInfo const&,
        int64,
        ::Identity::EduResourceType,
        ::std::function<void(::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>)>,
        ::std::function<void()>
    ) /*override*/;
#else // LL_PLAT_C
    virtual ::Identity::_TokenRefreshState::Enum refreshToken(
        ::Identity::IEduAuth&                                                                  auth,
        ::AccessTokenInfo const&                                                               info,
        int64                                                                                  currentTime,
        ::Identity::EduResourceType                                                            eduIdentityResource,
        ::std::function<void(::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>)> callback,
        ::std::function<void()>                                                                refreshingToken
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void onRefreshedToken(bool, ::Identity::EduResourceType) /*override*/;
#else // LL_PLAT_C
    virtual void onRefreshedToken(bool failed, ::Identity::EduResourceType eduIdentityResource) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::Identity::SsoPromptMode signIn(
        ::Identity::IEduAuth&,
        int64,
        ::std::function<void()>,
        ::std::function<void(::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>>)>
    ) /*override*/;
#else // LL_PLAT_C
    virtual ::Identity::SsoPromptMode signIn(
        ::Identity::IEduAuth&   auth,
        int64                   currentTime,
        ::std::function<void()> showingDialogBoxCallback,
        ::std::function<void(::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>>)> callback
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void signInSuccess(::std::string const&) /*override*/;
#else // LL_PLAT_C
    virtual void signInSuccess(::std::string const& userHint) /*override*/;
#endif

    virtual void demoSignInSuccess() /*override*/;

#ifdef LL_PLAT_S
    virtual void resetAuthentication(::Identity::IEduAuth&, bool) /*override*/;
#else // LL_PLAT_C
    virtual void resetAuthentication(::Identity::IEduAuth& auth, bool resetUIState) /*override*/;
#endif

    virtual bool isDemoConversion() const /*override*/;

#ifdef LL_PLAT_S
    virtual void signInGraph(
        ::Identity::IEduAuth&,
        ::std::string const&,
        ::std::function<void(::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>>)>
    ) /*override*/;
#else // LL_PLAT_C
    virtual void signInGraph(
        ::Identity::IEduAuth&                                                                                   auth,
        ::std::string const&                                                                                    userId,
        ::std::function<void(::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>>)> callback
    ) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit EduSso(::Identity::ISettingStorageStrategy& settings);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Identity::ISettingStorageStrategy& settings);
#endif
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
