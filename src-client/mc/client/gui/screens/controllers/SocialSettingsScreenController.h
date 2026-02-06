#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class SocialSettingsScreenController : public ::SettingsScreenControllerBase {
public:
    // prevent constructor by default
    SocialSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SocialSettingsScreenController() /*override*/ = default;

    virtual bool _doesScreenHaveExitBehavior() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SocialSettingsScreenController(::std::shared_ptr<::MainMenuScreenModel> model);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $_doesScreenHaveExitBehavior() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
