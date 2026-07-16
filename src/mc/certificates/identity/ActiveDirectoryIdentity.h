#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IEDUSystems;
namespace Identity { class IEduAuth; }
namespace Identity { struct ActiveDirectoryIdentityParameters; }
namespace Identity { struct EduAuthParameters; }
namespace Identity { struct ServiceResponse; }
namespace Identity { struct SignOutResult; }
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
    virtual ~ActiveDirectoryIdentity() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ActiveDirectoryIdentity(
        ::Bedrock::NotNullNonOwnerPtr<::IEDUSystems>    eduSystems,
        ::Identity::ActiveDirectoryIdentityParameters&& parameters
    );

    MCNAPI void _authenticateDemoWithService();

    MCNAPI void _identityGained();

    MCNAPI void getIdentity();

    MCNAPI void resetAuthenticationState();

    MCNAPI void signOut(::std::function<void(::Identity::SignOutResult)> callback) const;

    MCNAPI void tick();
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
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
#endif
    // NOLINTEND
};
