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
    // vIndex: 0, symbol: __gen_??1Watchdog@QuickJS@Scripting@@UEAA@XZ
    virtual ~Watchdog() = default;

    // vIndex: 1, symbol:
    // ?setWatchdogEventHandler@Watchdog@QuickJS@Scripting@@UEAAXV?$function@$$A6AXUWatchdogEvent@Scripting@@@Z@std@@@Z
    virtual void setWatchdogEventHandler(std::function<void(struct Scripting::WatchdogEvent)>);

    // vIndex: 2, symbol: ?beginTiming@Watchdog@QuickJS@Scripting@@UEAAXUContextId@3@@Z
    virtual void beginTiming(struct Scripting::ContextId);

    // vIndex: 3, symbol: ?endTiming@Watchdog@QuickJS@Scripting@@UEAAXUContextId@3@@Z
    virtual void endTiming(struct Scripting::ContextId);

    // vIndex: 4, symbol: ?endFrame@Watchdog@QuickJS@Scripting@@UEAAXXZ
    virtual void endFrame();

    // vIndex: 5, symbol: ?resetTimings@Watchdog@QuickJS@Scripting@@UEAAXXZ
    virtual void resetTimings();

    // vIndex: 6, symbol:
    // ?collectTotalFrameTime@Watchdog@QuickJS@Scripting@@UEBA?AV?$duration@_JU?$ratio@$00$0PECEA@@std@@@chrono@std@@XZ
    virtual std::chrono::microseconds collectTotalFrameTime() const;

    // symbol: ??0Watchdog@QuickJS@Scripting@@QEAA@PEAUJSRuntime@@UWatchdogSettings@2@@Z
    MCAPI Watchdog(struct JSRuntime* rt, struct Scripting::WatchdogSettings settings);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_endContextTiming@Watchdog@QuickJS@Scripting@@AEAAXUContextId@3@@Z
    MCAPI void _endContextTiming(struct Scripting::ContextId);

    // symbol: ?_getOrCreateContextTime@Watchdog@QuickJS@Scripting@@AEAAAEAVContextTimings@23@UContextId@3@@Z
    MCAPI class Scripting::QuickJS::ContextTimings& _getOrCreateContextTime(struct Scripting::ContextId);

    // symbol: ?_outOfMemoryHandler@Watchdog@QuickJS@Scripting@@CAXPEAUJSContext@@PEAX@Z
    MCAPI static void _outOfMemoryHandler(struct JSContext* ctx, void*);

    // symbol: ?_stackOverflowHandler@Watchdog@QuickJS@Scripting@@CAHPEAUJSContext@@PEAX@Z
    MCAPI static int _stackOverflowHandler(struct JSContext* ctx, void*);

    // symbol: ?_timeoutHandler@Watchdog@QuickJS@Scripting@@CAHPEAUJSContext@@PEAX@Z
    MCAPI static int _timeoutHandler(struct JSContext* ctx, void*);

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
