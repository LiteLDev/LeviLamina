#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/ClassroomSettingsScreenControllerCallbacks.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/options/EduSharedUriResource.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Json { class Value; }
// clang-format on

class ClassroomSettingsScreenController : public ::SettingsScreenControllerBase {
public:
    // ClassroomSettingsScreenController inner types declare
    // clang-format off
    struct Capabilities;
    // clang-format on

    // ClassroomSettingsScreenController inner types define
    enum class UriResourceValidationStatus : int {};

    struct Capabilities {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ClassroomSettingsScreenController::Capabilities> mCapabilities;
    ::ll::TypedStorage<8, 128, ::ClassroomSettingsScreenControllerCallbacks>    mScreenCallbacks;
    ::ll::TypedStorage<4, 4, ::ClassroomSettingsScreenController::UriResourceValidationStatus>
                                                      mUriResourceValidationStatus;
    ::ll::TypedStorage<8, 64, ::EduSharedUriResource> mSharedUriResource;
    ::ll::TypedStorage<8, 64, ::EduSharedUriResource> mSharedUriResourceLastTick;
    // NOLINTEND

public:
    // prevent constructor by default
    ClassroomSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual ~ClassroomSettingsScreenController() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ClassroomSettingsScreenController(
        ::std::shared_ptr<::MainMenuScreenModel>            model,
        ::ClassroomSettingsScreenControllerCallbacks const& screenCallbacks
    );

    MCAPI void _registerEventHandlers();

    MCAPI void _setEduSharedResourceValue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel>            model,
        ::ClassroomSettingsScreenControllerCallbacks const& screenCallbacks
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification notification);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
