#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/social/IToastEventListener.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class ToastAnnouncementSurface;
class ToastManager;
class ToastMessage;
// clang-format on

class PlayerMessagingToastSubController : public ::MinecraftScreenController, public ::IToastEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ToastManager&>                                         mToastManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ToastAnnouncementSurface>> mToastSurface;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerMessagingToastSubController& operator=(PlayerMessagingToastSubController const&);
    PlayerMessagingToastSubController(PlayerMessagingToastSubController const&);
    PlayerMessagingToastSubController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerMessagingToastSubController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void handleToastEvent(::IToastEventListener::ToastEventType const, ::ToastMessage const) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerMessagingToastSubController(
        ::std::shared_ptr<::MinecraftScreenModel>              minecraftScreenModel,
        ::Bedrock::NonOwnerPointer<::ToastAnnouncementSurface> toastSurface,
        ::ToastManager&                                        toastManager
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>              minecraftScreenModel,
        ::Bedrock::NonOwnerPointer<::ToastAnnouncementSurface> toastSurface,
        ::ToastManager&                                        toastManager
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
