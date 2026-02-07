#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/PanButtonState.h"

// auto generated forward declare list
// clang-format off
struct StoreCatalogItem;
// clang-format on

class WorldTemplatePurchaseScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                      mWorldTemplateInstalled;
    ::ll::TypedStorage<1, 1, bool>                      mScrollButtonRelease;
    ::ll::TypedStorage<4, 4, ::PanButtonState>          mPanState;
    ::ll::TypedStorage<4, 4, float>                     mUVx;
    ::ll::TypedStorage<4, 4, float const>               mScrollSpeed;
    ::ll::TypedStorage<8, 8, ::StoreCatalogItem const&> mItem;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplatePurchaseScreenController& operator=(WorldTemplatePurchaseScreenController const&);
    WorldTemplatePurchaseScreenController(WorldTemplatePurchaseScreenController const&);
    WorldTemplatePurchaseScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification) /*override*/;

    virtual ~WorldTemplatePurchaseScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
