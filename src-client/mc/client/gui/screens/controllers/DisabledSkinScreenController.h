#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class DisabledSkinScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                     twoButtonMode;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> twoButtonCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    DisabledSkinScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DisabledSkinScreenController() /*override*/ = default;

    virtual ::std::string getTelemetryOverride() const /*override*/;

    virtual void onEntered() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DisabledSkinScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        bool                                      twoButtonWithCallback,
        ::std::function<void()>                   callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        bool                                      twoButtonWithCallback,
        ::std::function<void()>                   callback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $getTelemetryOverride() const;

    MCAPI void $onEntered();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
