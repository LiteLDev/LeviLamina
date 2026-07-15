#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/watchdog/scripting/IWatchdog.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextId; }
namespace Scripting { struct WatchdogEvent; }
// clang-format on

namespace Scripting::QuickJS {

class Watchdog : public ::Scripting::IWatchdog {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk4f214f;
    ::ll::UntypedStorage<8, 64> mUnke0fc70;
    ::ll::UntypedStorage<8, 8>  mUnk74e2d6;
    ::ll::UntypedStorage<8, 16> mUnk83402b;
    ::ll::UntypedStorage<8, 16> mUnke744e8;
    ::ll::UntypedStorage<8, 8>  mUnk2babb0;
    ::ll::UntypedStorage<8, 40> mUnk149bab;
    ::ll::UntypedStorage<8, 24> mUnka13f8e;
    ::ll::UntypedStorage<8, 24> mUnk9a7287;
    ::ll::UntypedStorage<8, 8>  mUnk341985;
    ::ll::UntypedStorage<1, 1>  mUnkc10073;
    // NOLINTEND

public:
    // prevent constructor by default
    Watchdog& operator=(Watchdog const&);
    Watchdog(Watchdog const&);
    Watchdog();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Watchdog() /*override*/ = default;

    virtual void setWatchdogEventHandler(::std::function<void(::Scripting::WatchdogEvent)>) /*override*/;

    virtual void setWatchdogInterruptPollCounter(uint) /*override*/;

    virtual void beginTiming(::Scripting::ContextId) /*override*/;

    virtual void endTiming(::Scripting::ContextId) /*override*/;

    virtual void pushPhase(::std::string const&, ::std::chrono::microseconds) /*override*/;

    virtual void popPhase() /*override*/;

    virtual void endFrame() /*override*/;

    virtual void resetTimings() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Scripting::QuickJS
