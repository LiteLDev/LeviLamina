#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/social/IToastListener.h"
#include "mc/client/social/ToastMessage.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IOptions;
class MinecraftScreenModel;
class PartySystemSubController;
class PerfTurtleScreenController;
class ToastManager;
struct IStoreCatalogItem;
struct PersonaRepository;
namespace Json { class Value; }
namespace Parties { struct PartySystem; }
// clang-format on

class ToastScreenController : public ::MinecraftScreenController, public ::IToastListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                           mVerifiedCreateCallback;
    ::ll::TypedStorage<1, 1, bool>                                           mSplitscreenJoinPopupActive;
    ::ll::TypedStorage<4, 4, float>                                          mPopupVerticalAnchor;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>                                mDirty;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::PerfTurtleScreenController>> mPerfTurtleScreenController;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PartySystemSubController>> mPartySystemController;
    ::ll::TypedStorage<8, 8, ::PersonaRepository&>                           mPersonaRepository;
    ::ll::TypedStorage<8, 8, ::IOptions&>                                    mOptions;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ToastManager>>    mToastManager;
    ::ll::TypedStorage<8, 376, ::std::optional<::ToastMessage>>              mToastMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    ToastScreenController& operator=(ToastScreenController const&);
    ToastScreenController(ToastScreenController const&);
    ToastScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ToastScreenController() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification) /*override*/;

    virtual void showToast(::ToastMessage message, bool animateIn) /*override*/;

    virtual void removeToast() /*override*/;

    virtual void refreshToast() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ToastScreenController(
        ::std::shared_ptr<::MinecraftScreenModel>                              model,
        ::PersonaRepository&                                                   personaRepository,
        ::IOptions&                                                            Options,
        ::ToastManager&                                                        toastManager,
        ::std::optional<::Bedrock::NotNullNonOwnerPtr<::Parties::PartySystem>> partySystem
    );

    MCAPI void _destroySplitscreenJoinPopup();

    MCAPI ::IStoreCatalogItem const* _getAchievementPersonaPiece();

    MCAPI void _registerBindings();

    MCAPI void _spawnSplitscreenJoinPopup(::std::string const& joinText);

    MCAPI ::std::string readToastData(::std::string const& field_name) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>                              model,
        ::PersonaRepository&                                                   personaRepository,
        ::IOptions&                                                            Options,
        ::ToastManager&                                                        toastManager,
        ::std::optional<::Bedrock::NotNullNonOwnerPtr<::Parties::PartySystem>> partySystem
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
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $showToast(::ToastMessage message, bool animateIn);

    MCAPI void $removeToast();

    MCAPI void $refreshToast();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftable();
    // NOLINTEND
};
