#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/EduExternalLinkResourceUriState.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class EduExternalLinkScreenController : public ::MinecraftScreenController {
public:
    // EduExternalLinkScreenController inner types declare
    // clang-format off
    struct Capabilities;
    // clang-format on

    // EduExternalLinkScreenController inner types define
    struct Capabilities {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::EduExternalLinkScreenController::Capabilities> mCapabilities;
    ::ll::TypedStorage<1, 1, ::EduExternalLinkResourceUriState>               mResourceUriState;
    // NOLINTEND

public:
    // prevent constructor by default
    EduExternalLinkScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual ~EduExternalLinkScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EduExternalLinkScreenController(::std::shared_ptr<::MinecraftScreenModel> model);

    MCAPI void _updateResourceUriState();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification notification);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
