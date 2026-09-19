#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/IAppPlatformImpl.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace AppPlatformImpl { class IDependencies; }
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class LoadTimeProfiler; }
class IClientAppPlatformImpl;
// clang-format on

namespace AppPlatformImpl {

class Impl : public ::IAppPlatformImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1f9a34;
    ::ll::UntypedStorage<8, 16> mUnk17ea4f;
    ::ll::UntypedStorage<8, 16> mUnk922e4c;
    // NOLINTEND

public:
    // prevent constructor by default
    Impl& operator=(Impl const&);
    Impl(Impl const&);
    Impl();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~Impl() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~Impl() /*override*/;
#endif

    virtual ::IClientAppPlatformImpl* getClient() /*override*/;

    virtual void setServiceLocators(::AppPlatform& platform) /*override*/;

    virtual void resetServiceLocators() /*override*/;

    virtual ::Bedrock::PubSub::Subscription initializeLoadProfiler(::Core::LoadTimeProfiler& profiler) /*override*/;

    virtual ::std::string getFullLanguageCode() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Impl(::std::unique_ptr<::AppPlatformImpl::IDependencies> deps);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::AppPlatformImpl::IDependencies> deps);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::IClientAppPlatformImpl* $getClient();

    MCNAPI void $setServiceLocators(::AppPlatform& platform);

    MCNAPI void $resetServiceLocators();

    MCNAPI ::Bedrock::PubSub::Subscription $initializeLoadProfiler(::Core::LoadTimeProfiler& profiler);

    MCNAPI ::std::string $getFullLanguageCode();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace AppPlatformImpl
