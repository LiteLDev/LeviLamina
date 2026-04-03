#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/CredentialsObserver.h"
#include "mc/certificates/identity/edu/GenericCredentialsEvent.h"
#include "mc/common/IEDUSystems.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/options/EducationServicesEnvironment.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryIdentity;
struct EDUConfigData;
namespace Identity { class IEduAuth; }
namespace Identity { struct ActiveDirectoryIdentityParameters; }
namespace Social { class IEduMultiplayerHeadless; }
namespace edu::auth { struct CredsLost; }
class IClientInstance;
class IMinecraftGame;
struct ServicePackSystem;
// clang-format on

class EDUSystems : public ::IEDUSystems, public ::edu::auth::CredentialsObserver {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 8>  mUnk5a480a;
    ::ll::UntypedStorage<8, 8>  mUnkd98ae2;
    ::ll::UntypedStorage<8, 16> mUnkbac05e;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 8>  mUnk5920c5;
    ::ll::UntypedStorage<8, 8>  mUnkc12117;
    ::ll::UntypedStorage<8, 16> mUnke1280d;
    ::ll::UntypedStorage<8, 8>  mUnk4354d4;
    ::ll::UntypedStorage<8, 8>  mUnkb4e976;
    ::ll::UntypedStorage<8, 8>  mUnke9b64d;
    ::ll::UntypedStorage<8, 8>  mUnkb33b75;
    ::ll::UntypedStorage<8, 8>  mUnkdf3822;
    ::ll::UntypedStorage<8, 16> mUnk64df70;
    ::ll::UntypedStorage<8, 8>  mUnk133fb2;
    ::ll::UntypedStorage<8, 8>  mUnk2e9004;
    ::ll::UntypedStorage<8, 8>  mUnkfcbcee;
    ::ll::UntypedStorage<8, 8>  mUnk69737f;
    ::ll::UntypedStorage<8, 8>  mUnkebf86c;
    ::ll::UntypedStorage<8, 8>  mUnkf20ee4;
    ::ll::UntypedStorage<8, 16> mUnkb5036a;
    ::ll::UntypedStorage<8, 32> mUnkbb5665;
    ::ll::UntypedStorage<8, 32> mUnka4c224;
#endif
    // NOLINTEND

public:
    // prevent constructor by default
    EDUSystems& operator=(EDUSystems const&);
    EDUSystems(EDUSystems const&);
    EDUSystems();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~EDUSystems() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~EDUSystems() /*override*/;
#endif

    virtual ::Identity::IEduAuth& getEduAuth() const /*override*/;

#ifdef LL_PLAT_S
    virtual ::Social::IEduMultiplayerHeadless& getMultiplayerHeadless() const /*override*/;
#else // LL_PLAT_C
    virtual ::Social::IEduMultiplayerHeadless& getMultiplayerHeadless() const /*override*/;

    virtual void onNotify(::EDUConfigData const& config) /*override*/;

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsLost> const& state) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void _setupImmersiveReaderListener(::IClientInstance& client);

    MCNAPI_C ::Bedrock::NotNullNonOwnerPtr<::ActiveDirectoryIdentity> getActiveDirectoryIdentity();

    MCNAPI_C ::ServicePackSystem*
    initializeServicePackSystem(::Bedrock::NotNullNonOwnerPtr<::ActiveDirectoryIdentity> identity);

    MCNAPI_C void onInitFinished();

    MCNAPI_C void setReferrerId(::std::string referrerId);

    MCNAPI_C void setReferrerType(::std::string referrerType);

    MCNAPI_C void tick(bool isAuthenticated) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::IMinecraftGame&                               game,
        ::EducationServicesEnvironment                  environment,
        ::Identity::ActiveDirectoryIdentityParameters&& activeDirectoryIdentityParameters
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Identity::IEduAuth& $getEduAuth() const;

    MCNAPI ::Social::IEduMultiplayerHeadless& $getMultiplayerHeadless() const;

    MCNAPI void $onNotify(::EDUConfigData const& config);

    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsLost> const& state);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForCredentialsObserver();

    MCNAPI static void** $vftableForIEDUSystems();
    // NOLINTEND
};
