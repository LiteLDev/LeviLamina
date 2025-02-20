#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/watchdog/IWatchdog.h"

// auto generated forward declare list
// clang-format off
struct JSContext;
struct JSRuntime;
namespace Scripting { struct ContextId; }
namespace Scripting { struct WatchdogEvent; }
namespace Scripting { struct WatchdogSettings; }
namespace Scripting::QuickJS { class ContextTimings; }
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
    ::ll::UntypedStorage<8, 40> mUnk1dbd5d;
    ::ll::UntypedStorage<8, 24> mUnk22872d;
    ::ll::UntypedStorage<8, 24> mUnk3218f5;
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
    // vIndex: 0
    virtual ~Watchdog() /*override*/;

    // vIndex: 1
    virtual void setWatchdogEventHandler(::std::function<void(::Scripting::WatchdogEvent)> watchdogEventHandler
    ) /*override*/;

    // vIndex: 2
    virtual void beginTiming(::Scripting::ContextId contextId) /*override*/;

    // vIndex: 3
    virtual void endTiming(::Scripting::ContextId contextId) /*override*/;

    // vIndex: 4
    virtual void pushPhase(::std::string const& namedPhase, ::std::chrono::microseconds frameBaseLine) /*override*/;

    // vIndex: 5
    virtual void popPhase() /*override*/;

    // vIndex: 6
    virtual void endFrame() /*override*/;

    // vIndex: 7
    virtual void resetTimings() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Watchdog(::JSRuntime* rt, ::Scripting::WatchdogSettings settings);

    MCAPI void _endContextTiming(::Scripting::ContextId contextId);

    MCAPI ::Scripting::QuickJS::ContextTimings& _getOrCreateContextTime(::Scripting::ContextId contextId);

    MCAPI void _sendWatchdogEvent(::Scripting::WatchdogEvent watchdogEvent);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _outOfMemoryHandler(::JSContext* ctx, void* runtimeOpaque);

    MCAPI static int _stackOverflowHandler(::JSContext* ctx, void* runtimeOpaque);

    MCAPI static int _timeoutHandler(::JSContext* ctx, void* runtimeOpaque);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::JSRuntime* rt, ::Scripting::WatchdogSettings settings);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setWatchdogEventHandler(::std::function<void(::Scripting::WatchdogEvent)> watchdogEventHandler);

    MCAPI void $beginTiming(::Scripting::ContextId contextId);

    MCAPI void $endTiming(::Scripting::ContextId contextId);

    MCAPI void $pushPhase(::std::string const& namedPhase, ::std::chrono::microseconds frameBaseLine);

    MCAPI void $popPhase();

    MCAPI void $endFrame();

    MCAPI void $resetTimings();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
