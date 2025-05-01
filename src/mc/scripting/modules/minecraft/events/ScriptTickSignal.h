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
    struct PendingSubscribe;
    struct PendingUnsubscribe;
    struct Slot;
    // clang-format on

    // ScriptTickSignal inner types define
    enum class IntervalStatus : uint {
        Once    = 0,
        Repeat  = 1,
        Expired = 2,
    };

    struct Slot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>   mUnk1c2039;
        ::ll::UntypedStorage<4, 4>   mUnkeea401;
        ::ll::UntypedStorage<4, 4>   mUnkde3b98;
        ::ll::UntypedStorage<4, 4>   mUnk976984;
        ::ll::UntypedStorage<4, 4>   mUnk56aa7d;
        ::ll::UntypedStorage<8, 240> mUnka96bda;
        // NOLINTEND

    public:
        // prevent constructor by default
        Slot& operator=(Slot const&);
        Slot(Slot const&);
        Slot();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Slot(::ScriptModuleMinecraft::ScriptTickSignal::Slot&&);

        MCNAPI ~Slot();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptTickSignal::Slot&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct PendingSubscribe {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 264> mUnk888667;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingSubscribe& operator=(PendingSubscribe const&);
        PendingSubscribe(PendingSubscribe const&);
        PendingSubscribe();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PendingSubscribe();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct PendingUnsubscribe {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk9795b9;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingUnsubscribe& operator=(PendingUnsubscribe const&);
        PendingUnsubscribe(PendingUnsubscribe const&);
        PendingUnsubscribe();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk1c2e4e;
    ::ll::UntypedStorage<1, 1>  mUnkd41d18;
    ::ll::UntypedStorage<8, 24> mUnk1f3f86;
    ::ll::UntypedStorage<8, 24> mUnkf23b52;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTickSignal& operator=(ScriptTickSignal const&);
    ScriptTickSignal(ScriptTickSignal const&);
    ScriptTickSignal();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _processActive(
        ::std::vector<::ScriptModuleMinecraft::ScriptTickSignal::Slot>& slots,
        uint                                                            currentTick,
        ::ScriptDeferredFlushTracker&                                   deferredTracker
    );

    MCNAPI void _processPending(
        ::std::vector<::std::variant<
            ::ScriptModuleMinecraft::ScriptTickSignal::PendingSubscribe,
            ::ScriptModuleMinecraft::ScriptTickSignal::PendingUnsubscribe>>& pendingList,
        ::std::vector<::ScriptModuleMinecraft::ScriptTickSignal::Slot>&      activeList
    );

    MCNAPI uint scheduleInterval(::Scripting::Closure<void()>&& closure, uint interval, uint currentTick);

    MCNAPI uint scheduleTimeout(::Scripting::Closure<void()>&& closure, uint delay, uint currentTick);

    MCNAPI uint scheduleTimeout(::std::function<void()> function, uint delay, uint currentTick);

    MCNAPI uint scheduleTimeoutSafe(::Scripting::Closure<void()>&& closure, uint currentTick);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
