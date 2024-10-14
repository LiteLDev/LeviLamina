#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/watchdog/IWatchdog.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IWatchdog; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct WatchdogEvent; }
namespace Scripting { struct WatchdogSettings; }
namespace Scripting::QuickJS { class ContextTimings; }
struct JSContext;
struct JSRuntime;
// clang-format on

namespace Scripting::QuickJS {

class Watchdog : public ::Scripting::IWatchdog {
public:
    // prevent constructor by default
    Watchdog& operator=(Watchdog const&);
    Watchdog(Watchdog const&);
    Watchdog();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Watchdog() = default;

    // vIndex: 1
    virtual void setWatchdogEventHandler(std::function<void(struct Scripting::WatchdogEvent)> watchdogEventHandler);

    // vIndex: 2
    virtual void beginTiming(struct Scripting::ContextId contextId);

    // vIndex: 3
    virtual void endTiming(struct Scripting::ContextId contextId);

    // vIndex: 4
    virtual void endFrame();

    // vIndex: 5
    virtual void resetTimings();

    // vIndex: 6
    virtual std::chrono::microseconds collectTotalFrameTime() const;

    MCAPI Watchdog(struct JSRuntime* rt, struct Scripting::WatchdogSettings settings);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _endContextTiming(struct Scripting::ContextId contextId);

    MCAPI class Scripting::QuickJS::ContextTimings& _getOrCreateContextTime(struct Scripting::ContextId contextId);

    MCAPI static void _outOfMemoryHandler(struct JSContext* ctx, void* runtimeOpaque);

    MCAPI static int _stackOverflowHandler(struct JSContext* ctx, void* runtimeOpaque);

    MCAPI static int _timeoutHandler(struct JSContext* ctx, void* runtimeOpaque);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void beginTiming$(struct Scripting::ContextId contextId);

    MCAPI std::chrono::microseconds collectTotalFrameTime$() const;

    MCAPI void endFrame$();

    MCAPI void endTiming$(struct Scripting::ContextId contextId);

    MCAPI void resetTimings$();

    MCAPI void setWatchdogEventHandler$(std::function<void(struct Scripting::WatchdogEvent)> watchdogEventHandler);

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
