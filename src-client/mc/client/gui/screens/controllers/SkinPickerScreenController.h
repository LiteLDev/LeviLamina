#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/player/SkinHandle.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class SkinPackCollectionModel;
struct SkinRepository;
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
    virtual ~SkinPickerScreenController() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual ::ui::ViewRequest tryExit() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification) /*override*/;

    virtual ::std::string _getButtonBDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SkinPickerScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::shared_ptr<::SkinRepository>      skinRepository
    );

    MCAPI ::ui::ViewRequest _equipPreviewedSkin();

    MCAPI bool _getAcceptButtonEnabled() const;

    MCAPI ::std::string _getSkinName(::SkinHandle const& handle) const;

    MCAPI ::std::string _getSkinPackName(int index) const;

    MCAPI bool _isCustomSkin(::SkinHandle const& skin) const;

    MCAPI bool _isEquipablePreviewHandle() const;

    MCAPI bool _isLimitedUsagePreviewHandle() const;

    MCAPI void _pickCustomSkin();

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void setPreviewSkin(::SkinHandle const& newSkin);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& MINECON_2012_CAPE_ID();

    MCAPI static ::std::string const& MOJANG_CAPE_ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::std::shared_ptr<::SkinRepository> skinRepository);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI void $onTerminate();

    MCAPI ::ui::ViewRequest $tryExit();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI ::std::string $_getButtonBDescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
