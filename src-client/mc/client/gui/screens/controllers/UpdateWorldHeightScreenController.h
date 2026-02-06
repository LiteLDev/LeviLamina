#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class UpdateWorldHeightScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(bool)>> mStartWorldCallback;
    ::ll::TypedStorage<1, 1, bool>                         mBackupWorld;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateWorldHeightScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UpdateWorldHeightScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UpdateWorldHeightScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::function<void(bool)>               startWorldCallback
    );

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model, ::std::function<void(bool)> startWorldCallback);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCFOLD ::ui::SceneType $getSceneType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
