#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
struct ScreenEvent;
struct UIPropertyBag;
// clang-format on

class TestScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mGoButton1Id;
    ::ll::TypedStorage<4, 4, uint> mGoButton2Id;
    ::ll::TypedStorage<1, 1, bool> mAnimActive;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TestScreenController() /*override*/ = default;

    virtual ::ui::ViewRequest handleEvent(::ScreenEvent&) /*override*/;

    virtual bool bind(
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    ) /*override*/;

    virtual void handleLicenseChanged() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
