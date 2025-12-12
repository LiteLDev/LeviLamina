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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HudContainerManagerController() /*override*/ = default;

    // vIndex: 2
    virtual void registerContainerCallbacks() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
