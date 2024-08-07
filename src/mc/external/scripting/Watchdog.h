#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/IWatchdog.h"

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
    virtual void setWatchdogEventHandler(std::function<void(struct Scripting::WatchdogEvent)>);

    // vIndex: 2
    virtual void beginTiming(struct Scripting::ContextId);

    // vIndex: 3
    virtual void endTiming(struct Scripting::ContextId);

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
    MCAPI void _endContextTiming(struct Scripting::ContextId);

    MCAPI class Scripting::QuickJS::ContextTimings& _getOrCreateContextTime(struct Scripting::ContextId);

    MCAPI static void _outOfMemoryHandler(struct JSContext* ctx, void*);

    MCAPI static int _stackOverflowHandler(struct JSContext* ctx, void*);

    MCAPI static int _timeoutHandler(struct JSContext* ctx, void*);

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
