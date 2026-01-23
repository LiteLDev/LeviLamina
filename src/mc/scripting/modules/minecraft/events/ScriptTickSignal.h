#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/script_engine/Closure.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
// clang-format on

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
        ::ll::TypedStorage<8, 112, ::std::variant<::Scripting::Closure<void()>, ::std::function<void()>>> closure;
        // NOLINTEND

    public:
        // prevent constructor by default
        Slot& operator=(Slot const&);
        Slot(Slot const&);
        Slot();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Slot(::ScriptModuleMinecraft::ScriptTickSignal::Slot&&);

        MCAPI ~Slot();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptTickSignal::Slot&&);
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
        ::ll::TypedStorage<8, 136, ::ScriptModuleMinecraft::ScriptTickSignal::Slot> slot;
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
    MCAPI void _processActive(
        ::std::vector<::ScriptModuleMinecraft::ScriptTickSignal::Slot>& slots,
        uint                                                            currentTick,
        ::ScriptDeferredFlushTracker&                                   deferredTracker
    );

    MCAPI void _processPending(
        ::std::vector<::std::variant<
            ::ScriptModuleMinecraft::ScriptTickSignal::PendingSubscribe,
            ::ScriptModuleMinecraft::ScriptTickSignal::PendingUnsubscribe>>& pendingList,
        ::std::vector<::ScriptModuleMinecraft::ScriptTickSignal::Slot>&      activeList
    );

    MCAPI uint scheduleInterval(::Scripting::Closure<void()>&& closure, uint interval, uint currentTick);

    MCAPI uint scheduleTimeout(::Scripting::Closure<void()>&& closure, uint delay, uint currentTick);

    MCAPI uint scheduleTimeout(::std::function<void()> function, uint delay, uint currentTick);

    MCAPI uint scheduleTimeoutSafe(::Scripting::Closure<void()>&& closure, uint currentTick);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
