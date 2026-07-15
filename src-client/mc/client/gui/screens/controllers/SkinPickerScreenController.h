#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/persona/SkinHandle.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class SkinPackCollectionModel;
class SkinRepository;
// clang-format on

class SkinPickerScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SkinPackCollectionModel&>           mSkinPackCollection;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SkinRepository>> mSkinRepository;
    ::ll::TypedStorage<1, 1, bool>                                 mSearchedSkins;
    ::ll::TypedStorage<4, 4, int>                                  mHoverPack;
    ::ll::TypedStorage<4, 4, int>                                  mHoverSkin;
    ::ll::TypedStorage<8, 112, ::SkinHandle>                       mPreviewSkinHandle;
    ::ll::TypedStorage<8, 112, ::SkinHandle const>                 mCustomSkinHandleSkinny;
    ::ll::TypedStorage<8, 112, ::SkinHandle const>                 mCustomSkinHandleFat;
    ::ll::TypedStorage<8, 112, ::SkinHandle const>                 mCustomSkinHandleDummy;
    ::ll::TypedStorage<8, 112, ::SkinHandle>                       mInitialSkinHandle;
    ::ll::TypedStorage<8, 40, ::std::deque<::SkinHandle>>          mSkinUndoList;
    ::ll::TypedStorage<1, 1, bool>                                 mForceUpdatePreviewSkin;
    ::ll::TypedStorage<1, 1, bool>                                 mForceUpdateRecentSkin;
    ::ll::TypedStorage<1, 1, bool>                                 mForceUpdateCustomSkin;
    ::ll::TypedStorage<1, 1, bool>                                 mContentAreaActive;
    ::ll::TypedStorage<1, 1, bool>                                 mSkinStatusHovered;
    ::ll::TypedStorage<1, 1, bool>                                 mNewCustomSkinPicked;
    ::ll::TypedStorage<1, 1, bool>                                 mCapeChanged;
    ::ll::TypedStorage<1, 1, bool>                                 mEventHandlersRegistered;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinPickerScreenController& operator=(SkinPickerScreenController const&);
    SkinPickerScreenController(SkinPickerScreenController const&);
    SkinPickerScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SkinPickerScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual ::ui::ViewRequest tryExit() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual ::std::string _getButtonBDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SkinPickerScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::shared_ptr<::SkinRepository>      skinRepository
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::std::shared_ptr<::SkinRepository> skinRepository);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
