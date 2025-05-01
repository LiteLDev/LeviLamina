#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameEventListener;
// clang-format on

class GameEventListenerRegistry : public ::std::enable_shared_from_this<::GameEventListenerRegistry> {
public:
    // GameEventListenerRegistry inner types define
    using RegistrationToken = ::gsl::final_action<::std::function<void()>>;

    using ListenerVector = ::std::vector<::std::reference_wrapper<::GameEventListener>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::GameEventListener>>> mListeners;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::gsl::final_action<::std::function<void()>> registerListener(::GameEventListener& gameEventListener);
    // NOLINTEND
};
