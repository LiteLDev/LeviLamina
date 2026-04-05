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
    ::ll::UntypedStorage<8, 8>    mUnk2243c8;
    ::ll::UntypedStorage<8, 8>    mUnkc35e36;
    ::ll::UntypedStorage<8, 8>    mUnka8221a;
    ::ll::UntypedStorage<8, 8>    mUnk4fb49a;
    ::ll::UntypedStorage<8, 16>   mUnk16c98e;
    ::ll::UntypedStorage<8, 8>    mUnkde78f1;
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
#ifdef LL_PLAT_C
    MCNAPI ActiveDirectoryIdentity(
        ::Bedrock::NotNullNonOwnerPtr<::IEDUSystems>    eduSystems,
        ::Identity::ActiveDirectoryIdentityParameters&& parameters
    );

    MCNAPI ActiveDirectoryIdentity(
        ::Bedrock::NonOwnerPointer<::IEDUSystems>                                                 eduSystems,
        ::std::optional<::EducationServicesEnvironment>                                           environment,
        ::std::unique_ptr<::IActiveDirectoryIdentityTelemetry>&&                                  eventing,
        ::std::unique_ptr<::Identity::ISettingStorageStrategy>&&                                  settings,
        ::std::unique_ptr<::Identity::IEduSsoStrategy>&&                                          sso,
        ::std::function<::std::unique_ptr<::Identity::IEduAuth>(::Identity::EduAuthParameters&&)> createAuth,
        ::std::unique_ptr<::ResponseVerifier>                                                     verifier,
        ::std::string                                                                             appSessionId
    );

    MCNAPI void _authenticateDemoWithService();

    MCNAPI void _authenticateSignInWithService();

    MCNAPI void _executeOnMainThread(::std::function<void()>&& callback);

    MCNAPI void _handleAuthenticationResponse(::WebServices::EduSignin::SigninResponse& response);

    MCNAPI void _identityGained();

    MCNAPI void _identityLost();

    MCNAPI void _onError(
        ::std::string const&                                     error,
        ::ActiveDirectoryAuthenticationState                     newState,
        ::std::vector<::std::pair<::std::string, ::std::string>> details
    );

    MCNAPI void _onStatusChanged(::ActiveDirectoryAuthenticationState from, ::ActiveDirectoryAuthenticationState to);

    MCNAPI ::AccessTokenInfo _parseTokenInfo(::std::string const& tokenToParse) const;

    MCNAPI void _populateResponse(::WebServices::EduSignin::SigninResponse const& response);

    MCNAPI void _signInCanceled();

    MCNAPI void _updateData(
        ::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>> result,
        bool                                                                             isRefresh
    );

    MCNAPI void _updateGraphData(
        ::std::optional<::Bedrock::Result<::Identity::AuthToken, ::Identity::AuthError>> result,
        bool                                                                             isRefresh
    );

    MCNAPI void addObserver(::edu::auth::CredentialsObserver& observer);

    MCNAPI void getIdentity();

    MCNAPI void resetAuthenticationState();

    MCNAPI void signOut(::std::function<void(::Identity::SignOutResult)> callback) const;

    MCNAPI void tick();
#endif
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
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IEDUSystems>    eduSystems,
        ::Identity::ActiveDirectoryIdentityParameters&& parameters
    );

    MCNAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<::IEDUSystems>                                                 eduSystems,
        ::std::optional<::EducationServicesEnvironment>                                           environment,
        ::std::unique_ptr<::IActiveDirectoryIdentityTelemetry>&&                                  eventing,
        ::std::unique_ptr<::Identity::ISettingStorageStrategy>&&                                  settings,
        ::std::unique_ptr<::Identity::IEduSsoStrategy>&&                                          sso,
        ::std::function<::std::unique_ptr<::Identity::IEduAuth>(::Identity::EduAuthParameters&&)> createAuth,
        ::std::unique_ptr<::ResponseVerifier>                                                     verifier,
        ::std::string                                                                             appSessionId
    );
#endif
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
