#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class TrialUpsellScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsNewWorld;
    ::ll::TypedStorage<1, 1, bool> mTimeExpired;
    // NOLINTEND

public:
    // prevent constructor by default
    TrialUpsellScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TrialUpsellScreenController() /*override*/ = default;

    virtual void handleLicenseChanged() /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    TrialUpsellScreenController(::std::shared_ptr<::MinecraftScreenModel> model, bool isNewWorld, bool timeExpired);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model, bool isNewWorld, bool timeExpired);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $handleLicenseChanged();

    MCFOLD ::ui::SceneType $getSceneType() const;

    MCFOLD ::std::string $_getButtonADescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
