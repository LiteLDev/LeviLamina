#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/CredentialsObserver.h"
#include "mc/certificates/identity/edu/GenericCredentialsEvent.h"
#include "mc/common/IEduSystems.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/options/EducationServicesEnvironment.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryIdentity;
struct EduConfigData;
namespace Identity { class IEduAuth; }
namespace Identity { struct ActiveDirectoryIdentityParameters; }
namespace Social { class IEduMultiplayerHeadless; }
namespace edu::auth { struct CredsLost; }
class AbstractScene;
class IMinecraftGame;
class ServicePackSystem;
// clang-format on

class EduSystems : public ::IEduSystems, public ::edu::auth::CredentialsObserver {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 8>  mUnk3bdca8;
    ::ll::UntypedStorage<8, 8>  mUnk3ba35d;
    ::ll::UntypedStorage<8, 16> mUnk3ccb77;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 8>  mUnk3d5edc;
    ::ll::UntypedStorage<8, 8>  mUnk51c141;
    ::ll::UntypedStorage<8, 16> mUnk31b86f;
    ::ll::UntypedStorage<8, 8>  mUnkf14b87;
    ::ll::UntypedStorage<8, 8>  mUnke6094e;
    ::ll::UntypedStorage<8, 8>  mUnk280bf4;
    ::ll::UntypedStorage<8, 8>  mUnkb91918;
    ::ll::UntypedStorage<8, 8>  mUnkc9bcdc;
    ::ll::UntypedStorage<8, 16> mUnkeaa12c;
    ::ll::UntypedStorage<8, 8>  mUnk73e3e0;
    ::ll::UntypedStorage<8, 8>  mUnk31ea89;
    ::ll::UntypedStorage<8, 8>  mUnk8444ca;
    ::ll::UntypedStorage<8, 8>  mUnk1fe2a0;
    ::ll::UntypedStorage<8, 8>  mUnkcb0c76;
    ::ll::UntypedStorage<8, 8>  mUnk49732f;
    ::ll::UntypedStorage<8, 16> mUnk1cb3c3;
    ::ll::UntypedStorage<8, 32> mUnk7c1562;
    ::ll::UntypedStorage<8, 32> mUnk58823f;
#endif
    // NOLINTEND

public:
    // prevent constructor by default
    EduSystems& operator=(EduSystems const&);
    EduSystems(EduSystems const&);
    EduSystems();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduSystems() /*override*/ = default;

    virtual ::Identity::IEduAuth& getEduAuth() const /*override*/;

#ifdef LL_PLAT_S
    virtual ::Social::IEduMultiplayerHeadless& getMultiplayerHeadless() const /*override*/;
#else // LL_PLAT_C
    virtual ::Social::IEduMultiplayerHeadless& getMultiplayerHeadless() const /*override*/;

    virtual void onNotify(::EduConfigData const& state) /*override*/;

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsLost> const& state) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI EduSystems(
        ::IMinecraftGame&                               game,
        ::EducationServicesEnvironment                  environment,
        ::Identity::ActiveDirectoryIdentityParameters&& activeDirectoryIdentityParameters
    );

    MCNAPI ::std::string getReferrerId() const;

    MCNAPI ::ServicePackSystem*
    initializeServicePackSystem(::Bedrock::NotNullNonOwnerPtr<::ActiveDirectoryIdentity> identity);

    MCNAPI bool needsFramePriority(::AbstractScene* activeScene) const;

    MCNAPI void onInitFinished();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::IMinecraftGame&                               game,
        ::EducationServicesEnvironment                  environment,
        ::Identity::ActiveDirectoryIdentityParameters&& activeDirectoryIdentityParameters
    );
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Identity::IEduAuth& $getEduAuth() const;

    MCNAPI ::Social::IEduMultiplayerHeadless& $getMultiplayerHeadless() const;

    MCNAPI void $onNotify(::EduConfigData const& state);

    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsLost> const& state);
#endif


    // NOLINTEND
};
