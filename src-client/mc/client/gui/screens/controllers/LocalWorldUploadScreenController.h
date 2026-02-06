#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/PlayScreenController.h"
#include "mc/util/UploadState.h"

// auto generated forward declare list
// clang-format off
class PlayScreenModel;
namespace Json { class Value; }
namespace Realms { struct World; }
namespace ui { struct ScreenTechStackSelector; }
// clang-format on

class LocalWorldUploadScreenController : public ::PlayScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                         mRealmID;
    ::ll::TypedStorage<4, 4, int>                                                    mSlotIndex;
    ::ll::TypedStorage<8, 64, ::std::function<void(::UploadState, ::Realms::World)>> mCallbackAfterUpload;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalWorldUploadScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocalWorldUploadScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void _registerEventHandlers() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LocalWorldUploadScreenController(
        ::std::shared_ptr<::PlayScreenModel>                  model,
        ::std::string const&                                  realmID,
        int                                                   slotIndex,
        ::ui::ScreenTechStackSelector&                        techStackSelector,
        ::std::function<void(::UploadState, ::Realms::World)> callbackAfterUpload
    );

    MCAPI void _displayLockedWorldPopup(int worldIndex);

    MCAPI void _displayWorldIsTooBigPopup(int);

    MCAPI void _upload(int worldIndex);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::PlayScreenModel>                  model,
        ::std::string const&                                  realmID,
        int                                                   slotIndex,
        ::ui::ScreenTechStackSelector&                        techStackSelector,
        ::std::function<void(::UploadState, ::Realms::World)> callbackAfterUpload
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $_registerEventHandlers();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
