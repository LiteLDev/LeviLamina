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
    ::ll::UntypedStorage<8, 8> mUnkde87f1;
    // NOLINTEND

public:
    // prevent constructor by default
    GameEventListenerComponent& operator=(GameEventListenerComponent const&);
    GameEventListenerComponent(GameEventListenerComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameEventListenerComponent();

    MCAPI GameEventListenerComponent(::GameEventListenerComponent&&);

    MCAPI bool initialize(::std::unique_ptr<::GameEventDynamicRegistration> registration);

    MCAPI ::GameEventListenerComponent& operator=(::GameEventListenerComponent&&);

    MCAPI ::GameEventDynamicRegistration* tryGetListenerRegistration() const;

    MCAPI ~GameEventListenerComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::GameEventListenerComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
