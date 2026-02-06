#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/CreditsType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class CreditsScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CreditsType>            mContentType;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mFinishedCallback;
    ::ll::TypedStorage<1, 1, bool>                     mScrollFaster;
    // NOLINTEND

public:
    // prevent constructor by default
    CreditsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onOpen() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual ~CreditsScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CreditsScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::CreditsType                             contentType,
        ::std::function<void()>                   finishedCallback
    );

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::CreditsType                             contentType,
        ::std::function<void()>                   finishedCallback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onOpen();

    MCAPI void $onTerminate();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
