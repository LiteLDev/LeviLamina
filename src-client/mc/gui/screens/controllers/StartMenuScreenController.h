#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/gui/screens/controllers/MainMenuScreenController.h"

// auto generated inclusion list
#include "mc/entity/flags/DirtyFlag.h"
#include "mc/enums/ui/SceneType.h"
#include "mc/enums/ui/ViewRequest.h"
#include "mc/world/events/GameEventNotification.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace Social { class User; }
// clang-format on

class StartMenuScreenController : public MainMenuScreenController {
public:
    // StartMenuScreenController inner types declare
    // clang-format off
    class SignOutObserver;
    // clang-format on

    // StartMenuScreenController inner types define
    class SignOutObserver {
    public:
        // prevent constructor by default
        SignOutObserver& operator=(SignOutObserver const&);
        SignOutObserver(SignOutObserver const&);
        SignOutObserver();

    public:
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // prevent constructor by default
    StartMenuScreenController& operator=(StartMenuScreenController const&);
    StartMenuScreenController(StartMenuScreenController const&);
    StartMenuScreenController();

public:
    // NOLINTBEGIN

    MCAPI void _registerBindings();

    // NOLINTEND
};
