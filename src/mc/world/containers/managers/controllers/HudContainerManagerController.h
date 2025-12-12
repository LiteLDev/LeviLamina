#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class HudContainerManagerModel;
// clang-format on

class HudContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::HudContainerManagerModel>> mHudContainerManagerModel;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>             mDynamicContainerRemovalNotifier;
    // NOLINTEND

public:
    // prevent constructor by default
    HudContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudContainerManagerController() /*override*/ = default;

    virtual void registerContainerCallbacks() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit HudContainerManagerController(::std::weak_ptr<::HudContainerManagerModel> containerManagerModel);

    MCNAPI_C void refreshHotbar();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::weak_ptr<::HudContainerManagerModel> containerManagerModel);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $registerContainerCallbacks();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
