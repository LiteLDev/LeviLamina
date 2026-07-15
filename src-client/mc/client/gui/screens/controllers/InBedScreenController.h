#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class Player;
// clang-format on

class InBedScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&> mSleepingPlayer;
    ::ll::TypedStorage<4, 4, int>       mSleepingPlayerCount;
    ::ll::TypedStorage<4, 4, int>       mRequiredSleepingPlayerCount;
    ::ll::TypedStorage<1, 1, bool>      mIsAbleToSleep;
    // NOLINTEND

public:
    // prevent constructor by default
    InBedScreenController& operator=(InBedScreenController const&);
    InBedScreenController(InBedScreenController const&);
    InBedScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InBedScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual bool _isStillValid() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InBedScreenController(::std::shared_ptr<::ClientInstanceScreenModel> model, ::Player& player);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model, ::Player& player);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI bool $_isStillValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
