#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class SubscriptionsScreenController : public ::SettingsScreenControllerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    SubscriptionsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SubscriptionsScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void onOpen() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SubscriptionsScreenController(::std::shared_ptr<::MainMenuScreenModel> model);

    MCAPI bool _isCsbSubscribed();

    MCAPI bool _platformMatches();

    MCAPI void _registerBindings();

    MCAPI bool shouldShowSubscriptionsTab() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $onOpen();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
