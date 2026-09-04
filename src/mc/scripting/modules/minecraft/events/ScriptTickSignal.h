#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/Closure.h"

namespace ScriptModuleMinecraft {

class ScriptTickSignal {
public:
    // ScriptTickSignal inner types declare
    // clang-format off
    struct PendingUnsubscribe;
    struct Slot;
    struct PendingSubscribe;
    // clang-format on

    // ScriptTickSignal inner types define
    enum class IntervalStatus : uint {
        Once    = 0,
        Repeat  = 1,
        Expired = 2,
    };

    struct PendingUnsubscribe {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> id;
        // NOLINTEND
    };

    struct Slot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                                                      id;
        ::ll::TypedStorage<4, 4, uint>                                                      lastTick;
        ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptTickSignal::IntervalStatus> status;
        ::ll::TypedStorage<4, 4, uint>                                                      initialInterval;
        ::ll::TypedStorage<4, 4, uint>                                                      currentInterval;
        ::ll::TypedStorage<8, 120, ::std::variant<::Scripting::Closure<void()>, ::std::function<void()>>> closure;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Slot();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct PendingSubscribe {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 144, ::ScriptModuleMinecraft::ScriptTickSignal::Slot> slot;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~PendingSubscribe();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                            mNextId;
    ::ll::TypedStorage<1, 1, bool>                                                            mDispatching;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptTickSignal::Slot>> mActive;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<
            ::ScriptModuleMinecraft::ScriptTickSignal::PendingSubscribe,
            ::ScriptModuleMinecraft::ScriptTickSignal::PendingUnsubscribe>>>
        mPending;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI uint scheduleInterval(::Scripting::Closure<void()>&& closure, uint interval, uint currentTick);

    MCAPI uint scheduleTimeout(::Scripting::Closure<void()>&& closure, uint delay, uint currentTick);

    MCAPI uint scheduleTimeout(::std::function<void()> function, uint delay, uint currentTick);

    MCAPI uint scheduleTimeoutSafe(::Scripting::Closure<void()>&& closure, uint currentTick);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
