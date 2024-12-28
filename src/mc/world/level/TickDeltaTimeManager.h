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
    ::ll::UntypedStorage<8, 8> mUnk27bb36;
    ::ll::UntypedStorage<8, 8> mUnk6cf847;
    // NOLINTEND

public:
    // prevent constructor by default
    TickDeltaTimeManager& operator=(TickDeltaTimeManager const&);
    TickDeltaTimeManager(TickDeltaTimeManager const&);
    TickDeltaTimeManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit TickDeltaTimeManager(::std::unique_ptr<::ITickDeltaTimeManagerProxy> tickDeltaTimeManagerProxy);

    MCAPI void captureDeltaTime();

    MCAPI double getTickDeltaTime() const;

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
    MCAPI void $dtor();
    // NOLINTEND
};
