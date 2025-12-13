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
    virtual ~IWatchdog() = default;

    virtual void setWatchdogEventHandler(::std::function<void(::Scripting::WatchdogEvent)>) = 0;

    virtual void beginTiming(::Scripting::ContextId) = 0;

    virtual void endTiming(::Scripting::ContextId) = 0;

    virtual void pushPhase(::std::string const&, ::std::chrono::microseconds) = 0;

    virtual void popPhase() = 0;

    virtual void endFrame() = 0;

    virtual void resetTimings() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Scripting
