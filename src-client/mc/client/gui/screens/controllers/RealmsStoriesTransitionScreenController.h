#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/network/realms/World.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
// clang-format on

class RealmsStoriesTransitionScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 656, ::Realms::World> mWorld;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesTransitionScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesTransitionScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void onLeave() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsStoriesTransitionScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Realms::World const&                         world
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model, ::Realms::World const& world);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI void $onLeave();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
