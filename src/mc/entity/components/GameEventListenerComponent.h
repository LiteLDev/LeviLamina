#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameEventDynamicRegistration;
// clang-format on

class GameEventListenerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameEventDynamicRegistration>> mListenerRegistration;
    // NOLINTEND

public:
    // prevent constructor by default
    GameEventListenerComponent& operator=(GameEventListenerComponent const&);
    GameEventListenerComponent(GameEventListenerComponent const&);
    GameEventListenerComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool initialize(::std::unique_ptr<::GameEventDynamicRegistration> registration);

    MCNAPI ::GameEventListenerComponent& operator=(::GameEventListenerComponent&& other);

    MCNAPI ~GameEventListenerComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
