#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/gui/screens/controllers/UserManagementModalScreenData.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace Json { class Value; }
// clang-format on

class UserManagementScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 376, ::UserManagementModalScreenData> mScreenData;
    ::ll::TypedStorage<8, 64, ::std::function<void(bool)>>      mCallback;
    ::ll::TypedStorage<1, 1, bool>                              mCallbackResult;
    // NOLINTEND

public:
    // prevent constructor by default
    UserManagementScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UserManagementScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;

    virtual void onLeave() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UserManagementScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::UserManagementModalScreenData const&    screenData,
        ::std::function<void(bool)>               callback
    );

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::UserManagementModalScreenData const&    screenData,
        ::std::function<void(bool)>               callback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCFOLD ::std::string $getAdditionalScreenInfo() const;

    MCAPI void $onLeave();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
