#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameEventListener;
// clang-format on

class GameEventListenerRegistry : public ::std::enable_shared_from_this<::GameEventListenerRegistry> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1e439b;
    // NOLINTEND

public:
    // prevent constructor by default
    GameEventListenerRegistry& operator=(GameEventListenerRegistry const&);
    GameEventListenerRegistry(GameEventListenerRegistry const&);
    GameEventListenerRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::gsl::final_action<::std::function<void()>> registerListener(::GameEventListener& gameEventListener);
    // NOLINTEND
};
