#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActivationUri;
namespace Bedrock { class ActivationArguments; }
namespace Bedrock { class IAppHolder; }
namespace Bedrock { struct PlatformBuildInfo; }
namespace Bedrock { struct PlatformRuntimeInfo; }
// clang-format on

namespace Bedrock {

class CommonPlatform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Bedrock::PlatformRuntimeInfo>>          mPlatformRuntimeInfo;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Bedrock::PlatformBuildInfo>>            mPlatformBuildInfo;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                        mHasInitialized;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::Bedrock::IAppHolder>>> mHolder;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommonPlatform();

    virtual bool updatePlatformInfo() = 0;

    virtual bool updatePlatformGraphicsInfo() = 0;

    virtual bool _preAppCreation(::Bedrock::ActivationArguments const&) = 0;

    virtual bool _postAppCreation(::Bedrock::ActivationArguments const& actArgs) = 0;

    virtual void _processActivationArguments(::Bedrock::ActivationArguments const& args) = 0;

    virtual bool _update(bool canRender) = 0;

    virtual void notifyUriListeners_Shim(::ActivationUri const& uri) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool startApp(::Bedrock::ActivationArguments const& actArgs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
