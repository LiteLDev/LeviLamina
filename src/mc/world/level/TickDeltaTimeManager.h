#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ITickDeltaTimeManagerProxy;
// clang-format on

class TickDeltaTimeManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, double> mTickDeltaTime;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ITickDeltaTimeManagerProxy>> const>
        mTickDeltaTimeManagerProxy;
    // NOLINTEND

public:
    // prevent constructor by default
    TickDeltaTimeManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit TickDeltaTimeManager(::std::unique_ptr<::ITickDeltaTimeManagerProxy> tickDeltaTimeManagerProxy);

    MCAPI void captureDeltaTime();

    MCFOLD double getTickDeltaTime() const;

    MCAPI ~TickDeltaTimeManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::ITickDeltaTimeManagerProxy> tickDeltaTimeManagerProxy);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
