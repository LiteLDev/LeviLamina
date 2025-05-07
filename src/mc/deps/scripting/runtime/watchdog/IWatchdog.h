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
    // vIndex: 0
    virtual ~IWatchdog() = default;

    // vIndex: 1
    virtual void setWatchdogEventHandler(::std::function<void(::Scripting::WatchdogEvent)>) = 0;

    // vIndex: 2
    virtual void beginTiming(::Scripting::ContextId) = 0;

    // vIndex: 3
    virtual void endTiming(::Scripting::ContextId) = 0;

    // vIndex: 4
    virtual void pushPhase(::std::string const&, ::std::chrono::microseconds) = 0;

    // vIndex: 5
    virtual void popPhase() = 0;

    // vIndex: 6
    virtual void endFrame() = 0;

    // vIndex: 7
    virtual void resetTimings() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Scripting
