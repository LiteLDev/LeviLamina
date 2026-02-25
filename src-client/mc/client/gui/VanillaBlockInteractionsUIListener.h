#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class SceneFactory;
struct PlayerOpenContainerEvent;
// clang-format on

class VanillaBlockInteractionsUIListener : public ::EventListenerDispatcher<::PlayerEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mContainerScreenNames;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaBlockInteractionsUIListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onEvent(::PlayerOpenContainerEvent const& playerOpenContainerEvent) /*override*/;

    virtual ~VanillaBlockInteractionsUIListener() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit VanillaBlockInteractionsUIListener(::SceneFactory& sceneFactory);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SceneFactory& sceneFactory);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::PlayerOpenContainerEvent const& playerOpenContainerEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
