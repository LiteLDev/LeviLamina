#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextId; }
namespace Scripting { struct WatchdogEvent; }
// clang-format on

namespace Scripting {

class IWatchdog {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 32> mUnk4aaa86;
    // NOLINTEND

public:
    // prevent constructor by default
    IWatchdog& operator=(IWatchdog const&);
    IWatchdog(IWatchdog const&);
    IWatchdog();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWatchdog();

    virtual void setWatchdogEventHandler(::std::function<void(::Scripting::WatchdogEvent)> watchdogEventHandler) = 0;

    virtual void setWatchdogInterruptPollCounter(uint counter) = 0;

    virtual void beginTiming(::Scripting::ContextId contextId) = 0;

    virtual void endTiming(::Scripting::ContextId contextId) = 0;

    virtual void pushPhase(::std::string const& namedPhase, ::std::chrono::microseconds frameBaseLine) = 0;

    virtual void popPhase() = 0;

    virtual void endFrame() = 0;

    virtual void resetTimings() = 0;
    // NOLINTEND
};

} // namespace Scripting
