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

    // vIndex: 1, symbol: ?beginTiming@Watchdog@QuickJS@Scripting@@UEAAXUContextId@3@@Z
    virtual void beginTiming(struct Scripting::ContextId);

    // vIndex: 2, symbol: ?endTiming@Watchdog@QuickJS@Scripting@@UEAAXUContextId@3@@Z
    virtual void endTiming(struct Scripting::ContextId);

    // vIndex: 3, symbol: ?update@Watchdog@QuickJS@Scripting@@UEAAXXZ
    virtual void update();

    // vIndex: 4, symbol:
    // ?getTotalFrameTime@Watchdog@QuickJS@Scripting@@UEBA?AV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@XZ
    virtual std::chrono::nanoseconds getTotalFrameTime() const;

    // vIndex: 5, symbol:
    // ?setWatchdogEventHandler@Watchdog@QuickJS@Scripting@@UEAAXV?$function@$$A6AXUWatchdogEvent@Scripting@@@Z@std@@@Z
    virtual void setWatchdogEventHandler(std::function<void(struct Scripting::WatchdogEvent)>);

    // vIndex: 6, symbol: ?pausePerformanceWatchdog@Watchdog@QuickJS@Scripting@@UEAAX_N@Z
    virtual void pausePerformanceWatchdog(bool pause);

    // vIndex: 7, symbol: ?resetWatchdogTimes@Watchdog@QuickJS@Scripting@@UEAAXXZ
    virtual void resetWatchdogTimes();

    // symbol: ??0Watchdog@QuickJS@Scripting@@QEAA@PEAUJSRuntime@@UWatchdogSettings@2@@Z
    MCAPI Watchdog(struct JSRuntime* rt, struct Scripting::WatchdogSettings settings);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_updateContextTiming@Watchdog@QuickJS@Scripting@@AEAAXUContextId@3@@Z
    MCAPI void _updateContextTiming(struct Scripting::ContextId);

    // symbol: ?_outOfMemoryHandler@Watchdog@QuickJS@Scripting@@CAXPEAUJSContext@@PEAX@Z
    MCAPI static void _outOfMemoryHandler(struct JSContext* ctx, void*);

    // symbol: ?_stackOverflowHandler@Watchdog@QuickJS@Scripting@@CAHPEAUJSContext@@PEAX@Z
    MCAPI static int _stackOverflowHandler(struct JSContext* ctx, void*);

    // symbol: ?_timeoutHandler@Watchdog@QuickJS@Scripting@@CAHPEAUJSContext@@PEAX@Z
    MCAPI static int _timeoutHandler(struct JSContext* ctx, void*);

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
