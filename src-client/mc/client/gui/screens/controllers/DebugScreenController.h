#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/BasicToggle.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class DebugScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 3, ::BasicToggle>                    mIsVisible;
    ::ll::TypedStorage<1, 1, bool>                             mOptionEnabled;
    ::ll::TypedStorage<1, 3, ::BasicToggle>                    mConsoleIsShowing;
    ::ll::TypedStorage<1, 1, bool>                             mDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mDevConsoleOptionSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DebugScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DebugScreenController(::std::shared_ptr<::MinecraftScreenModel> model);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCFOLD void $onTerminate();

    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
