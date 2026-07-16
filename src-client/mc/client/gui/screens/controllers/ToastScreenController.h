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
class IOptionRegistry;
class MinecraftScreenModel;
class PartySystemSubController;
class PerfTurtleScreenController;
class PersonaRepository;
class PlayerMessagingToastSubController;
class ToastManager;
namespace Json { class Value; }
namespace Parties { class PartySystem; }
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
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlayerMessagingToastSubController>>
                                                                          mPlayerMessagingToastSubController;
    ::ll::TypedStorage<8, 8, ::PersonaRepository&>                        mPersonaRepository;
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>                          mOptions;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ToastManager>> mToastManager;
    ::ll::TypedStorage<8, 376, ::std::optional<::ToastMessage>>           mToastMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    ToastScreenController& operator=(ToastScreenController const&);
    ToastScreenController(ToastScreenController const&);
    ToastScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ToastScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual void showToast(::ToastMessage, bool) /*override*/;

    virtual void removeToast() /*override*/;

    virtual void refreshToast() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ToastScreenController(
        ::std::shared_ptr<::MinecraftScreenModel>          model,
        ::PersonaRepository&                               personaRepository,
        ::IOptionRegistry&                                 Options,
        ::ToastManager&                                    toastManager,
        ::Bedrock::NonOwnerPointer<::Parties::PartySystem> partySystem
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>          model,
        ::PersonaRepository&                               personaRepository,
        ::IOptionRegistry&                                 Options,
        ::ToastManager&                                    toastManager,
        ::Bedrock::NonOwnerPointer<::Parties::PartySystem> partySystem
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
