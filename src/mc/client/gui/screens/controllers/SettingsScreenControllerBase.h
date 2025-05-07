#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SettingsScreenControllerBase : public ::MainMenuScreenController {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SettingsScreenControllerBase() /*override*/ = default;

    // vIndex: 27
    virtual void addStaticScreenVars(::Json::Value&) /*override*/;

    // vIndex: 55
    virtual void _displayLockedWorldPopup();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
