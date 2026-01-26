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
    ::ll::UntypedStorage<8, 8>  mUnkbd6e93;
    ::ll::UntypedStorage<8, 8>  mUnk898d35;
    ::ll::UntypedStorage<8, 16> mUnkbac05e;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 8>  mUnk5920c5;
    ::ll::UntypedStorage<8, 8>  mUnke5aa8c;
    ::ll::UntypedStorage<8, 16> mUnke1280d;
    ::ll::UntypedStorage<8, 8>  mUnk598219;
    ::ll::UntypedStorage<8, 8>  mUnk30b8ae;
    ::ll::UntypedStorage<8, 8>  mUnke3558b;
    ::ll::UntypedStorage<8, 8>  mUnkeccb37;
    ::ll::UntypedStorage<8, 8>  mUnk368805;
    ::ll::UntypedStorage<8, 16> mUnk64df70;
    ::ll::UntypedStorage<8, 8>  mUnke14064;
    ::ll::UntypedStorage<8, 8>  mUnk1681a4;
    ::ll::UntypedStorage<8, 8>  mUnk83e0a6;
    ::ll::UntypedStorage<8, 8>  mUnke66cfc;
    ::ll::UntypedStorage<8, 8>  mUnka812e1;
    ::ll::UntypedStorage<8, 8>  mUnk157de0;
    ::ll::UntypedStorage<8, 16> mUnkb5036a;
    ::ll::UntypedStorage<8, 32> mUnk6d0319;
    ::ll::UntypedStorage<8, 32> mUnk4a17fb;
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
