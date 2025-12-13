#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/identity/edu_common/ActiveDirectoryAuthenticationState.h"
#include "mc/options/EducationServicesEnvironment.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class IActiveDirectoryIdentityTelemetry;
class IEDUSystems;
class ResponseVerifier;
struct AccessTokenInfo;
namespace Identity { class IEduAuth; }
namespace Identity { class IEduSsoStrategy; }
namespace Identity { struct ActiveDirectoryIdentityParameters; }
namespace Identity { struct AuthError; }
namespace Identity { struct AuthToken; }
namespace Identity { struct EduAuthParameters; }
namespace Identity { struct ISettingStorageStrategy; }
namespace Identity { struct ServiceResponse; }
namespace Identity { struct SignOutResult; }
namespace WebServices::EduSignin { struct SigninResponse; }
namespace edu::auth { struct CredentialsObserver; }
// clang-format on

class ActiveDirectoryIdentity : public ::Bedrock::EnableNonOwnerReferences,
                                public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1000> mUnk46e055;
    ::ll::UntypedStorage<1, 1>    mUnk4d1db4;
    ::ll::UntypedStorage<1, 1>    mUnka7ac16;
    ::ll::UntypedStorage<8, 120>  mUnk27931c;
    ::ll::UntypedStorage<8, 8>    mUnkb1e89c;
    ::ll::UntypedStorage<8, 8>    mUnkb73670;
    ::ll::UntypedStorage<8, 8>    mUnk3b60d4;
    ::ll::UntypedStorage<8, 8>    mUnk9f179e;
    ::ll::UntypedStorage<8, 16>   mUnk16c98e;
    ::ll::UntypedStorage<8, 8>    mUnk89d1c9;
    ::ll::UntypedStorage<8, 24>   mUnkf84d67;
    ::ll::UntypedStorage<8, 88>   mUnk3ae843;
    ::ll::UntypedStorage<8, 80>   mUnke3078c;
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveDirectoryIdentity& operator=(ActiveDirectoryIdentity const&);
    ActiveDirectoryIdentity(ActiveDirectoryIdentity const&);
    ActiveDirectoryIdentity();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ActiveDirectoryIdentity() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ActiveDirectoryIdentity() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ActiveDirectoryIdentity(
        ::Bedrock::NotNullNonOwnerPtr<::IEDUSystems>    eduSystems,
        ::Identity::ActiveDirectoryIdentityParameters&& parameters
    );

    MCNAPI_C ActiveDirectoryIdentity(
        ::Bedrock::NonOwnerPointer<::IEDUSystems>                                                 eduSystems,
        ::std::optional<::EducationServicesEnvironment>                                           environment,
        ::std::unique_ptr<::IActiveDirectoryIdentityTelemetry>&&                                  eventing,
        ::std::unique_ptr<::Identity::ISettingStorageStrategy>&&                                  settings,
        ::std::unique_ptr<::Identity::IEduSsoStrategy>&&                                          sso,
        ::std::function<::std::unique_ptr<::Identity::IEduAuth>(::Identity::EduAuthParameters&&)> createAuth,
        ::std::unique_ptr<::ResponseVerifier>                                                     verifier,
        ::std::string                                                                             appSessionId
    );

    MCNAPI_C void _authenticateDemoWithService();

    MCNAPI_C void _authenticateSignInWithService();

    MCNAPI_C void _executeOnMainThread(::std::function<void()>&& callback);

    MCNAPI_C void _handleAuthenticationResponse(::WebServices::EduSignin::SigninResponse& response);

    MCNAPI_C void _identityGained();

    MCNAPI_C void _identityLost();

    MCNAPI_C void _onError(
        ::std::string const&                                     error,
        ::ActiveDirectoryAuthenticationState                     newState,
        ::std::vector<::std::pair<::std::string, ::std::string>> details
    );

    MCNAPI_C void _onStatusChanged(::ActiveDirectoryAuthenticationState from, ::ActiveDirectoryAuthenticationState to);

    MCNAPI_C ::AccessTokenInfo _parseTokenInfo(::std::string const& tokenToParse) const;

    MCNAPI_C void _populateResponse(::WebServices::EduSignin::SigninResponse const& response);

    MCNAPI_C void _signInCanceled();

    MCNAPI_C void _updateData(
        ::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>> result,
        bool                                                                             isRefresh
    );

    MCNAPI_C void _updateGraphData(
        ::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>> result,
        bool                                                                             isRefresh
    );

    MCNAPI_C void addObserver(::edu::auth::CredentialsObserver& observer);

    MCNAPI_C void getIdentity();

    MCNAPI_C void resetAuthenticationState();

    MCNAPI_C void signOut(::std::function<void(::Identity::SignOutResult)> callback) const;

    MCNAPI_C void tick();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& IS_VALID_FIELD();

    MCNAPI static ::std::string const& JWT_EXPIRATION_FIELD();

    MCNAPI static ::std::string const& JWT_REQUEST_ID_FIELD();

    MCNAPI static ::std::string const& PAYLOAD_FIELD();

    MCNAPI static ::std::string const& PUBLIC_KEY();

    MCNAPI static ::std::string const& REQUEST_ID_FIELD();

    MCNAPI static ::std::string const& RESPONSE_FIELD();

    MCNAPI static ::std::string& mCachedServiceEndpoint();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IEDUSystems>    eduSystems,
        ::Identity::ActiveDirectoryIdentityParameters&& parameters
    );

    MCNAPI_C void* $ctor(
        ::Bedrock::NonOwnerPointer<::IEDUSystems>                                                 eduSystems,
        ::std::optional<::EducationServicesEnvironment>                                           environment,
        ::std::unique_ptr<::IActiveDirectoryIdentityTelemetry>&&                                  eventing,
        ::std::unique_ptr<::Identity::ISettingStorageStrategy>&&                                  settings,
        ::std::unique_ptr<::Identity::IEduSsoStrategy>&&                                          sso,
        ::std::function<::std::unique_ptr<::Identity::IEduAuth>(::Identity::EduAuthParameters&&)> createAuth,
        ::std::unique_ptr<::ResponseVerifier>                                                     verifier,
        ::std::string                                                                             appSessionId
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForEnableQueueForMainThread();
    // NOLINTEND
};
